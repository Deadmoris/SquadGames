#include "..\addon.hpp"
#define ACEADDON maptools

ACEOVERRIDEFUNC(ACEADDON,canUseMapTools,fnc_canUseMapTools.sqf);
ACEOVERRIDEFUNC(ACEADDON,updateMapToolMarkers,fnc_updateMapToolMarkers.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);