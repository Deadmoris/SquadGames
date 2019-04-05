#include "\z\ace\addons\hearing\functions\script_component.hpp"
#define DISTANCE_TO_CHECK 10

["unit", {
	params ["_player", "_oldPlayer"];

	if (!isNull _oldPlayer) then {
		private _updateIsInBuildingHandler = _oldPlayer getVariable [QGVAR(updateIsInBuildingHandler), -1];
		[_updateIsInBuildingHandler] call CBA_fnc_removePerFrameHandler;
		_oldPlayer setVariable [QGVAR(updateIsInBuildingHandler), nil];
	};
	// Don't add a new EH if the unit respawned
	if ((_player getVariable [QGVAR(updateIsInBuildingHandler), -1]) == -1) then {
		if ((getNumber (configFile >> "CfgVehicles" >> (typeOf _player) >> "isPlayableLogic")) == 1) exitWith {
			TRACE_1("skipping playable logic",typeOf _player); // VirtualMan_F (placeable logic zeus / spectator)
		};
		private _updateIsInBuildingHandler = [{
			ACE_player setVariable [QGVAR(isInBuilding), [ACE_player,DISTANCE_TO_CHECK] call FUNC(isInBuilding) ];
		},2] call CBA_fnc_addPerFrameHandler;
		_player setVariable [QGVAR(updateIsInBuildingHandler), _updateIsInBuildingHandler];
	};
}, true] call CBA_fnc_addPlayerEventHandler;
