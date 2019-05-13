// ивентхендлер, в основном для миномётов

#include "script_component.hpp"

//params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

private ["_gun","_shell","_vel","_speed","_newDir","_newDisperse","_selectedWeapon","_disperseDegrees"];
_gun = _this select 0;
_shell = _this select 6; // 5 >> 6 (firedbis)
_vel = velocity _shell;
_speed = vectorMagnitude _vel;
_selectedWeapon = (weapons _gun) select 0; // magic optimisation
_newDisperse = _gun getVariable ["tu_arty_disperse", [0,0]];
_newDir = (_gun weaponDirection _selectedWeapon) vectorMultiply _speed; 

//аццкий костыль, без него мина летит хрен знает куда:
_shell setVelocity _newDir;
[_shell,_newDisperse #0,_newDisperse #1, 0] call ace_common_fnc_changeProjectileDirection;
[_gun] call tu_arty_fnc_recoil;

//diag_log [_gun, _shell, _selectedWeapon, _disperseDegrees, _newDisperse, _newDir];
// debug - remove if ok

if (_gun turretLocal [0]) then {
	_disperseDegrees = deg (getNumber (configFile >> "CfgWeapons" >> _selectedWeapon >> "dispersion"));
	_newDisperse = [(random [_disperseDegrees * 4, 0, _disperseDegrees * 4]) * (random 2 - 1), (random [_disperseDegrees*4, 0,_disperseDegrees * 4]) * (random 2 - 1)];
	_gun setVariable ["tu_arty_disperse", _newDisperse, true];
	[_shell] call tu_arty_fnc_add_observable;
};

_this call tu_arty_fnc_air_friction;
