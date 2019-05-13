#include "addon.hpp"

[QGVAR(enabled), "CHECKBOX", [localize "STR_TU_WindDeflection_windDeflection_DisplayName", localize "STR_TU_WindDeflection_windDeflection_Description"], localize "STR_TU_WindDeflection_windDeflection_DisplayName", false, true] call CBA_Settings_fnc_init;
[QGVAR(simulationInterval), "SLIDER", [localize "STR_TU_WindDeflection_simulationInterval_DisplayName", localize "STR_TU_WindDeflection_simulationInterval_Description"], localize "STR_TU_WindDeflection_windDeflection_DisplayName", [0.01, 1, 0.1, 1], true] call CBA_Settings_fnc_init;
