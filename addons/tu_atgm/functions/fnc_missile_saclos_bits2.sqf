#define __cfg configFile >> "CfgAmmo" >> _ammoType
#define __TRACKINTERVAL 0.025

#define __EXCEED_SPEED 70
#define __EXCEED_DIST 1000

tu_atgm_fnc_saclos_run_code = {};

tu_atgm_fnc_saclos_init_code = {
	_vehicle = _this select 0;
	_projectile = _this select 1;
	_ammoType = _this select 2;
	_guidance = _this select 3;
	_weapon = _this select 4;
	_target = _this select 5;
	_turret = _this select 6;
	_isPlayer = _this select 7;

	_shturm = false;
	_tarVeh = objNull;

	_vType = typeOf _vehicle;
	
	["tu_atgm_global_towsmoke", [_projectile, _ammotype]] spawn CBA_fnc_globalEvent;
};

tu_atgm_fnc_saclos_exit_code = {
	{deletevehicle _x} forEach [_aidPoV,_aidBeg,_aidEnd];

	_missile_array = (_vehicle getVariable "tu_atgm_missile_array") - [objNull];
	_vehicle setVariable ["tu_atgm_missile_array", _missile_array];
	_vehicle setVariable ["tu_atgm_missile_flying", nil];
};

tu_atgm_fnc_saclos_run_condition = {};

tu_atgm_fnc_saclos_exit_condition = {isNull _projectile};

tu_atgm_saclos_private_variables = [
		"_vehicle", "_projectile", "_ammotype", "_guidance", "_weapon", "_target", "_turret", "_isPlayer", "_startdata",
		"_exceeded","_exceededAlready","_launchTest",
		"_shturm","_shturmDescending","_shturmDescended",
		"_missile_array", "_weapons", "_tracker", "_dirtype",
		"_deltaTime","_prevTime",
		"_pos","_dir","_up","_vel",
		"_pov","_gunBeg","_gunEnd","_initoffset","_offset","_curoffset",
		"_aidPoV","_aidBeg","_aidEnd","_zero","_nextzero","_wdir","_wdirprev","_realwdir","_t",
		"_airFriction","_grav","_bankSpeed","_maxSpeed","_maxRange",
		"_maxturnrateH","_maxturnrateV","_supercontrol","_toler","_raderror","_initTime",
		"_ppos","_pvel","_vvel","_spd",
		"_vectortomissile","_desvec","_desvec_hmag","_cosH_mtp",
		"_cos3d","_rc","_rcdist","_tpoint",
		"_dist","_tdist","_tdistcur",
		"_dir","_dirH","_dirV","_dir_hmag",
		"_anglediffH","_anglediffV",
		"_newdirH","_newdirV",
		"_vec","_vDirX","_vDirY","_vDirZ","_vUpx","_vUpY","_vUpZ","_vecUp",
		"_offH","_offV","_offHprev","_offVprev",
		"_vType", "_tarVeh", "_tPos","_saf","_th","_tht","_flighttime","_starttime",
		"_aimTest","_aidsInPlace"
];
