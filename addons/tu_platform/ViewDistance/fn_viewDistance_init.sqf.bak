#include "..\addon.hpp"

//из параметров миссии
GVAR(viewDistance_max) = ["ViewDistance",12000] call BIS_fnc_getParamValue;
 
//из настроек ACE
if(!isNil 'ACE_viewDistance_limitViewDistance')then
{
    GVAR(viewDistance_max) = ACE_viewDistance_limitViewDistance;
};
 
//из Атриума
if(!isNil 'A3A_fnc_Modules_GetSettings')then
{
    private _a3a_vd = "VIEWDISTANCE" call A3A_fnc_Modules_GetSettings;
    if(_a3a_vd != 0)then
    {
        GVAR(viewDistance_max) = _a3a_vd;
    };
};
 
//из Серпа
if(!isNil 'SerP_viewDistance')then
{
    GVAR(viewDistance_max) = SerP_viewDistance;
};


if (GVAR(viewDistance_max) isEqualTo 0) then { GVAR(viewDistance_max) = 3500 };
// прорисовка должна быть не более 5км, т.к. сейчас в античите стоит ограничение на прорисовку объектов 5км. Защита от незнающего картодела
if (GVAR(viewDistance_max) > 5000) then { GVAR(viewDistance_max) = 5000 };

// LOAD PROFILE VALUES
GVAR(viewDistance_infantry) = (200 max GVAR(viewDistanceInf)) min GVAR(viewDistance_max);	
GVAR(viewDistance_vehicle) = (200 max GVAR(viewDistanceVeh)) min GVAR(viewDistance_max);	
GVAR(viewDistance_air) = (200 max GVAR(viewDistanceAir)) min GVAR(viewDistance_max);	


[] spawn {
    player setVariable [QGVAR(GetInManHandler), player addEventHandler ["GetInMan", FUNC(viewDistance_CheckSet)]];
    player setVariable [QGVAR(GetOutManHandler), player addEventHandler ["GetOutMan", FUNC(viewDistance_CheckSet)]];
};

call FUNC(viewDistance_CheckSet)