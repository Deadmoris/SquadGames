#include "..\addon.hpp"
#define ACEADDON hearing

ACEOVERRIDEFUNC(ACEADDON,firedNear,fnc_firedNear.sqf);
// ACEOVERRIDEFUNC(ACEADDON,updateHearingProtection,fnc_updateHearingProtection.sqf);
// ACEOVERRIDEFUNC(ACEADDON,updatePlayerVehAttenuation,fnc_updatePlayerVehAttenuation.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);