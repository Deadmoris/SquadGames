#include "addon.hpp"
if(call FUNC(canDismountNpz)) then { 
	private _w = currentWeapon ACE_player;

	private _wn = getText (configFile >> "cfgWeapons" >> _w >> "rhs_npz");
	private _m = currentMagazine ACE_player;
	private _a = ACE_player ammo _w;
	private _i = ACE_player weaponAccessories _w;

	private _wnNpzItems  = getArray (configFile >> "cfgWeapons" >> _wn >> "WeaponSlotsInfo" >> "rhs_npz_slot" >> "compatibleItems");

	ACE_player addMagazine _m;		
	ACE_player addWeapon _wn;
	ACE_player removeWeapon _w;
	ACE_player playMove "MountOptic";

	if(not((_i select 0) isEqualTo ""))then{ ACE_player addPrimaryWeaponItem (_i select 0)};
	if(not((_i select 1) isEqualTo ""))then{ ACE_player addPrimaryWeaponItem (_i select 1)};
	ACE_player setAmmo [(currentWeapon ACE_player), _a];
	ACE_player addItem (_wnNpzItems select 0);
};