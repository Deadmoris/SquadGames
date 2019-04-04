//SCRIPT(moveAAV);

/* ----------------------------------------------------------------------------
Function: CUP_fnc_moveAAV
Description:
Sets up input handlers to move AAVs when they are in the water

Parameters:
_this select 0: OBJECT - AAV
_this select 1: SCALAR - On or Off (1/0)

Returns:
Nil

Examples:
(begin example)
	[_vehicle, 1] call CUP_fnc_moveAAV;
(end)

See Also:

Author:
Tupolov

Peer Reviewed:
nil
---------------------------------------------------------------------------- */

//diag_log str(_this);

params ["_vehicle", "_mode"];

if (_mode == 1) then {
	_vehicle setVariable ["waterMode", 1, true];

	// setup key handlers
	[(actionKeys "carForward") select 0, [false,false,false], {[vehicle player, 0.05] call CUP_fnc_setVehicleVelocity;}, "keydown", "CUP_TrackedVehicles_AAV_Forward", true] call CBA_fnc_addKeyHandler;
	[(actionKeys "carBack") select 0, [false,false,false], {[vehicle player, 0.05, true] call CUP_fnc_setVehicleVelocity;}, "keydown", "CUP_TrackedVehicles_AAV_Backward", true] call CBA_fnc_addKeyHandler;
	[(actionKeys "carLeft") select 0, [false,false,false], {[vehicle player, 0.2] call CUP_fnc_rotateVehicle;}, "keydown", "CUP_TrackedVehicles_AAV_Left", true] call CBA_fnc_addKeyHandler;
	[(actionKeys "carRight") select 0, [false,false,false], {[vehicle player, -0.2] call CUP_fnc_rotateVehicle;}, "keydown", "CUP_TrackedVehicles_AAV_Right", true] call CBA_fnc_addKeyHandler;

} else {

	// remove key handlers
	["CUP_TrackedVehicles_AAV_Forward"] call CBA_fnc_removeKeyHandler;
	["CUP_TrackedVehicles_AAV_Backward"] call CBA_fnc_removeKeyHandler;
	["CUP_TrackedVehicles_AAV_Left"] call CBA_fnc_removeKeyHandler;
	["CUP_TrackedVehicles_AAV_Right"] call CBA_fnc_removeKeyHandler;

	_vehicle setVariable ["waterMode", 0, true];
};
