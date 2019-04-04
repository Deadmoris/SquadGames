//SCRIPT(setVehicleVelocity);

/* ----------------------------------------------------------------------------
Function: CUP_fnc_setVehicleVelocity
Description:
Increases or decreases a vehicles velocity relative to direction

Parameters:
_this select 0: OBJECT - Vehicle
_this select 1: SCALAR - Speed adjustment
_this select 2: BOOL - Reverse (optional)

Returns:
Nil

Examples:
(begin example)
	[_vehicle, 0.05] call CUP_fnc_setVehicleVelocity;
(end)

See Also:

Author:
Tupolov

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

private ["_vel","_dir","_speed","_vehicle","_reverse"];

// diag_log str(_this);
params ["_vehicle", "_speed", ["_reverse", false]];


if (speed _vehicle > 20 || speed _vehicle < -7 || (getposASL _vehicle) select 2 > -0.3) exitwith {};

private _vel = velocity _vehicle;

private _dir = if (_reverse) then {
	direction _vehicle - 180;
} else {
	direction _vehicle;
};

_vehicle setVelocity [
	(_vel select 0) + (sin _dir * _speed),
	(_vel select 1) + (cos _dir * _speed),
	(_vel select 2)
];

// diag_log format ["add: %2, veh: %1, dir: %3, vel: %4, new vel: %5", speed _vehicle, _speed, _dir, _vel, velocity _vehicle];
