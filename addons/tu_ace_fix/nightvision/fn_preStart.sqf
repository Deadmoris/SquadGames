#include "..\addon.hpp"
#define ACEADDON nightvision

ACEOVERRIDEFUNC(ACEADDON,pfeh,fnc_pfeh.sqf);
ACEOVERRIDEFUNC(ACEADDON,refreshGoggleType,fnc_refreshGoggleType.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);