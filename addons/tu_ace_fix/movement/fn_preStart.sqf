#include "..\addon.hpp"
#define ACEADDON movement

ACEOVERRIDEFUNC(ACEADDON,canClimb,fnc_canClimb.sqf);
ACEOVERRIDEFUNC(ACEADDON,handleClimb,fnc_handleClimb.sqf);
ACEOVERRIDEFUNC(ACEADDON,Climb,fnc_Climb.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);