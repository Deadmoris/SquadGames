#include "addon.hpp"
if (!GVAR(enabled)) exitWith {};

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle", "_gunner", "_turret"];
if (_unit distance ACE_player > 5000) exitWith {false};

private _cfg = configFile >> "CfgAmmo" >> _ammo;

private _altitude = (getPosASL _unit) select 2;
private _temperature = _altitude call ACEFUNC(weather,calculateTemperatureAtHeight); //standard value 15
private _pressure = _altitude call ACEFUNC(weather,calculateBarometricPressure); //standard value 1013.25
private _relativeHumidity = ACEVAR(weather,currentHumidity); //standard value 0.5

private _airDensity = [_temperature, _pressure, _relativeHumidity] call ACEFUNC(weather,calculateAirDensity);
private _relativeDensity = _airDensity / 1.22113;

if (getText(_cfg >> "simulation") == "shotRocket") exitWith {
	private _af = getNumber(_cfg >> "sideAirFriction");
	if(_af > 0) then {
		GVAR(trackedBullets) pushBack [_projectile, _af, _relativeDensity];
	};
};


