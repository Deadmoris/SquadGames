#include "addon.hpp"

GVAR(freezetime_ended) = false;

if(isServer) then {
	GVAR(pauseMission) = false;
	publicVariable QGVAR(pauseMission);

	GVAR(pauseMissionTime) = 0;
	publicVariable QGVAR(pauseMissionTime);

	GVAR(pauseMissionTimeCurrent) = 0;
};

GVAR(menu_items) = [];

GVAR(hardfreezed_vehicles) = [];

[QGVAR(spectatorType), "LIST", localize "STR_TU_Spectator", localize "STR_TU_Platform", [
	[0, 1],
	["CSSA3", "ACE"],
	1
], true] call CBA_Settings_fnc_init;

[QGVAR(defaultHardfreeze), "SLIDER", localize "STR_TU_DefaultHardfreeze", localize "STR_TU_Platform", [0, 60, 10, 0], true] call CBA_Settings_fnc_init;
[QGVAR(doNotRemoveBots), "CHECKBOX", localize "STR_TU_DoNotRemoveBots", localize "STR_TU_Platform", false, true] call CBA_Settings_fnc_init;

[QGVAR(map_compas_small), "SLIDER", localize "STR_TU_MapSmallCompassSize", localize "STR_TU_CompassSizeCat", [0.5, 4, 0.7, 1], 2] call CBA_Settings_fnc_init;
[QGVAR(map_compas_large), "SLIDER", localize "STR_TU_MapLargeCompassSize", localize "STR_TU_CompassSizeCat", [0.5, 4, 1.2, 1], 2] call CBA_Settings_fnc_init;
[QGVAR(compas_scale), "SLIDER", localize "STR_TU_CompassSize", localize "STR_TU_CompassSizeCat", [0.5, 4, 1, 1], 2,  {
	if(_this != profileNamespace getVariable [QGVAR(compas_scale), 1]) then {
		profileNamespace setVariable [QGVAR(compas_scale), _this];
		saveProfileNamespace;
		hint (localize "STR_TU_CompassNeedRestart");
	}
}] call CBA_Settings_fnc_init;


[QGVAR(viewDistanceInf), "SLIDER", localize "STR_TU_ViewDistance_Infantry", localize "STR_TU_ViewDistance", [500, 5000, 5000, 0], 2, {
    GVAR(viewDistance_infantry) = (200 max GVAR(viewDistanceInf)) min GVAR(viewDistance_max);	
	call FUNC(viewDistance_CheckSet);
}] call CBA_Settings_fnc_init;
[QGVAR(viewDistanceVeh), "SLIDER", localize "STR_TU_ViewDistance_Vehicles", localize "STR_TU_ViewDistance", [500, 5000, 5000, 0], 2, {
    GVAR(viewDistance_vehicle) = (200 max GVAR(viewDistanceVeh)) min GVAR(viewDistance_max);	
	call FUNC(viewDistance_CheckSet)
}] call CBA_Settings_fnc_init;
[QGVAR(viewDistanceAir), "SLIDER", localize "STR_TU_ViewDistance_Air", localize "STR_TU_ViewDistance", [500, 5000, 5000, 0], 2, {
    GVAR(viewDistance_air) = (200 max GVAR(viewDistanceAir)) min GVAR(viewDistance_max);	
	call FUNC(viewDistance_CheckSet)
}] call CBA_Settings_fnc_init;
