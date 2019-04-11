/*
 * Author: Glowbal
 * Advanced HandleDamage EH function.
 *
 * Arguments:
 * 0: Unit That Was Hit <OBJECT>
 * 1: Name Of Hit Selection <STRING>
 * 2: Amount Of Damage <NUMBER>
 * 3: Shooter <OBJECT>
 * 4: Projectile <STRING>
 * 5: Hit part index of the hit point <NUMBER>
 * 6: Shooter? <OBJECT>
 * 7: Current damage to be returned <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob, "leg",  2, kevin, "bullet", 2, kevin, 2] call ACE_medical_fnc_handleDamage_advanced
 *
 * Public: No
 */

#include "\z\ace\addons\medical\script_component.hpp"

params ["_unit", "_selectionName", "_amountOfDamage", "_sourceOfDamage", "_typeOfProjectile", "_hitPointNumber", "", "_newDamage"];

// For burning damage we will get a ton of very small hits of damage; they are too small to create any wounds
// Save them up in a variable and run when it is over a noticable amount

if ((_typeOfProjectile == "") && {_newDamage < 0.15} && {
    _newDamage = _newDamage + (_unit getVariable [QGVAR(trivialDamage), 0]);
    if (_newDamage > 0.15) then {
        // if the new sum is large enough, reset variable and continue with it added in

        _unit setVariable [QGVAR(trivialDamage), 0];
        false
    } else {
        // otherwise just save the new sum into the variable and exit
        _unit setVariable [QGVAR(trivialDamage), _newDamage];
        true // exit
    };
}) exitWith {};

private _part = [_selectionName] call FUNC(selectionNameToNumber);
if (_part < 0) exitWith {};

if ((_typeOfProjectile != "") && {_newDamage < 0.15} && {
    private _trivialBody = _unit getVariable [QGVAR(trivialBodyDamage), [0,0,0,0,0,0]];
    _newDamage = _newDamage + ( _trivialBody select _part );
    if (_newDamage > 0.15) then {
        // if the new sum is large enough, reset variable and continue with it added in
        _trivialBody set [_part, 0];
        _unit setVariable [QGVAR(trivialBodyDamage), _trivialBody];
        false
    } else {
        // otherwise just save the new sum into the variable and exit
        _trivialBody set [_part, _newDamage];
        _unit setVariable [QGVAR(trivialBodyDamage), _trivialBody];        
        true // exit
    };
}) exitWith {};

private _hitPoints = ["HitHead", "HitBody", "HitLeftArm", "HitRightArm", "HitLeftLeg", "HitRightLeg"];
// Sorting out the damage
private _damageBodyParts = _unit getVariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0]];

_damageBodyParts set [_part, (_damageBodyParts select _part) + _newDamage];
_unit setVariable [QGVAR(bodyPartStatus), _damageBodyParts, true];

private _typeOfDamage = [_typeOfProjectile] call FUNC(getTypeOfDamage);

[_unit, _selectionName, _newDamage, _typeOfProjectile, _typeOfDamage] call FUNC(handleDamage_assignWounds);


private _unconsciousDamage = 0.5;
if ( _part == 0 ) then {
    _unconsciousDamage = 2;
};
if ( _part == 1 ) then {
    _unconsciousDamage = 1;
};

if (alive _unit && {!(_unit getVariable ["ACE_isUnconscious", false])}) then {
    // If it reaches this, we can assume that the hit did not kill this unit, as this function is called 3 frames after the damage has been passed.
    if ([_unit, _part, _unconsciousDamage * _newDamage] call FUNC(determineIfFatal)) then {

        [_unit] call FUNC(setUnconscious);
    };
};
