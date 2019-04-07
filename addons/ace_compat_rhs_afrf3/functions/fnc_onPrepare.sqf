#define COMPONENT compat_rhs_afrf3
#define COMPONENT_BEAUTIFIED RHS AFRF Compatibility

#include "\z\ace\addons\main\script_mod.hpp"

#include "\z\ace\addons\main\script_macros.hpp"

/*
 * Author: BaerMitUmlaut
 * Function for opening doors and extending the hook for most vanilla helos.
 *
 * Arguments:
 * 0: Helicopter <OBJECT>
 *
 * Return Value:
 * Amount of time to wait before deploying ropes <NUMBER>
 *
 * Example:
 * [_vehicle] call ace_compat_rhs_afrf3_fnc_onPrepare
 *
 * Public: No
 */
params ["_vehicle"];

_vehicle setVariable [QEGVAR(fastroping,doorsLocked), true, true];
_vehicle animateDoor ["LeftDoor", 1];

2
