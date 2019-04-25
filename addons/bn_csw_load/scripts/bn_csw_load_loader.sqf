
	private ["_gun","_player","_mags_allowed","_load_time","_max_load","_mags_available","_timeout","_loading_style", "_source", "_source_full", "_extra_source", "_nearby", "_holder","_le_mag"];
	_gun = _this select 0;
	_player = _this select 1;
	diag_log str (_this select 2);
	(_this select 2) params ['_magtype','_holder','_turret_path','_loadingweapon'];
	_mags_allowed = getArray (configFile >> "CfgWeapons" >> _loadingweapon >> "magazines");
	_load_time = getNumber (configFile >> "CfgWeapons" >> _loadingweapon >> "bn_csw_ReloadTime");
	_max_load = getNumber (configFile >> "CfgWeapons" >> _loadingweapon >> "bn_csw_extra_capacity") + 1;

	_mags_available = [];

	_source = []; 
	_source_full = [];
	_extra_source = [];
	_nearby = [];



	_le_mag = [];
	{
		if (_magtype == (_x select 0)) exitWith {
			_le_mag = _x;
		};
	} forEach (magazinesAmmoCargo _holder);

	//if (({(_x select 1) > 0} count magazinesAmmoFull _gun) >= _max_load) exitWith {hint "Уже заряжено!";};
	if (({(((_x select 1) isequalto _turret_path) && (_x select 0) in _mags_allowed) && ((_x select 2) > 0)} count magazinesAllTurrets _gun) >= _max_load) exitWith {hint "Уже заряжено!";};
	
private _aeReservePercentage = (ace_advanced_fatigue_ae1Reserve / 4000000 + ace_advanced_fatigue_ae2Reserve / 84000) / 2;
private _anReservePercentage = ace_advanced_fatigue_anReserve / 2300;
private _perceivedFatigue 	= 1 - (_anReservePercentage min _aeReservePercentage);
	_load_time = _load_time * linearConversion [1, 0, _perceivedFatigue, 2, 0.75, true];
	_speedcoef = linearConversion [30, 70, vectorMagnitude (velocity _gun), 0, 2, false];
	
	_rough =  linearConversion [0, 1, getnumber (configFile >> "CfgSurfaces" >> (surfaceType getpos player) select [1,count (surfaceType getpos player)] >> "rough"), 0, 2, false];
	hint ('speed: ' + str _speedcoef + ' _rough ' + str _rough);
	_load_time = _load_time * ((_speedcoef * _rough) max 1);
	titletext [str _load_time,'plain down'];
	playSound3D [(getarray (configFile >> "CfgWeapons" >> _loadingweapon >> "reloadSound") select 0), _gun, true];
	[_load_time, [_player, _gun, _le_mag, _loadingweapon, _holder, _turret_path], {
		private ['_old_mags','_i','_source','_args'];
		private _args = _this select 0;
		// hintc str _args;
		private _gun = _args select 1;
		private _le_mag = _args select 2; // NB: this is an array [mag name, ammo count]
		// private _loadingweapon = _args select 3;
		private _holder = _args select 4;
		
		if ((isNull _holder) || {!((_le_mag select 0) in ((getMagazineCargo _holder) select 0))}) exitWith {hint 'Кто-то спи*дил снаряд!'};


		_args remoteExec ["bn_csw_fnc_remoteLoadbridge_loader", 2,false]; //systemchat ("remoteExec owner: " + str (_gun turretOwner (_this select 5)));
		
		// remove magazines from holder
		_old_mags = magazinesAmmoCargo _holder;
		
		_i = _old_mags find _le_mag;
		_old_mags set [_i, 'kill me'];
		_old_mags = _old_mags - ['kill me'];

		clearMagazineCargoGlobal (_holder);
		{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _old_mags;
		
		
		_currentWork = getNumber (configFile >> "CfgMagazines" >> (_le_mag select 0) >> "mass") * 12;
		private _muscleIntegritySqrt = sqrt (1 - ace_advanced_fatigue_muscleDamage);
		private _ae1PathwayPowerFatigued = ace_advanced_fatigue_ae1PathwayPower * sqrt (ace_advanced_fatigue_ae1Reserve / 4000000) * 0.9 * _muscleIntegritySqrt;
		private _ae2PathwayPowerFatigued = ace_advanced_fatigue_ae2PathwayPower * sqrt (ace_advanced_fatigue_ae2Reserve / 84000) * 0.9 * _muscleIntegritySqrt;
		
		private _ae1Power = _currentWork min _ae1PathwayPowerFatigued;
		private _ae2Power = ((_currentWork - _ae1Power) max 0) min _ae2PathwayPowerFatigued;
		private _anPower  = (_currentWork - _ae1Power - _ae2Power) max 0;


		ace_advanced_fatigue_ae1Reserve = ace_advanced_fatigue_ae1Reserve - _ae1Power / 7;
		ace_advanced_fatigue_ae2Reserve = ace_advanced_fatigue_ae2Reserve - _ae2Power / 7;
		ace_advanced_fatigue_anReserve  = ace_advanced_fatigue_anReserve  -  _anPower / 7;

		ace_advanced_fatigue_anFatigue  = ace_advanced_fatigue_anFatigue + _anPower * (0.057 / ace_advanced_fatigue_peakPower) * 1.1;
		
		
		
		hint format ['Орудие %1 заряжено', getText (configFile >> 'CfgVehicles' >> typeOf _gun >> 'displayName')];

	}, {
		// hint str _this
		hint 'Зарядка прервана'
	}, "Заряжаю",{true},["isNotInside"]] call ace_common_fnc_progressBar;