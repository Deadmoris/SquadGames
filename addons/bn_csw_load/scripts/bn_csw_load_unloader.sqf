private ["_gun","_player","_mags_allowed","_load_time","_max_load","_mags_available","_timeout","_loading_style", "_source", "_source_full", "_extra_source", "_nearby", "_holder","_le_mag"];
	_gun = _this select 0;
	_player = _this select 1;
	diag_log str (_this select 2);
	(_this select 2) params ['_magtype','_holder','_turret_path','_loadingweapon'];
	// _mags_allowed = getArray (configFile >> "CfgWeapons" >> _loadingweapon >> "magazines");
	_load_time = getNumber (configFile >> "CfgWeapons" >> _loadingweapon >> "bn_csw_ReloadTime") * 2;
	_max_load = getNumber (configFile >> "CfgWeapons" >> _loadingweapon >> "bn_csw_extra_capacity") + 1;

	_mags_available = [];

	_source = []; 
	_source_full = [];
	_extra_source = [];
	_nearby = [];


	if (({((_x select 1) isequalto _turret_path) && ((_x select 2) > 0)} count magazinesAllTurrets _gun) < 1) exitWith {hint "Уже разряжено!";};
	
private _aeReservePercentage = (ace_advanced_fatigue_ae1Reserve / 4000000 + ace_advanced_fatigue_ae2Reserve / 84000) / 2;
private _anReservePercentage = ace_advanced_fatigue_anReserve / 2300;
private _perceivedFatigue 	= 1 - (_anReservePercentage min _aeReservePercentage);
	_load_time = _load_time * linearConversion [1, 0, _perceivedFatigue, 2, 0.75, true];
	_speedcoef = linearConversion [30, 70, vectorMagnitude (velocity _gun), 1, 2, true];
	
	_rough =  linearConversion [0, 1, getnumber (configFile >> "CfgSurfaces" >> (surfaceType getpos player) select [1,count (surfaceType getpos player)] >> "rough"), 1, 2, true];
	hint ('speed: ' + str _speedcoef + ' _rough ' + str _rough);
	_load_time = _load_time * ((_speedcoef * _rough) min 1);
	titletext [str _load_time,'plain down'];
	playSound3D [(getarray (configFile >> "CfgWeapons" >> _loadingweapon >> "reloadSound") select 0), _gun, true];
	[_load_time, [_player, _gun, _magtype, _loadingweapon, _holder, _turret_path], {
		private ['_old_mags','_i','_source','_args'];
		private _args = _this select 0;
		// hintc str _args;
		private _gun = _args select 1;
		private _le_mag = _args select 2; // NB: this is an array [mag name, ammo count]
		// private _loadingweapon = _args select 3;
		private _holder = _args select 4;
		


		_args remoteExec ["bn_csw_fnc_remoteLoadID_unloader", _holder,false]; //systemchat ("remoteExec owner: " + str (_gun turretOwner (_this select 5)));
		
		
		
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
		
		
		
		hint format ['Орудие %1 разряжено', getText (configFile >> 'CfgVehicles' >> typeOf _gun >> 'displayName')];

	}, {
		// hint str _this
		hint 'Разядка прервана'
	}, "Разряжаю",{true},["isNotInside"]] call ace_common_fnc_progressBar;