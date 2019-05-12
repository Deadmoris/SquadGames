#define __cfg configFile >> "CfgAmmo" >> _ammoType >> "ace_guidance_type"
#define SERVICE_INTERVAL	0.3

private ["_target", "_tarVeh", "_tarType", "_tarPos", "_tarVel", "_mode", "_laserCode","_fakeprojectile", "_mando"];
params["_vehicle", "_weapon", "_c", "_d", "_ammoType", "_magazine", "_projectile"];
if !(isText(__cfg)) exitWith {};

_mando = if (isNil "mando_missile_setup_full") then { false } else { mando_missile_setup_full };
if (_mando) exitWith {};
if (_vehicle iskindof "RHS_Ka52_base") exitWith {}; // Отключаем tu_atgm для ка52
_vehicle setVariable ["ACE_jammed", false];
_gunnerInfo = [_vehicle, _weapon] call CBA_fnc_getFirer;
_isPlayer = (_vehicle isKindOf "CAManBase" && {isPlayer _vehicle}) || {(isPlayer (_gunnerInfo select 0))} || {(isNull (_gunnerInfo select 0))};
_isManualFire = isManualFire _vehicle && {player == effectiveCommander _vehicle};
_isLocal = local (_gunnerInfo select 0);
_type = getText(__cfg);

_laserCode = _vehicle getVariable "ace_laser_code";
if (isNil "_laserCode") then {
	_laserCode = 1111;
	_vehicle setVariable ["ace_laser_code", 1111, false];
};
_projectile setVariable ["ace_laser_code", _laserCode, false];

_fakeprojectile = _projectile;

switch _type do {
	case "saclos": {
		_target = objNull;
		if (_isPlayer || {(_isManualFire && {_isLocal})}) then {
			[_vehicle, _weapon, false] spawn tu_atgm_fnc_opt_laserloop;
		} else {
			_target = _vehicle getVariable "tu_atgm_longbowTarget";
			if (isNil "_target") then {
				_target = objNull;
			} else {
				_vehicle setVariable ["tu_atgm_longbowTarget", nil];
			};
		};
		_turret = [_vehicle, _gunnerInfo select 1] call CBA_fnc_getTurret;
		if (isDedicated) then {
		    if (_vehicle isKindOf "rhs_mi28_base") then {[_vehicle,0] call rhs_fnc_sight_samshin_elev;}; // Совместимость с FCS RHS Ми-28, производим обнуление возвышение птура, полученного от пушки
			[_vehicle, _projectile, _ammotype, "saclos", _weapon, _target, _turret, _isPlayer] call tu_atgm_fnc_missile_saclos;
		} else {
		    if (_vehicle isKindOf "rhs_mi28_base") then {[_vehicle,0] call rhs_fnc_sight_samshin_elev;};
			[_vehicle, _projectile, _ammotype, "saclos", _weapon, _target, _turret, (_isPlayer || _isManualFire || isNull _target) && _isLocal] call tu_atgm_fnc_missile_saclos;
		};
	};
	case "newsmoke": {
		_target = objNull;
		_turret = [_vehicle, _gunnerInfo select 1] call CBA_fnc_getTurret;
		if (isDedicated) then {
		if (_vehicle isKindOf "rhs_mi28_base") then {[_vehicle,0] call rhs_fnc_sight_samshin_elev;}; // Совместимость с FCS RHS Ми-28, производим обнуление возвышение птура, полученного от пушки
			[_vehicle, _projectile, _ammotype, "saclos", _weapon, _target, _turret, _isPlayer] call tu_atgm_fnc_missile_saclos2;
		} else {
		    if (_vehicle isKindOf "rhs_mi28_base") then {[_vehicle,0] call rhs_fnc_sight_samshin_elev;};
			[_vehicle, _projectile, _ammotype, "saclos", _weapon, _target, _turret, (_isPlayer || _isManualFire || isNull _target) && _isLocal] call tu_atgm_fnc_missile_saclos2;
		};
	};
	case "shturm": {
		_target = objNull;
		if (_isPlayer || {(_isManualFire && {_isLocal})}) then {
			[_vehicle, _weapon, false] spawn tu_atgm_fnc_opt_laserloop;
		} else {
			_target = _vehicle getVariable "tu_atgm_longbowTarget";
			if (isNil "_target") then {
				_target = objNull;
			} else {
				_vehicle setVariable ["tu_atgm_longbowTarget", nil];
			};
		};
		_turret = [_vehicle, _gunnerInfo select 1] call CBA_fnc_getTurret;
		if (isDedicated) then {
			[_vehicle, _projectile, _ammotype, "shturm", _weapon, _target, _turret, _isPlayer] call tu_atgm_fnc_missile_saclos;
		} else {
			[_vehicle, _projectile, _ammotype, "shturm", _weapon, _target, _turret, (_isPlayer || _isManualFire || isNull _target) && _isLocal] call tu_atgm_fnc_missile_saclos;
		};
	};
	case "lgb": {
		if !(isDedicated) then {
			_mode = nil;
			[_vehicle, _projectile, _isPlayer, _laserCode] call tu_atgm_fnc_missile_lgb;
		};
	};
};
