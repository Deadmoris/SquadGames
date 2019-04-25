private ['_player', '_gun', '_mags','_holder','_ammo_count','_nearby','_pos','_loading_style']; 
 _player = _this select 0; 
  
 _gun = _this select 1; 
  
 _mag = _this select 2; 
 
_turret_path = [0];  // дефолтное значение (при перезарядке птуров номер туррета не передаётся)
if (count _this > 3) then {_turret_path = _this select 3};
  
 _holder = objNull; 
  
 _loading_style = getNumber (configFile >> 'CfgVehicles' >> typeOf _gun >> 'bn_csw_loading_style'); 
 _ammo_count = (_gun) magazineTurretAmmo [(_mag),_turret_path]; 
  
 if (_loading_style == 0) then { 
	_nearby = nearestObjects [_gun, ['GroundWeaponHolder'], 3]; 

	if (count _nearby > 0) then {_holder = _nearby select 0}; 

	if (isNull _holder) then {_holder = 'GroundWeaponHolder' createVehicle (getPos _gun);}; 

	_holder addMagazineAmmoCargo [(_mag), 1, _ammo_count]; 

	_pos = ((getPos _gun) vectorAdd ((vectorDir _gun) vectorMultiply -1)); 

	_holder setPosATL [_pos select 0, _pos select 1, (getPosATL _gun) select 2]; 
 } else { 
	_gun addMagazineAmmoCargo [(_mag), 1, _ammo_count]; 
}; 
_gun removeMagazineTurret [_mag,_turret_path]; 
if (!someAmmo _gun) then {_gun removeMagazinesTurret [(weapons _gun select 0),_turret_path];}; 