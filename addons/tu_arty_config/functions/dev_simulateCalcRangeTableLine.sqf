
#include "script_component.hpp"

#define TIME_STEP (1/50)

params ["_muzzleVelocity", "_increasePerRow", "_airFriction","_derivation", "_flat","_mil"];

private _startTime = diag_tickTime;

//Run Binary search for correct elevation
private _solutionE = [_increasePerRow, 0, _muzzleVelocity, _airFriction, _derivation, TIME_STEP, _flat, _mil] call tu_arty_fnc_dev_simulateFindSolution;
if (_solutionE isEqualTo []) exitWith {[]};

//Height Adjustment for -100m (another binary search)
private _solutionH = [_increasePerRow, -100, _muzzleVelocity, _airFriction, _derivation, TIME_STEP, _flat, _mil] call tu_arty_fnc_dev_simulateFindSolution;
if (_solutionH isEqualTo []) exitWith {[]};//should never be triggered (lower elevation easier to hit)

{	
	_solution = _x;
	_solutionI = _forEachIndex;
	private _rangeToHitE = _solution select 0;
	{	
		private _rangeToHitH = _x select 0;
		if (_rangeToHitE == _rangeToHitH)then{	
			private _lineElevation = _solution select 1;
			private _lineTimeOfFlight = _solution select 4;
			private _lineHeightElevation = (_x select 1) - _lineElevation;
			private _lineHeightTimeDelta = (_x select 2) - _lineTimeOfFlight;
			_solution set [2,_lineHeightElevation];
			_solution set [3,_lineHeightTimeDelta];
			_solutionE set [_solutionI,_solution];
		};	
	} forEach _solutionH;
} forEach _solutionE;

_solutionE;


//[_rangeToHit, _lineElevation, _lineHeightElevation, _lineHeightTimeDelta, _lineTimeOfFlight, _lineCrosswindDeg, _lineHeadwindMeters, _lineTailWindMeters, _lineTempDec, _lineTempInc, _lineAirDensDec, _lineAirDensInc]
//[_rangeToHit, _lineElevation, _lineHeightElevation, _lineHeightTimeDelta, _lineTimeOfFlight, _lineCrosswindDeg, _lineHeadwindMeters, _lineTailWindMeters, _lineTempDec, _lineTempInc, _lineAirPressDec, _lineAirPressInc,_lineAirHumidityDec,_lineAirHumidityInc]
