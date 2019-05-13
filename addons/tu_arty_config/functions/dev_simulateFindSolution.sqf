
#include "script_component.hpp"

#define MAX_ATTEMPTS 22
params ["_increasePerRow", "_heightToHit", "_muzzleVelocity", "_airFriction","_derivation","_timeStep", "_flat","_mil"];

private _error1 = 100000;
private _error2 = 100000;
private _solutionElevation = -1;
private _lastTestResult1 = [];
private _lastTestResult2 = 0;
private _numberOfAttempts = 0;
private _lastElev1 = 0;
private _lastElev2 = 0;
private _elev = 0;
private _lastTestResultArr = [[0,[0,0,0]]];
private _rangeToHitArr = [0];
private _result = [];
private _lastTestResultMax = 0;
private _mil = 1/_mil*360;

private _temp = 15;
private _relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
_relDensity = _relDensity / 1.22113;

if (_flat) then {
	//расчет всех траэкторий
	_lastElev1 = 0.05625;
	_lastElev2 = 0.05625;
	_elev = 45;
	
	while {_lastElev1 <= _elev} do {
		_lastTestResult1 = [_lastElev1, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, _heightToHit, _timeStep, 0] call tu_arty_fnc_dev_simulateShot;
		
		if (_lastTestResultMax < (_lastTestResult1 select 0)) then {
			_lastTestResultMax = _lastTestResult1 select 0;
		};
		
		if ((_lastTestResult1 select 0) > _lastTestResult2) then {
			_lastTestResult2 = _lastTestResult1 select 0;
			_lastTestResultArr pushBack [_lastElev1, _lastTestResult1];	
		};
		
		_lastElev1 = _lastElev1 + 0.05625;		
	};
}else{
	_lastElev1 = 87;
	_lastElev2 = 87;
	_elev = 30;

	while {_lastElev1 >= _elev} do {
		_lastTestResult1 = [_lastElev1, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, _heightToHit, _timeStep, 0] call tu_arty_fnc_dev_simulateShot;	
	
		if (_lastTestResultMax < (_lastTestResult1 select 0)) then {
			_lastTestResultMax = _lastTestResult1 select 0;
		};
		
		if ((_lastTestResult1 select 0) > _lastTestResult2) then {
			_lastTestResult2 = _lastTestResult1 select 0;
			_lastTestResultArr pushBack [_lastElev1, _lastTestResult1];	
		};
		
		_lastElev1 = _lastElev1 - 0.05625;		
	};
};
_rangeToHitArr = [_lastTestResultMax];

//генерация табличных дальностей до макс
if ((((_lastTestResultArr select 0) select 1) select 0)>(((_lastTestResultArr select 1) select 1) select 0))then{
	for [{_i=_increasePerRow}, {_i <= _lastTestResultMax}, {_i = _i + _increasePerRow}] do {_rangeToHitArr pushBack _i};
}else{
	for [{_i=_increasePerRow}, {_i <= _lastTestResultMax}, {_i = _i + _increasePerRow}] do {_rangeToHitArr pushBack _i};
};

{ //поиск траэкторий близких к табличным
	private _rangeToHit = _x;
	private _error2 = 100000;
	private _error1 = 100000;
	private _lastTestResult2 = [];
	
	{
		_error1 = abs(_rangeToHit - ((_x select 1) select 0));	
		if ((_error1 < _error2)&&(_error1<25)) then {
			_error2 = _error1;		
			_lastTestResult2 = _x;		
		};
	} forEach _lastTestResultArr;
	
	private _lineElevation = _lastTestResult2 select 0;
	private _range = (_lastTestResult2 select 1) select 0;
	
	//Time Of Flight:
	private _lineTimeOfFlight = (_lastTestResult2 select 1) select 1;
	
	// расчет поправок
	if (_heightToHit==0)then{
	
		private _temp = 15;
		private _relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113;
		
		//deltaX
		private _lastTestResult = [_lineElevation+_mil, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineDeltaX = (_range - (_lastTestResult select 0));

		//Crosswind
		private _lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 10, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineCrosswindDeg = (_lastTestResult select 2) / 10;
		
		//Headwind:
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, -10, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineHeadwindMeters = (_range - (_lastTestResult select 0)) / 10;
		
		//TailWind:
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 10, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineTailWindMeters = (_range - (_lastTestResult select 0)) / 10;
	
		//Air Temp
		_temp = 15 - 10;
		_relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113;
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineTemp = (_range - (_lastTestResult select 0));
		
		_temp = 15;
		//Air pressure 
		_relDensity = [_temp, 1013.25-100, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113;
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineAirPress = (_range - (_lastTestResult select 0))/10;

		//Air Density Dec
		_relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113 - 0.1;
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineAirDensityDec = (_range - (_lastTestResult select 0))/10;
		
		//Air Density Inc
		_relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113 + 0.1;
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,0] call tu_arty_fnc_dev_simulateShot;
		private _lineAirDensityInc = (_range - (_lastTestResult select 0))/10;
		
		//derivation
		_relDensity = [_temp, 1013.25, 0.5] call ace_weather_fnc_calculateAirDensity;
		_relDensity = _relDensity / 1.22113;
		_lastTestResult = [_lineElevation, _muzzleVelocity, _airFriction, _temp, _relDensity, 0, 0, 0, _timeStep,_derivation] call tu_arty_fnc_dev_simulateShot;
		private _lineDerivation = _lastTestResult select 2;
					
		_lineTailWindMeters = ((abs _lineTailWindMeters) + (abs _lineHeadwindMeters))/2;		
		
		_result pushback [_rangeToHit, _lineElevation, 0, 0, _lineTimeOfFlight, _lineDerivation, _lineCrosswindDeg, _lineTailWindMeters, _lineTemp, _lineAirPress, _lineAirDensityDec, _lineAirDensityInc, _lineDeltaX];
	}else{		
		_result pushBack [_rangeToHit, _lineElevation, _lineTimeOfFlight];
	}
} forEach _rangeToHitArr;


if (_numberOfAttempts >= MAX_ATTEMPTS) exitWith {[]};

_result;


