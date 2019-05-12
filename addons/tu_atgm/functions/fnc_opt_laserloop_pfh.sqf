params["_vehicle", "_weapon", "_realLaser", "_laserObject", "_newLaser"];

if (_newLaser) then {
	_handle = [
		{
			if !(isNull _laserObject) then {
				_newPos = getPosASL _laserObject;

				if (str(_newPos) != _oldPos) then {
					_oldPos = str(_newPos);
					_vehicle setVariable ["tu_atgm_opticalTarget", _newPos];
				};

				_laserCode = _vehicle getVariable ["ace_laser_code", 1111];
				if ((_laserObject getVariable ["ace_laser_code", 1111]) != _laserCode) then {
					_laserObject setVariable ["ace_laser_code", _laserCode, true];
				};
				if (isNull _tarVeh) then {
					{ 
						if !(_x isKindOf "StaticWeapon") exitWith { 
							_tarVeh = _x 
						} 
					} forEach ((position _laserObject) nearEntities [["LandVehicle", "Air", "Ship"],12]);
				} else {
					if (_tarVeh distance _laserObject > 12) then {
						_tarVeh = objNull;
					} else {
						if (_tarVeh getVariable ["ace_targeted_time",0] < (time - 30)) then {
							/**************
							["ace_lasertarget", [_vehicle, _tarVeh, _laserObject]] spawn CBA_fnc_globalEvent;
							**************/
						};
					};
				};
			} else {
				_laserObject = laserTarget _vehicle;
				if !(isNull _laserObject) then {
					_vehicle setVariable ["tu_atgm_laserObject", _laserObject];
					if (_realLaser) then {
						_laserObject setVariable ["SPON_RF_owner", name (effectiveCommander _vehicle), true]; // compatible with sys_rangefinder
						_laserObject setVariable ["ace_RF_owner",player,true];
					} else {
						_laserObject hideObject true;
						_laserObject setDamage 1;
					};
				};
			};
		},
		[_vehicle,_realLaser],
		0.01,
		{
			_vehicle = _this select 0;
			_realLaser = _this select 1;
			
			_laserObject = objNull;
			_newPos = [0,0,0];
			_oldPos = "";
			_vehicle setVariable ["tu_atgm_opticalTarget", [0,0,0]];
			_tarVeh = objNull;
			_timePrev = time;
			
			if (isNull laserTarget _vehicle) then {
				_vehicle fireAtTarget [objNull,"ACE_Laserdesignator_Hidden"];
			};
		},
		{
			_weapon = currentWeapon _vehicle;
			if !(isNull laserTarget _vehicle) then {
				_vehicle fireAtTarget [objNull,"ACE_Laserdesignator_Hidden"];
			};
			if ("Laserbatteries" in magazines _vehicle) then {
				_vehicle removeMagazine "Laserbatteries";
			};
			if ("ACE_Laserdesignator_Hidden" in weapons _vehicle) then {
				_vehicle removeWeapon "ACE_Laserdesignator_Hidden";
			};
			_vehicle selectWeapon _weapon;
			// Reset on exit.
			_vehicle setVariable ["tu_atgm_laser_designation", nil];
			_vehicle setVariable ["tu_atgm_laser_working", nil];
			_vehicle setVariable ["tu_atgm_laser_off", nil];
		},
		{
			!isNull laserTarget _vehicle
		},
		{!((player == gunner _vehicle) && {(alive _vehicle)} && {(isNil {_vehicle getVariable "tu_atgm_laser_off"})})},
		[
			"_vehicle", "_realLaser",
			"_laserObject", "_tarVeh", "_newPos","_oldPos"
		]
	] call tu_common_fnc_addPerFrameHandlerLogic;
} else {
	_handle = [
		{

			_aidPos = getPosASL _aidPoV;

			if !(isNull _pulse) then {
				_unset = true;
				_pulsePos = getPosASL _pulse;
				_range = _pulsePos distance _aidPos;

				if ((_range > 25) && {(_range < 9999)}) then {
					_magn = (velocity _pulse) call tu_atgm_fnc_magnitude;
					_newPos = _pulsePos;
					_invalidPos = false;
					_validRange = _range;

					if (_magn < 0.002) then {
						deleteVehicle _pulse;
						_pulse = objNull;
					};
				} else {
					if (_range > 9999) then {
						_validRange = 9999;
						deleteVehicle _pulse;
						_pulse = objNull;
					};
					_invalidPos = true;
				};
			};
			
			if (isNull _pulse) then {
				if (_unset) then {
					_unset = false;

					if (_invalidPos) then {
						if (_tracker in _weapons) then {
							_laserVec = _vehicle weaponDirection _tracker
						} else {
							if(!_sensorOnly) then {
								if (_aidEnd distance _aidBeg > 0) then {
									_laserVec = ((getPosASL _aidBeg) vectorDiff (getPosASL _aidEnd)) call tu_atgm_fnc_mat_normalize3d
								} else {
									_laserVec = [0,0,1]
								};
							} else {
								_pos1 = [_vehicle, _sensorSelection] call cba_fnc_modelToWorldASL;
								_pos2 = [_vehicle, _sensorPoint] call cba_fnc_modelToWorldASL;
								_laserVec = [_pos1, _pos2] call tu_atgm_fnc_vectorFromXToY;
							};
						};
						_newPos = [(_aidPos select 0) + (_laserVec select 0)*_validRange, (_aidPos select 1) + (_laserVec select 1)*_validRange, (_aidPos select 2) + (_laserVec select 2)*_validRange];
					};

					if (str(_newPos) != _oldPos) then {
						_oldPos = str(_newPos);
						_vehicle setVariable ["tu_atgm_opticalTarget", +_newPos];
						(_vehicle getVariable "tu_atgm_laserObject") setPosASL _newPos;
					};
					_laserObj = (_vehicle getVariable "tu_atgm_laserObject");
					_laserCode = _vehicle getVariable ["ACE_CURRENT_LASERTARGET_CODE", 1111];
					if((_laserObj getVariable ["ACE_LASERTARGET_CODE", 1111]) != _laserCode) then {
						_laserObj setVariable ["ACE_LASERTARGET_CODE", _laserCode, true];
					};
					if (_realLaser && {!_invalidPos}) then {
						if (isNull _tarVeh) then {
							{ 
								if !(_x isKindOf "StaticWeapon") exitWith { 
									_tarVeh = _x 
								} 
							} forEach (position (_vehicle getVariable "tu_atgm_laserObject")) nearEntities [["LandVehicle", "Air", "Ship"], 12];
							if !(isNull _tarVeh) then {
								["ace_lasertarget", [_vehicle, _tarVeh, (_vehicle getVariable "tu_atgm_laserObject")]] spawn CBA_fnc_globalEvent;
							};
						};
					};
				} else {
					if (time > _prevTime) then {
						_prevTime = time;

						if (_tracker in _weapons) then {
							_laserVec = _vehicle weaponDirection _tracker
						} else {
							if(!_sensorOnly) then {
								_laserVec = if (_aidEnd distance _aidBeg > 0) then {
									((getPosASL _aidBeg) vectorDiff (getPosASL _aidEnd)) call tu_atgm_fnc_mat_normalize3d
								} else {
									[0,0,1] // fubar
								};
							} else {
								_pos1 = [_vehicle, _sensorSelection] call cba_fnc_modelToWorldASL;
								_pos2 = [_vehicle, _sensorPoint] call cba_fnc_modelToWorldASL;
								_laserVec = [_pos1, _pos2] call tu_atgm_fnc_vectorFromXToY;
							};
						};
						// Offset to avoid collision with shooter
						_pulsePos = [(_aidPos select 0) + (_laserVec select 0)*15, (_aidPos select 1) + (_laserVec select 1)*15, (_aidPos select 2) + (_laserVec select 2)*15];

						_invalidPos = true;
						_pulse = "ACE_MissileGuidance_LaserPulse" createVehicleLocal [0,0,1000];
						_pulse setPosASL _pulsePos;
						_range = 0;
						_pulse setVelocity [(_laserVec select 0) * _spd, (_laserVec select 1) * _spd, (_laserVec select 2) * _spd];
					};
				};
			};
		},
		[_vehicle,_weapon,_realLaser,_laserObject],
		0,
		{
			_vehicle = _this select 0;
			_weapon = _this select 1;
			_realLaser = _this select 2;
			_laserObject = _this select 3;

			_oldPos = "";

			_newPos = [0,0,0];
			_vehicle setVariable ["tu_atgm_opticalTarget", [0,0,0]];
			_spd = 600000;
			_tarVeh = objNull;
			_validRange = 9998;

			_gunnerInfo = [_vehicle, _weapon] call CBA_fnc_getFirer;
			_turret = [_vehicle, _gunnerInfo select 1] call CBA_fnc_getTurret;

			_sensorOnly = getNumber (_turret >> "tu_atgm_sensorOnly");
			_sensorSelection = "";
			_sensorPoint = "";
			if(_sensorOnly == 1) then {
				_sensorOnly = true;
				if(isArray (_turret >> "tu_atgm_sensorSelection")) then {
					_sensorSelection = getArray (_turret >> "tu_atgm_sensorSelection");
				} else {
					_sensorSelection = getText (_turret >> "tu_atgm_sensorSelection");
				};
				_sensorPoint = getText (_turret >> "tu_atgm_sensorPoint");
			} else {
				_sensorOnly = false;
			};
			
			_pov = getText (_turret >> "memoryPointGunnerOptics");
			_gunBeg = getText (_turret >> "gunBeg");
			_gunEnd = getText (_turret >> "gunEnd");
			_tracker = getText (_turret >> "tu_atgm_tracker");
			_weapons = weapons _vehicle;

			_aidPoV = objNull;
			_aidBeg = objNull;
			_aidEnd = objNull;

			_aidPoV = "ACE_LogicDummy" createVehicleLocal [0,0,0];
			_aidBeg = "ACE_LogicDummy" createVehicleLocal [0,0,0];
			_aidEnd = "ACE_LogicDummy" createVehicleLocal [0,0,1];

			_aidPoV attachTo [_vehicle,[0,0,0],_pov];
			_aidBeg attachTo [_vehicle,[0,0,0],_gunBeg];
			_aidEnd attachTo [_vehicle,[0,0,0],_gunEnd];


			_unset = false;
			_invalidPos = false;
			_pulse = objNull;

			_prevTime = time + 0.1;
		},
		{
			{deleteVehicle _x} forEach [_aidPoV,_aidBeg,_aidEnd,_vehicle getVariable "tu_atgm_laserObject"];

			_vehicle setVariable ["tu_atgm_laser_designation", nil];
			_vehicle setVariable ["tu_atgm_laser_working", nil];
			_vehicle setVariable ["tu_atgm_laser_off", nil];
		},
		{
			_r = false;
			if (_aidEnd distance _vehicle < 10) then {
				if (_aidBeg distance _vehicle < 10) then {_r = _aidPoV distance _vehicle < 10}
			};
			_r;
		},
		{!((player == gunner _vehicle) && {(alive _vehicle)} && {(isNil {_vehicle getVariable "tu_atgm_laser_off"})})},
		[
			"_prevTime", "_spd", "_laserVec",
			"_vType", "_vehicle",
			"_pov", "_gunBeg", "_gunEnd",
			"_turret", "_gunnerInfo",
			"_weapons", "_tracker",
			"_aidPoV", "_aidPos",
			"_aidBeg", "_aidEnd",
			"_designation", "_realLaser",
			"_pulse", "_pulsePos",
			"_laserObject", "_tarVeh", "_unset",
			"_newPos", "_invalidPos", "_validRange", "_range",
			"_sensorOnly", "_sensorSelection", "_sensorPoint",
			"_oldPos"
		]
	] call tu_common_fnc_addPerFrameHandlerLogic;
};
