#include "\z\ace\addons\medical\script_component.hpp"
/*
 * Author: Glowbal
 * Determine If Fatal
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Part <NUMBER>
 * 2: with Damage <NUMBER> (default: 0)
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob, 2, 5] call ACE_medical_fnc_determineIfFatal
 *
 * Public: No
 */

#define INCREASE_CHANCE_HEAD 1.0
#define INCREASE_CHANCE_TORSO 0.05
#define INCREASE_CHANGE_LIMB 0.03

#define CHANGE_FATAL_HEAD 1.0
#define CHANGE_FATAL_TORSO 0.6
#define CHANGE_FATAL_LIMB 0.1

#define TRESHOLD_HEAD 1.0
#define TRESHOLD_TORSO 1.1
#define TRESHOLD_LIMB 2.5

params ["_unit", "_part", ["_withDamage", 0]];

if (!alive _unit) exitWith {true};
if ((vehicle _unit != _unit) && {!alive (vehicle _unit)}) exitWith {true};
if (_part < 0 || _part > 5) exitWith {false};

private _baseFatalArr     = [CHANGE_FATAL_HEAD, CHANGE_FATAL_TORSO, CHANGE_FATAL_LIMB];
private _increaseFatalArr = [INCREASE_CHANCE_HEAD, INCREASE_CHANCE_TORSO, INCREASE_CHANGE_LIMB];

// Find the correct Damage threshold for unit.
private _damageThreshold = [1,1,1];
if ([_unit, GVAR(remoteControlledAI)] call EFUNC(common,isPlayer)) then {
    _damageThreshold =_unit getVariable[QGVAR(unitDamageThreshold), [GVAR(playerDamageThreshold) * TRESHOLD_HEAD, GVAR(playerDamageThreshold) * TRESHOLD_TORSO, GVAR(playerDamageThreshold) * TRESHOLD_LIMB]];
} else {
    _damageThreshold =_unit getVariable[QGVAR(unitDamageThreshold), [GVAR(AIDamageThreshold) * TRESHOLD_HEAD, GVAR(AIDamageThreshold) * TRESHOLD_TORSO, GVAR(AIDamageThreshold) * TRESHOLD_LIMB]];
};
_damageThreshold params ["_thresholdHead", "_thresholdTorso",  "_thresholdLimbs"];

private _damageBodyPart = ((_unit getVariable [QGVAR(bodyPartStatus),[0, 0, 0, 0, 0, 0]]) select _part) + _withDamage;

private _baseFatal 	    = _baseFatalArr 	select (_part min 2);
private _increaseFatal  = _increaseFatalArr select (_part min 2);
private _threshold  	= _damageThreshold 	select (_part min 2);
private _random 		= 0;
private _chanceFatal 	= 1;

if ( !(_unit getVariable ["ACE_isUnconscious", false] ) ) then {
	_random 		= random(1);
	_chanceFatal 	= _baseFatal + ((_increaseFatal * (_damageBodyPart - _threshold)) * 10);	
};

private _isFatal 		= (_damageBodyPart >= _threshold && {(_chanceFatal >= _random)});
_isFatal

