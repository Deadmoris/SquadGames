#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#define CONDITION getNumber (configFile >> "CfgVehicles" >> typeOf vehicle player >> "tu_arty_sight")

tu_arty_fnc_key_hook = {};

/*
[
	"Tushino Artillery","tu_arty_decrease_elevation", localize("STR_tu_arty_decrease_deflection"), 
	{if (CONDITION >= 1) then {[-1] call tu_arty_fnc_elevate};}, "", 
	[200, [false, false, false]]
] call CBA_fnc_addKeybind;
*/

// чтобы не херачить лишние циклы на пост-ините, сгенерировал кейбайнды и запихнул сюда результат
//кому выполнять: 1 - буссоль, 2 - миномет, 3 - гаубица


["Tushino Artillery","tu_arty_fnc_elevate_1 -1", (localize "STR_tu_arty_elevate_up")+" (1)", {if (CONDITION == 2) then {[-1] call tu_arty_fnc_elevate}; false}, "",[200, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_elevate_10 -1", (localize "STR_tu_arty_elevate_up")+" (10)", {if (CONDITION == 2) then {[-10] call tu_arty_fnc_elevate}; false}, "",[200, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_elevate_50 -1", (localize "STR_tu_arty_elevate_up")+" (50)", {if (CONDITION == 2) then {[-50] call tu_arty_fnc_elevate}; false}, "",[200, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_elevate_1 1", (localize "STR_tu_arty_elevate_down")+" (1)", {if (CONDITION == 2) then {[1] call tu_arty_fnc_elevate}; false}, "",[208, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_elevate_10 1", (localize "STR_tu_arty_elevate_down")+" (10)", {if (CONDITION == 2) then {[10] call tu_arty_fnc_elevate}; false}, "",[208, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_elevate_50 1", (localize "STR_tu_arty_elevate_down")+" (50)", {if (CONDITION == 2) then {[50] call tu_arty_fnc_elevate}; false}, "",[208, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_1 1", (localize "STR_tu_arty_increase_elevation")+" (1)", {if (CONDITION >= 2) then {[1] call tu_arty_fnc_el_dial_change}; false}, "",[209, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_10 1", (localize "STR_tu_arty_increase_elevation")+" (10)", {if (CONDITION >= 2) then {[10] call tu_arty_fnc_el_dial_change}; false}, "",[209, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_50 1", (localize "STR_tu_arty_increase_elevation")+" (50)", {if (CONDITION >= 2) then {[50] call tu_arty_fnc_el_dial_change}; false}, "",[209, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_1 -1", (localize "STR_tu_arty_decrease_elevation")+" (1)", {if (CONDITION >= 2) then {[-1] call tu_arty_fnc_el_dial_change}; false}, "",[201, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_10 -1", (localize "STR_tu_arty_decrease_elevation")+" (10)", {if (CONDITION >= 2) then {[-10] call tu_arty_fnc_el_dial_change}; false}, "",[201, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_el_dial_change_50 -1", (localize "STR_tu_arty_decrease_elevation")+" (50)", {if (CONDITION >= 2) then {[-50] call tu_arty_fnc_el_dial_change}; false}, "",[201, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_1 -1", (localize "STR_tu_arty_traverse_left")+" (1)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[-1] call tu_arty_fnc_traverse}; false}, "",[203, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_10 -1", (localize "STR_tu_arty_traverse_left")+" (10)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[-10] call tu_arty_fnc_traverse}; false}, "",[203, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_50 -1", (localize "STR_tu_arty_traverse_left")+" (50)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[-50] call tu_arty_fnc_traverse}; false}, "",[203, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_1 1", (localize "STR_tu_arty_traverse_right")+" (1)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[1] call tu_arty_fnc_traverse}; false}, "",[205, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_10 1", (localize "STR_tu_arty_traverse_right")+" (10)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[10] call tu_arty_fnc_traverse}; false}, "",[205, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_traverse_50 1", (localize "STR_tu_arty_traverse_right")+" (50)", {if ((CONDITION == 2) || (CONDITION == 1)) then {[50] call tu_arty_fnc_traverse}; false}, "",[205, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_1 -1", (localize "STR_tu_arty_decrease_deflection")+" (1)", {if (CONDITION >= 1) then {[-1] call tu_arty_fnc_def_change}; false}, "",[45, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_10 -1", (localize "STR_tu_arty_decrease_deflection")+" (10)", {if (CONDITION >= 1) then {[-10] call tu_arty_fnc_def_change}; false}, "",[45, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_50 -1", (localize "STR_tu_arty_decrease_deflection")+" (50)", {if (CONDITION >= 1) then {[-50] call tu_arty_fnc_def_change}; false}, "",[45, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_1 1", (localize "STR_tu_arty_increase_deflection")+" (1)", {if (CONDITION >= 1) then {[1] call tu_arty_fnc_def_change}; false}, "",[44, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_10 1", (localize "STR_tu_arty_increase_deflection")+" (10)", {if (CONDITION >= 1) then {[10] call tu_arty_fnc_def_change}; false}, "",[44, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_def_change_50 1", (localize "STR_tu_arty_increase_deflection")+" (50)", {if (CONDITION >= 1) then {[50] call tu_arty_fnc_def_change}; false}, "",[44, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_1 1", (localize "STR_tu_arty_tilt_right")+" (1)", {if (CONDITION >= 2) then {[1] call tu_arty_fnc_optic_swing}; false}, "",[210, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_10 1", (localize "STR_tu_arty_tilt_right")+" (10)", {if (CONDITION >= 2) then {[10] call tu_arty_fnc_optic_swing}; false}, "",[210, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_50 1", (localize "STR_tu_arty_tilt_right")+" (50)", {if (CONDITION >= 2) then {[50] call tu_arty_fnc_optic_swing}; false}, "",[210, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_1 -1", (localize "STR_tu_arty_tilt_left")+" (1)", {if (CONDITION >= 2) then {[-1] call tu_arty_fnc_optic_swing}; false}, "",[211, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_10 -1", (localize "STR_tu_arty_tilt_left")+" (10)", {if (CONDITION >= 2) then {[-10] call tu_arty_fnc_optic_swing}; false}, "",[211, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_swing_50 -1", (localize "STR_tu_arty_tilt_left")+" (50)", {if (CONDITION >= 2) then {[-50] call tu_arty_fnc_optic_swing}; false}, "",[211, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_1 1", (localize "STR_tu_arty_increase_optic_level")+" (1)", {if (CONDITION >= 2) then {[1] call tu_arty_fnc_optic_change}; false}, "",[199, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_10 1", (localize "STR_tu_arty_increase_optic_level")+" (10)", {if (CONDITION >= 2) then {[10] call tu_arty_fnc_optic_change}; false}, "",[199, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_50 1", (localize "STR_tu_arty_increase_optic_level")+" (50)", {if (CONDITION >= 2) then {[50] call tu_arty_fnc_optic_change}; false}, "",[199, [true, true, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_1 -1", (localize "STR_tu_arty_decrease_optic_level")+" (1)", {if (CONDITION >= 2) then {[-1] call tu_arty_fnc_optic_change}; false}, "",[200, [false, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_10 -1", (localize "STR_tu_arty_decrease_optic_level")+" (10)", {if (CONDITION >= 2) then {[-10] call tu_arty_fnc_optic_change}; false}, "",[200, [true, false, false]],true] call CBA_fnc_addKeybind;


["Tushino Artillery","tu_arty_fnc_optic_change_50 -1", (localize "STR_tu_arty_decrease_optic_level")+" (50)", {if (CONDITION >= 2) then {[-50] call tu_arty_fnc_optic_change}; false}, "",[200, [true, true, false]],true] call CBA_fnc_addKeybind;

["Tushino Artillery","tu_arty_hide_sight", (localize "STR_tu_arty_hide_sight"), {if ((CONDITION >= 2) && {!(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))}) then {
	 (uiNamespace getVariable ['TU_ARTY_Display', displayNull]) closeDisplay 1;
	 uiNamespace setVariable ['TU_ARTY_Display', displayNull];
}; false}, "",[DIK_S, [false, false, false]],true] call CBA_fnc_addKeybind;