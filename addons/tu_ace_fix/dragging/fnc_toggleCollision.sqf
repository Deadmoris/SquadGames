/*
 * Author: Arseniy
 * Enable/Disable object collisions with allUnits.
 *
 * Arguments: 
 * 1: Object to toggle collisions
 *
 * Return Value:
 * None
 *
 * Example:
 * [object] call ace_dragging_fnc_toggleCollision;
 *
 * Public: No
 */
 
#include "\z\ace\addons\dragging\script_component.hpp"

params ["_target"];

private _collision = _target getVariable ["CollisionEnabled", false];

if (_collision) then {
	{
		_target enableCollisionWith _x;
		if !(local _x) then {
			//[[_target, _x], "enableCollisionWith", _x, false, true] call BIS_fnc_MP;
			[_target, _x] remoteExecCall ["enableCollisionWith", _x];
		};
		TRACE_2("CollisionEnabled", _target, _x);
	} forEach allUnits;	
	_target setVariable ["CollisionEnabled", false, false];
} else {
	{
		_target disableCollisionWith _x;
		if !(local _x) then {
			//[[_target, _x], "disableCollisionWith", _x, false, true] call BIS_fnc_MP;
			[_target, _x] remoteExecCall ["disableCollisionWith", _x];
		};
		TRACE_2("CollisionDisabled", _target, _x);
	} forEach allUnits;
	_target setVariable ["CollisionEnabled", true, false];
};

