#include "addon.hpp"

if (!hasInterface) exitWith {};

GVAR(trackedBullets) = [];

//If not enabled, dont't add PFEH
if (!GVAR(enabled)) exitWith {};

// Register fire event handler
["ace_firedPlayer", FUNC(handleFired)] call CBA_fnc_addEventHandler;
["ace_firedPlayerNonLocal", FUNC(handleFired)] call CBA_fnc_addEventHandler;
["ace_firedPlayerVehicle", FUNC(handleFired)] call CBA_fnc_addEventHandler;
["ace_firedPlayerVehicleNonLocal", FUNC(handleFired)] call CBA_fnc_addEventHandler;

[] call FUNC(updateTrajectoryPFH);