private ["_gun","_player","_mags_allowed","_load_time","_max_load","_mags_available","_timeout","_loading_style", "_source", "_source_full", "_extra_source", "_nearby", "_holder","_back"];
_gun = _this select 0;
_player = _this select 1;
_mags_allowed = getArray (configFile >> "CfgWeapons" >> weapons _gun select 0 >> "magazines");
_load_time = getNumber (configFile >> "CfgWeapons" >> weapons _gun select 0 >> "bn_csw_ReloadTime");
// _load_time = 4;
_max_load = getNumber (configFile >> "CfgWeapons" >> weapons _gun select 0 >> "bn_csw_extra_capacity") + 1;
_loading_style = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_csw_loading_style");  //0: loadable by player from outside; 1: loadable by gunner inside the vehicle
_mags_available = [];

_source = []; 
_source_full = [];
_extra_source = [];
_nearby = [];
_holder = objNull;
////////////////////// короче, сканировать надо граунд вепон холдер а не классы рюкзаков, отсюда все траблы
if (_loading_style == 4) then { // рюкзаки-выстрелы для ПТРК
	_back = backpack _player;	
	// systemchat ("_back: " + str _back +" player : " + str _player);
	_backs_allowed = getArray (configFile >> "CfgVehicles" >> typeof _gun >> "pzn_tubes"); // systemchat ("_backs_allowed: " + str _backs_allowed);
	if (_back in _backs_allowed) then {
		_class = getText (configFile >> "CfgVehicles" >> _back >> "pzn_tube_mag");
		_source = [_class];_source_full = [[_class,1]]; // systemchat ("_source_full: " + str _source_full); // systemchat ("_source: " + str _source);
		_holder = _player;  // systemchat ("_holder: " + str _holder);
	} else {
		_nearby = _gun nearObjects ["GroundWeaponHolder", 3];	// systemchat ("nearbyguys: " + str _nearby);	/// ищем окружающие рюкзаки (nearEntities кстати быстрее)
		// _nearby pushback nearEntities [_gun, [format ["%1_single",typeof _gun]], 3];
		if (count _nearby > 0) then {
			{
				_extra_source = backpackcargo _x;	// systemchat ("_extra_source: " + str _extra_source);
				if (({_x in _extra_source} count _backs_allowed) > 0) exitWith {
					_holder = _x;  // systemchat ("_holder: " + str _holder);
					_back = _extra_source select _forEachIndex;
					_mag_class = getText (configFile >> "CfgVehicles" >> _back >> "pzn_tube_mag"); 
					// systemchat ("_mag_class: " + str _mag_class); // постфикс для класса магазина
					_source = [_mag_class]; 
					_source_full = [[_mag_class,1]]; // systemchat ("_source_full: " + str _source_full);
				}; // рюкзак nearby 
			} forEach _nearby;
		};
	};
};
if ({_x in _source} count _mags_allowed > 0) then {
	if (({(_x select 1) > 0} count magazinesAmmoFull _gun) >= _max_load) exitWith {hint "Уже заряжено!"};
	if ((_gun getVariable ["bn_csw_occupied",false]) || (!(isNull (gunner _gun)) && (_loading_style != 1) && (someAmmo _gun))) exitWith {hint "Орудие занято!"};
	{
		if ((_x select 0) in _mags_allowed) then {
			// _mags_available=_mags_available+[_x];
			_mags_available pushback _x;// systemchat ("_mags_available: " + str _mags_available); // новая команда
		};
	} forEach _source_full;
//	hint (str _mags_available);
	_le_mag = _mags_available select 0;

	_player playAction "Gear";
	_gun setVariable ["bn_csw_occupied",true,true];
	[_load_time, [_player, _gun, _le_mag, _back, _holder], {
		private ['_old_mags','_i','_source','_args'];
		_args = _this select 0;
		private _exitwith = false;
		private _player = _args select 0; //так понятнее
		private _gun = _args select 1;
		private _le_mag = _args select 2;
		private _back = _args select 3;
		private _holder = _args select 4;	 // systemchat ("progerss _holder: " + str _holder);
		_source = _holder;
		
		// if (_loading_style ==3) then {_source =_holder;} else {_source = _gun;}; //вставил сюда и далее переменные без селектов 

			_base = getText (configFile >> "CfgVehicles" >> _back >> "pzn_single_tube"); // systemchat ("_base: " + str _base); // systemchat ("_back: " + str _back);
			if (_holder == ACE_player) then {
				removebackpack _holder;
				if (_base != "") then {_holder addBackpack _base}; // если спарка двойная, создаем одинарный выстрел.
			} else {
				_bcargo = backpackCargo _holder;	 // systemchat ("old _bcargo: " + str _bcargo);
				if ((isNull _holder) or {!(_back in (backpackcargo _holder))}) exitWith {
				// if (_back in (backpackCargo _holder)) exitWith {
					_exitwith = true;
				};
				
				_bcargo deleteat (_bcargo find _back); // systemchat ("deleteat _bcargo: " + str _bcargo);
				if (_base != "") then {_bcargo pushback _base}; // если спарка двойная, создаем одинарный выстрел.
				 // systemchat ("pushback _bcargo: " + str _bcargo);
				if (count (weaponCargo _source) == 0) then {_source addWeaponCargoGlobal ['FakeWeapon',1];};
				clearBackpackCargoGlobal _holder;
				{
					_holder addBackpackCargoGlobal  [_x,1];
				} foreach _bcargo;	 // systemchat ("new _bcargo: " + str _bcargo);
				if (count (weaponCargo _source - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _source};
			};	
			if (_exitwith) exitwith {
				_gun setVariable ["bn_csw_occupied",false,true]; 
				hint 'Кто-то спи*дил снаряд!';
			};
		// [_args,'remoteLoadID', false] call BIS_fnc_MP;
		_args remoteExec ["bn_csw_fnc_remoteLoadbridge", 2,false];
				// _pos = getpos _source;
				// deletevehicle _source; // сначала удаляем рюкзак чтобы не дюпало
			// if (_loading_style == 4) then { // птур и рюкзаки-выстрелы
				 
			/* } else {
				_old_mags = magazinesAmmoCargo _source;

				_i = _old_mags find _le_mag;
				// _old_mags set [_i, 'kill me'];
				// _old_mags = _old_mags - ['kill me'];
				_old_mags deleteat _i; // новый способ удаления
				if (count (weaponCargo _source) == 0) then {_source addWeaponCargoGlobal ['FakeWeapon',1];};
				clearMagazineCargoGlobal (_source);
				{_source addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _old_mags;

				if (count (weaponCargo _source - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _source};
			}; */
		_gun setVariable ['bn_csw_occupied',false,true];
		hint format ['Орудие %1 заряжено', getText (configFile >> 'CfgVehicles' >> typeOf _gun >> 'displayName')];

	}, {
		((_this select 0) select 1) setVariable ['bn_csw_occupied',false,true]; 
		hint 'Зарядка прервана'
	}, "Заряжаю",{true},["isNotInside"]] call ace_common_fnc_progressBar;
} else {
	hint "Нет нужных боеприпасов!";
};