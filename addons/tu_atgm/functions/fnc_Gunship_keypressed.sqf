#define __CFG_D configFile >> "CfgVehicles" >> typeOf _veh >> "tu_atgm" >> "tu_atgm_designator"
#define __CFG_R configFile >> "CfgVehicles" >> typeOf _veh >> "tu_atgm" >> "tu_atgm_rangefinder"

private ["_veh","_return"];

_return = false;
_veh = vehicle player;

if !(alive _veh && {player == gunner _veh}) exitWith {false};

_designator = (getNumber(__CFG_D) == 1);
_rangefinder = (getNumber(__CFG_R) == 1);

if !(_designator || {_rangefinder}) exitWith {false};

if (_designator) then {
	if (isNil {_veh getVariable "tu_atgm_laser_designation"}) then {
		_veh setVariable ["tu_atgm_laser_designation",true]; [_veh, currentWeapon _veh, true] spawn tu_atgm_fnc_opt_laserloop;
	} else {
		_veh setVariable ["tu_atgm_laser_off",true];
	};
	_return = true;
};

if (_rangefinder) then {
	if (isNil {_veh getVariable "tu_atgm_laser_designation"}) then {
		_veh setVariable ["tu_atgm_laser_designation",true]; [_veh, currentWeapon _veh, false] spawn tu_atgm_fnc_opt_laserloop;
	} else {
		_veh setVariable ["tu_atgm_laser_off",true];
	};
	_return = true;
};

_return
