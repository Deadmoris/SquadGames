#include "..\addon.hpp"
#define ACEADDON explosives

ACEOVERRIDEFUNC(ACEADDON,placeExplosive,fnc_placeExplosive.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);
