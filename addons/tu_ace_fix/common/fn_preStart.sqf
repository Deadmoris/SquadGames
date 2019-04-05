#include "..\addon.hpp"
#define ACEADDON common

ACEOVERRIDEFUNC(ACEADDON,checkPBOs,fnc_checkPBOs.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);