#include "addon.hpp"
if(ACE_player != vehicle ACE_player) exitWith { false }; //Нельзя в технике, чтобы не заглючила анимация

private _w = currentWeapon ACE_player;
private _wn = getText (configFile >> "cfgWeapons" >> _w >> "rhs_npz");
if(isNil "_wn" || {_wn == ""} || {_wn == _w}) exitWith { false };

private _i = ACE_player weaponAccessories _w;
if(not( (_i select 2) isEqualTo "")) exitWith { false }; // Нельзя снимать рельсу с установленным прицелом

private _wnNpzItems  = getArray (configFile >> "cfgWeapons" >> _wn >> "WeaponSlotsInfo" >> "rhs_npz_slot" >> "compatibleItems");
if(count _wnNpzItems == 0) exitWith { false }; // После снятия рельсы должно получаться оружие, на которое можно нацепить рельсу

true