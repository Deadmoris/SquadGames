/*
	Name: 		RHS_fnc_firedCannon
	
	Desc:		Recoil for cannon fire
	
	Param(s):	std fired event output
	
	Returns:	nil
	
	Author:		Jiaan "Bakerman"
	
	Credits:	Original concept by Killzone_Kid
*/
/* 
// Single player only
if (isMultiplayer) exitWith {};

params ["_v","_w","","","","","_p"];
		
// Exit if main gun was not fired
if !(_w isKindOf ["rhs_weap_d81", configFile >> "CfgWeapons"]) exitWith {};

// Exit if vehicle is not local
if !(local _v) exitWith {};

// Get the muzzle energy of the projectile, exit if 0
private "_forceEnegergy";
_forceEnegergy = switch true do {
	case (_p isKindOf "rhs_ammo_bm_base"): {
		(speed _p) * 3.3
	};
	case (_p isKindOf "rhs_ammo_bk_base"): {
		(speed _p) * 7
	};
	case (_p isKindOf "rhs_ammo_of_base"): {
		(speed _p) * 7
	};
	default {0};
};
if (_forceEnegergy == 0) exitWith {};

// Exit if vehicle is already recoiling
if (_v getVariable ["RHS_Recoiling", false]) exitWith {};

// Set vehicle to recoiling state
_v setVariable ["RHS_Recoiling", true];

private ["_forceMagnitude","_center","_mass","_recoil"];

// Get force magnitude
if (_w == "rhs_weap_2a75") then {
	_forceMagnitude = 1.6;
} else {
	_forceMagnitude = 0.8;
	_forceEnegergy = _forceEnegergy / 4;
};
// Get mass values
_center = getCenterOfMass _v;
_mass = getMass _v;

// Get recoil model position
_recoil = _center vectorDiff ((_v worldToModelVisual (_v weaponDirection _w) vectorDiff (_v worldToModelVisual [0, 0, 0])) vectorMultiply _forceMagnitude);
_recoil set [2, _center select 2];

// Set recoil mass values
_v setMass [_mass + _forceEnegergy, 0];
_v setCenterOfMass [_recoil, 0];

// Revert recoil
[_v, _mass, _center] spawn {
	sleep 0.05;
	(_this select 0) setMass [(_this select 1), 0.15];
	(_this select 0) setCenterOfMass [(_this select 2), 0.15];
	(_this select 0) setVariable ["RHS_Recoiling", false];
}; */