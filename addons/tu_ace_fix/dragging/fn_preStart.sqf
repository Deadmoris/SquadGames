#include "..\addon.hpp"
#define ACEADDON dragging

ACEOVERRIDEFUNC(ACEADDON,carryObject,fnc_carryObject.sqf);
ACEOVERRIDEFUNC(ACEADDON,dragObject,fnc_dragObject.sqf);
ACEOVERRIDEFUNC(ACEADDON,dropObject,fnc_dropObject.sqf);
ace_dragging_fnc_toggleCollision = compile preprocessFileLineNumbers '\tu_ace_fix\dragging\fnc_toggleCollision.sqf';
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);