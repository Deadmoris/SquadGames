#include "..\addon.hpp"
#define ACEADDON repair

ACEOVERRIDEFUNC(ACEADDON,repair,fnc_repair.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);