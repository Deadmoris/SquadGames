#include "..\addon.hpp"
#define ACEADDON interact_menu

ACEOVERRIDEFUNC(ACEADDON,userActions_addHouseActions,fnc_userActions_addHouseActions.sqf);
ACEOVERRIDEFUNC(ACEADDON,userActions_getHouseActions,fnc_userActions_getHouseActions.sqf);
call compile preprocessFileLineNumbers ACEPATH(ACEADDON,XEH_PreStart.sqf);