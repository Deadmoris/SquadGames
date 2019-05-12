#define __cfg configFile >> "CfgAmmo" >> _ammoType
#define __TRACKINTERVAL 0.025

#define __EXCEED_SPEED 70
#define __EXCEED_DIST 1000

tu_atgm_fnc_saclos_run_code = {
	_deltaTime = time - _prevTime;
	_prevTime = time;
	_flighttime = time - _starttime;
	_vehicle setVariable ["tu_atgm_missile_flying", true];

	_curoffset = _offset;

	if !(_vehicle isKindOf "CAManBase") then {
		_vec = if (_aidEnd distance _aidBeg > 0 && {_dirtype == 0}) then {
			((visiblePositionASL _aidBeg) vectorDiff (visiblePositionASL _aidEnd)) call tu_atgm_fnc_mat_normalize3d;
		} else {
			if (_tracker in _weapons) then {_vehicle weaponDirection _tracker} else {_startData select 0}
		};
		if (_launchTest) then {
			_guidanceDir = [_vehicle, _vType, _vec, false, _turret] call tu_atgm_fnc_opt_limits;
			_realwdir = _guidanceDir select 0;
			_exceeded = if (_isPlayer) then {_guidanceDir select 1} else {false};
			_exceededAlready = _exceeded;
			_launchTest = false;
		} else {
			_guidanceDir = [_vehicle, _vType, _vec, true, _turret, _startdata] call tu_atgm_fnc_opt_limits;
			_realwdir = _guidanceDir select 0;
			_exceeded = if (_isPlayer) then {_guidanceDir select 1} else {false};
		};
	} else {
		_realwdir = _vehicle weaponDirection (secondaryWeapon _vehicle);
	};

	_zero = visiblePositionASL _aidPoV;

	_pvel = velocity _projectile;

	_spd = _pvel call tu_atgm_fnc_magnitude;

	if (!_exceeded && {!_exceededAlready} && {(alive _vehicle)}) then {
		if (_isPlayer) then {
			_ppos = visiblePositionASL _projectile;
			_vvel = velocity _vehicle;

			_target = _vehicle getVariable "tu_atgm_laserObject";
			_tPos = if (isNil "_target") then { _target = objNull; _vehicle getVariable "tu_atgm_opticalTarget" } else { visiblePositionASL _target };
			_nextzero = [(_zero select 0) + (_vvel select 0) * _deltaTime,(_zero select 1) + (_vvel select 1) * _deltaTime,(_zero select 2) + (_vvel select 2) * _deltaTime];
			_dist = _ppos distance _nextzero;

			_vectortomissile = [_ppos, _nextzero] call tu_atgm_fnc_mat_sub3Dvec;

			_t = [_wdirprev,_realwdir,_deltaTime,_vectortomissile,_dist,_vehicle] call tu_atgm_fnc_opt_predictvect;
			_wdir = _t select 0;

			_cos3d = [_wdir, _vectortomissile] call tu_atgm_fnc_mat_cos3Dvec;
			_rcdist = _cos3d*_dist;

			_rc = [(_wdir select 0)*_rcdist + (_nextzero select 0), (_wdir select 1)*_rcdist + (_nextzero select 1), (_wdir select 2)*_rcdist + (_nextzero select 2)];

			_tdistcur = 1 max (_spd*(_deltaTime min 0.125)*2.5);

			if (_shturm && {_isPlayer} && {!isNil {_vehicle getVariable "tu_atgm_laser_designation"}} && {(_dist > 100)}) then {
				if ((_rc distance _tPos) > 2*_spd) then {
					_ppos set [2, (_ppos select 2) - 5];
				} else {
					_shturm = false;
					_shturmDescending = true;
				};
			};
			if (_shturmDescending && {!_shturmDescended}) then {
				if (((_rc distance _tPos) > _spd)) then {
					_tdistcur = _rc distance _tPos;
					_ppos set [2, (_ppos select 2) - ((10*(_tdistcur/(2*_spd max 1)) - 5) max 0)];
				} else {
					_shturmDescended = true;
				};
			};

			_tpoint = [(_nextzero select 0) + (_wdir select 0)*(_tdistcur + _dist), (_nextzero select 1) +  (_wdir select 1)*(_tdistcur + _dist), (_nextzero select 2) + (_wdir select 2)*(_tdistcur + _dist)];

			_desvec = [_tpoint,_ppos] call tu_atgm_fnc_mat_sub3Dvec;

			_dir = vectorDir _projectile;

			_dirH = [_dir] call tu_atgm_fnc_mat_getvecdir;

			_anglediffH = [_desvec,_dir] call tu_atgm_fnc_mat_2vecanglediff;

			if (abs (_anglediffH) > _maxturnrateH*_deltaTime) then {
				_anglediffH = abs (_angleDiffH)*_maxturnrateH*_deltaTime/_angleDiffH;
			};

			_dir_Hmag = _dir call tu_atgm_fnc_mat_horizmag;
			_cosH_mtp = [[_desvec select 0,_desvec select 1],[(_dir select 0),(_dir select 1)]] call tu_atgm_fnc_mat_cos2Dvec;
			_desvec_hmag = (_desvec call tu_atgm_fnc_mat_horizmag)*_cosH_mtp;

			_dirV = [[_dir_hmag,(_dir select 2)]] call tu_atgm_fnc_mat_getvecdir;
			_anglediffV = [[_desvec_hmag,(_desvec select 2)],[_dir_hmag,(_dir select 2)]] call tu_atgm_fnc_mat_2vecanglediff;

			if (abs (_anglediffV) > _maxturnrateV*_deltaTime) then {
				_anglediffV = abs (_angleDiffV)*_maxturnrateV*_deltaTime/_angleDiffV;
			};

			_anglediffH = [_anglediffH, _toler] call tu_atgm_fnc_mat_roundnumber;
			_anglediffV = [_anglediffV, _toler] call tu_atgm_fnc_mat_roundnumber;

			_newdirH = _dirH + _angleDiffH;
			_newdirV = _dirV + _angleDiffV;

			_vec = [sin(_newdirH) * sin(_newdirV), cos(_newdirH) * sin (_newdirV), cos (_newdirV)];

			_vDirX = _vec select 0;
			_vDirY = _vec select 1;
			_vDirZ = _vec select 2;

			_pitchComponent = sin(_newdirV - 90);

			_vUpX = sin(_newdirH) * _pitchComponent;
			_vUpY = cos(_newdirH) * _pitchComponent;
			_vUpZ = cos(_newdirV - 90);

			_vecUp = [_vUpX, _vUpY, _vUpZ];

			_projectile setVectorDirAndUp [_vec,_vecUp];

			_vVelX = _vDirX * _spd;
			_vVelY = _vDirY * _spd;
			_vVelZ = _vDirZ * _spd;

			_vel = [_vVelX, _vVelY, _vVelZ];
			_projectile setVelocity _vel;
		} else {
			_dir = if (isDedicated) then {[0,0,-1]} else {vectorDir _projectile};
			_up = if (isDedicated) then {[0,1,0]} else {vectorUp _projectile};

			if !((alive _vehicle) && {((_vehicle getVariable "ace_canshoot") || {(isNil {_vehicle getVariable "ace_canshoot"})})}) then {
				_exceededAlready = true;
			};
			if (_vehicle getVariable "ACE_jammed") then {
				_exceededAlready = true;
			};
		};
	} else {
		_exceededAlready = true;

		_vel = velocity _projectile;

		if !(_isPlayer) then {
			_projectile setVectorDirAndUp [_dir,_up];
		};

		_vVelX = _vel select 0;
		_vVelY = _vel select 1;
		_vVelZ = _vel select 2;
		
		_vel = [_vVelX, _vVelY, _vVelZ - (_grav * _deltaTime)];

		_projectile setVelocity _vel;

	};

	_wdirprev = _realwdir;
	
	/****************************************
	if (_isPlayer && {(isNull _tarVeh)} && {!isNil "_tPos"} && {!isNull _target}) then {
		{ if !(_x isKindOf "StaticWeapon") exitWith { _tarVeh = _x } } forEach ((position _target) nearEntities [["LandVehicle", "Air", "Ship"],12]);

		
		if !(isNull _tarVeh) then {
			["tu_atgm_global_ieh", [_tarVeh, typeOf _projectile, _vehicle, _projectile]] spawn CBA_fnc_globalEvent;
		};
		
	};
	****************************************/
	
	if (_dist > _maxRange) then {
		_exceededAlready = true;
	} else {
		if (_dist > __EXCEED_DIST && {_spd < __EXCEED_SPEED}) then {
			_exceededAlready = true;
		};
	};
};

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
	_pov = if (_vehicle isKindOf "CAManBase") then {"launcher"} else {getText (_turret >> "memoryPointGunnerOptics")};
	_gunBeg = getText (_turret >> "gunBeg");
	_gunEnd = getText (_turret >> "gunEnd");
	_tracker = getText (_turret >> "tu_atgm_tracker");
	_dirtype = getNumber (_turret >> "tu_atgm_dir");

	_weapons = weapons _vehicle;

	_startdata = [vectorDir _vehicle, vectorUp _vehicle];
	_pos = visiblePositionASL _projectile;
	_dir = vectorDir _projectile;
	_up = vectorUp _projectile;
	_vel = velocity _projectile;

	if (_guidance == "shturm") then {_shturm = true};
	/****************************************/
	["tu_atgm_global_towsmoke", [_projectile, _ammotype]] spawn CBA_fnc_globalEvent;
	/****************************************/
	_aidPoV = objNull;
	_aidBeg = objNull;
	_aidEnd = objNull;
	
	_aidsInPlace = false;

	_aidPoV = "ACE_LogicDummy" createVehicleLocal [0,0,0];
	_aidBeg = "ACE_LogicDummy" createVehicleLocal [0,0,0];
	_aidEnd = "ACE_LogicDummy" createVehicleLocal [0,0,0];

	_aidPoV attachTo [_vehicle,[0,0,0],_pov];
	_aidBeg attachTo [_vehicle,[0,0,0],_gunBeg];
	_aidEnd attachTo [_vehicle,[0,0,0],_gunEnd];

	_maxturnrateH = getNumber (__cfg >> "ace_maxturnrateH");
	_maxturnrateV = getNumber (__cfg >> "ace_maxturnrateV");
	_bankSpeed = getNumber (__cfg >> "ace_bankSpeed");
	_maxSpeed = (getNumber (__cfg >> "maxSpeed")) max 1;
	_airFriction = getNumber (__cfg >> "airFriction");
	_initTime1 = getNumber (__cfg >> "initTime");
	_initTime2 = getNumber (__cfg >> "ace_guidance_initTime");
	_initTime = if (_initTime2 > 0) then {_initTime2} else {_initTime1};
	_saf = getNumber (__cfg >> "sideairFriction");
	_th = getNumber (__cfg >> "thrust");
	_tht = getNumber (__cfg >> "thrusttime");
	_flighttime = 0;
	_starttime = time;
	_toler = 0;
	if (_isPlayer) then {_toler = getNumber (__cfg >> "ace_angletoler")}; 
	_maxRange = getNumber (__cfg >> "maxControlRange");
	_exceeded = false;
	_exceededAlready = false;
	_shturmDescended = false;
	_shturmDescending = false;
	_supercontrol = 0;
	_offset = [0,0,0];
	_initoffset = [0,0,1];
	_dist = 0;
	_grav = 9.81; // m/s^2
	_wdirprev = vectorDir _projectile;
	_spd = _vel call tu_atgm_fnc_magnitude;
	_offHprev = 0;
	_offVprev = 0;

	_vehicle setVariable ["tu_atgm_saclos_cur", [_wdirprev,0,0,0,0]];
	[_vehicle,_projectile] spawn tu_atgm_fnc_opt_avg_wdir;

	if (isNil {_vehicle getVariable "tu_atgm_missile_array"}) then {
		_vehicle setVariable ["tu_atgm_missile_array", [_projectile]];
	} else {
		_missile_array = (_vehicle getVariable "tu_atgm_missile_array") - [objNull];
		_missile_array set [count _missile_array,_projectile];
		_vehicle setVariable ["tu_atgm_missile_array", _missile_array];
	};

	_launchTest = true;

	_prevTime = time + _initTime - __TRACKINTERVAL;
};

tu_atgm_fnc_saclos_exit_code = {
	{deletevehicle _x} forEach [_aidPoV,_aidBeg,_aidEnd];

	_missile_array = (_vehicle getVariable "tu_atgm_missile_array") - [objNull];
	_vehicle setVariable ["tu_atgm_missile_array", _missile_array];
	_vehicle setVariable ["tu_atgm_missile_flying", nil];

	if ((count _missile_array) == 0) then {
		if (isNil {_vehicle getVariable "tu_atgm_laser_designation"}) then {
			_vehicle setVariable ["tu_atgm_laser_off", true];
		};
	};
};

tu_atgm_fnc_saclos_run_condition = {
	_r = false;
	if (time - _prevTime > __TRACKINTERVAL) then {
		if !(_aidsInPlace) then {
			if (_aidEnd distance _vehicle < 10) then {
				if (_aidBeg distance _vehicle < 10) then {_aidsInPlace = _aidPoV distance _vehicle < 10};
			};
		};
		_r = _aidsInPlace;
	};
	_r;
};

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
