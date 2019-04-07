#include "..\addon.hpp"
#define ACEADDON spectator

ACEOVERRIDEFUNC(ACEADDON,ui_updateHelp,fnc_ui_updateHelp.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);