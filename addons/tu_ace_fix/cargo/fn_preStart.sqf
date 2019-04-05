#include "..\addon.hpp"
#define ACEADDON cargo

ACEOVERRIDEFUNC(ACEADDON,handleDestroyed,fnc_handleDestroyed.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);