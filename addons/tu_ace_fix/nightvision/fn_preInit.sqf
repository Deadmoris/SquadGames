#include "\z\ace\addons\nightvision\script_component.hpp"

[QGVAR(NvgMinLightIntensity), "SLIDER", "Minimum light intensity for NVG", localize "STR_ACE_NightVision_Category", [0, 1, 0, 1], true] call CBA_Settings_fnc_init;
[QGVAR(NvgEffectiveLightMultiplier), "SLIDER", "Multiplier for NVG Effective light", localize "STR_ACE_NightVision_Category", [0.1, 16, 1, 1], true] call CBA_Settings_fnc_init;
[QGVAR(NvgEffectModMultiplier), "SLIDER", "Multiplier for NVG blur and grain effects", localize "STR_ACE_NightVision_Category", [0.1, 2, 0.8, 1], true] call CBA_Settings_fnc_init; //уменьшены эффекты на 20% по дефолту
