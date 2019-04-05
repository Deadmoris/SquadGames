#include "..\addon.hpp"
#define ACEADDON frag

ACEOVERRIDEFUNC(ACEADDON,pfhRound,fnc_pfhRound.sqf);
ACEOVERRIDEFUNC(ACEADDON,frago,fnc_frago.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);
