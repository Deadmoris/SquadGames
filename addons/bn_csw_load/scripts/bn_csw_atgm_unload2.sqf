private ['_player', '_gun', '_mags','_holder','_ammo_count','_nearby','_pos','_loading_style'];
	_player = _this select 0;
	_gun = _this select 1;
	_mag = _this select 2;
	_holder = objNull;
	private _back = "";
	_loading_style = getNumber (configFile >> 'CfgVehicles' >> typeOf _gun >> 'bn_csw_loading_style');
	_ammo_count = (_gun) magazineTurretAmmo [(_mag),[0]];
	if (_loading_style == 4) then {
		_backs_allowed = getArray (configFile >> "CfgVehicles" >> typeof _gun >> "pzn_tubes"); // systemchat ("_backs_allowed: " + str _backs_allowed);
		{
			_mag_class = getText (configFile >> "CfgVehicles" >> _x >> "pzn_tube_mag"); 	
			if ((_mag_class == _mag) and (getText (configFile >> "CfgVehicles" >> _x >> "pzn_single_tube") == "")) exitwith {
				_back = _x;
				_nearby = nearestObjects [_gun, ['GroundWeaponHolder'], 3];
				if (count _nearby > 0) then {_holder = _nearby select 0};
				if (isNull _holder) then {_holder = 'GroundWeaponHolder' createVehicle (getPos _gun);};
				_holder addbackpackCargoGlobal [_back, 1];
				_pos = ((getPos _gun) vectorAdd ((vectorDir _gun) vectorMultiply -1));
				_holder setPosATL [_pos select 0, _pos select 1, (getPosATL _gun) select 2];
			};
		} forEach _backs_allowed;
	/* } else {
		_gun addMagazineAmmoCargo [(_mag), 1, _ammo_count];
	}; */
	};
	_gun removeMagazineTurret [_mag,[0]];
	if (!someAmmo _gun) then {_gun removeMagazinesTurret [(weapons _gun select 0),[0]];};
