#include "..\addon.hpp"
#define ACEADDON trenches

ACEOVERRIDEFUNC(ACEADDON,continueDiggingTrench,fnc_continueDiggingTrench.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);