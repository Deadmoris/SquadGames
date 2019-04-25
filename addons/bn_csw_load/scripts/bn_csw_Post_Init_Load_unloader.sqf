private ['_player', '_gun', '_le_mag', '_remember_mags', '_total_ammo','_mag_capacity','_full_mags','_leftovers','_turret_path','_mags_allowed'];
_player = _this select 0;
_gun = _this select 1;
_le_mag = _this select 2;
params ['_player','_gun','_le_mag','_loadingweapon', '_holder', '_turret_path'];


_turret_path = [0]; // дефолтное значение (при перезарядке птуров номер туррета не передаётся)
if (count _this > 5) then {_turret_path = _this select 5};
_remember_mags = magazinesAmmoFull (_gun);
_mags_allowed = getArray (configFile >> "CfgWeapons" >> _loadingweapon >> "magazines");
_total_ammo = (_le_mag) select 1; 

(_gun) removeMagazinesTurret [(_le_mag) select 0, _turret_path];
hint format ['%1\n%2\n%3',_le_mag select 0,1,_total_ammo];
_gun addMagazineAmmoCargo [_le_mag select 0,1,_total_ammo];