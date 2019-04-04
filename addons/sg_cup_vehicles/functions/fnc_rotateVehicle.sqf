//SCRIPT(rotateVehicle);

/* ----------------------------------------------------------------------------
Function: CUP_fnc_rotateVehicle
Description:
Turns a vehicle while it is moving

Parameters:
_this select 0: OBJECT - Vehicle
_this select 1: SCALAR - Rotation

Returns:
Nil

Examples:
(begin example)
	[_vehicle, 0.6] call CUP_fnc_rotateVehicle;
(end)

See Also:

Author:
Tupolov

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

// diag_log str(_this);
params ["_vehicle", "_rot"];

if ((getposASL _vehicle) select 2 > -0.3) exitwith {};

private _vel = velocity _vehicle;

private _nVel = [_vel, _rot] call BIS_fnc_rotateVector2D;
private _nDir = [vectorDir _vehicle, _rot] call BIS_fnc_rotateVector2D;
_vehicle setVectorDir _nDir;
_vehicle setVelocity _nVel;

// diag_log format ["add: %2, veh: %1, dir: %3, vel: %4, new vel: %5", speed _vehicle, _speed, _dir, _vel, velocity _vehicle];
