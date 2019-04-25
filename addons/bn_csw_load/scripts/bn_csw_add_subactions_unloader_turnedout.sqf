private _gun = _this;
_loaderindex = getarray (configFile >> 'CfgVehicles' >> typeOf _gun >> 'bn_csw_loading_loaders_turnedout') find ((assignedVehicleRole _player) select 1);
_turret_paths = getarray (configFile >> 'CfgVehicles' >> typeOf _gun >> 'bn_csw_loading_loaderturrets_turnedout') select _loaderindex;
_loadingweapons = getarray (configFile >> 'CfgVehicles' >> typeOf _gun >> 'bn_csw_loading_loaderguns_turnedout') select _loaderindex;
private _actions = [];
{
	_turret_path = _x;
	{
		_loadingweapon = _x;
		// hint str _turret_path;
		private _mags_allowed = getArray (configFile >> "CfgWeapons" >> _loadingweapon >> "magazines");
		

		private _available_magazine_info = [];  //[[magazine, description, icon, container, container_description] ...]
		_magturrets = magazinesallturrets _gun;
		
		// _magtypes = _gun magazinesTurret _turret_path;
		{
			hintc str _x;
			if (((_x select 1) isequalto _turret_path) and {(_x select 2) > 0}) then {
				_currentmag = _x select 0;
				if (_currentmag in _mags_allowed) then {
					_available_magazine_info pushBack [
						_currentmag,
						if (simulationEnabled player) then {getText (configFile >> "CfgMagazines" >> _currentmag >> "displayName")} else {"Пауза"},
						getText (configFile >> "CfgMagazines" >> _currentmag >> "picture"),
						_gun,
						getText (configFile >> "CfgWeapons" >> _loadingweapon >> "displayName"),
						_x select 2
					];
				};
			};
		} forEach _magturrets;

		{
			private _selected_magazine = [_x select 0,_x select 5];
			private _selected_holder = _x select 3;
			private _childStatement = if (simulationEnabled player) then {{_this spawn bn_csw_fnc_load_unloader_turnedout;};};
			private _action = [
				format["csw_load:%1",_x], 
				format ["%1 (%2)", _x select 1, _x select 4], 
				_x select 2, 
				_childStatement, 
				{true}, 
				{}, 
				[_selected_magazine, _selected_holder,_turret_path,_loadingweapon], 
				{[0, 0, 0]}, 
				9,
				[false,true,false,false,true],
				{}
				] call ace_interact_menu_fnc_createAction;
			_actions pushBack [_action, [], _gun];
		} forEach _available_magazine_info;
	} foreach (_loadingweapons select _foreachindex);
} foreach _turret_paths;
_actions