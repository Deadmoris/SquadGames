
#include "script_component.hpp"
params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if (GVAR(useAmmoHandling) && {_vehicle getVariable [QGVAR(initialized),false] && !(_vehicle getVariable [QGVAR(exclude),false])}) then {
    // if !(_vehicle getVariable [QGVAR(exclude),false]) then {
        _vehicle removeMagazineGlobal (_vehicle magazinesTurret [0] select 0);
        TRACE_1("",_vehicle magazinesTurret [0]);
    // };
};

//AI will have no clue how to use:
_shooterMan = gunner _vehicle;
if (!([_shooterMan] call EFUNC(common,isPlayer))) exitWith {false};
//Calculate air density:

private _air_friction = getNumber (configFile >> "CfgAmmo" >> _ammo >> "airFriction");
private _derivation = getNumber (configFile >> "CfgAmmo" >> _ammo >> "tu_arty_derivation");
private _altitude = (getPosASL _vehicle) select 2;
private _temperature = _altitude call EFUNC(weather,calculateTemperatureAtHeight); //standard value 15
private _pressure = _altitude call EFUNC(weather,calculateBarometricPressure); //standard value 1013.25
private _relativeHumidity = EGVAR(weather,currentHumidity); //standard value 0.5

//debug
//if (isNil "tu_arty_airDensity") then {
//	tu_arty_airDensity = [true,15,1013.25,0.5];
//};	
//if (!(tu_arty_airDensity select 0)) then {
//	_temperature = tu_arty_airDensity select 1;
//	_pressure = tu_arty_airDensity select 2;
//	_relativeHumidity = tu_arty_airDensity select 3;
//};

private _airDensity = [_temperature, _pressure, _relativeHumidity] call EFUNC(weather,calculateAirDensity);
private _relativeDensity = _airDensity / 1.22113;

TRACE_5("FiredWeather",_temperature,_pressure,_relativeHumidity,_airDensity,_relativeDensity);

//powder effects:
private _newMuzzleVelocityCoefficent = (((_temperature + 273.13) / 288.13 - 1) / 40 + 1);

if (_newMuzzleVelocityCoefficent != 1) then {
    _bulletVelocity = velocity _projectile;
    _bulletSpeed = vectorMagnitude _bulletVelocity;
    _bulletVelocity = (vectorNormalized _bulletVelocity) vectorMultiply (_bulletSpeed * _newMuzzleVelocityCoefficent);
    _projectile setVelocity _bulletVelocity;
};

[{
    params ["_args", "_pfID"];
    _args params ["_shell", "_airFriction", "_time", "_relativeDensity","_derivation"];
    if (isNull _shell || {!alive _shell}) exitWith {
		[_pfID] call CBA_fnc_removePerFrameHandler;
    };	
	private _deltaT = CBA_missionTime - _time;
    _args set[2, CBA_missionTime];
	
	if (simulationEnabled _shell) then {
    	private _bulletVelocity = velocity _shell;
		private _bulletSpeed = vectorMagnitude _bulletVelocity;	
		private _trueVelocity = _bulletVelocity vectorDiff wind;
		private _trueSpeed = vectorMagnitude _trueVelocity;
		private _drag = _deltaT * _airFriction * _trueSpeed * _relativeDensity;		
		private _accel = _trueVelocity vectorMultiply (_drag);
		private _bulletVelocity = _bulletVelocity vectorAdd _accel;	
		if (_derivation != 0)then{
			private _dderivation = _derivation * _deltaT;	
			private _derivationDir = [0 - (_bulletVelocity select 1),_bulletVelocity select 0,0];	
			_derivationDir = vectorNormalized _derivationDir;	
			_derivationDir = _derivationDir vectorMultiply _dderivation;
			_bulletVelocity = _bulletVelocity vectorAdd _derivationDir;	
		};
    	_shell setVelocity _bulletVelocity;
	};
    _shell setVelocity _bulletVelocity;
}, 0, [_projectile, _air_friction, CBA_missionTime, _relativeDensity, _derivation]] call CBA_fnc_addPerFrameHandler;