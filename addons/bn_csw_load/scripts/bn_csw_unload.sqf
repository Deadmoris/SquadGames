private ["_gun","_player","_mags","_unload_time", "_loading_style", "_turret_path"];
_gun = _this select 0;
_player = _this select 1;

_turret_path = [0];
if (_player in _gun) then {
	_turret_path = (assignedVehicleRole _player) select 1;
};

_mags = _gun magazinesTurret _turret_path;
_unload_time = getNumber (configFile >> "CfgWeapons" >> (_gun weaponsTurret _turret_path) select 0 >> "bn_csw_ReloadTime") / 2;
_loading_style = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_csw_loading_style");

if ((count _mags > 0) && (someAmmo _gun)) then {
	if ((_gun getVariable ["bn_csw_occupied",false]) || (!(isNull (gunner _gun)) && (_loading_style == 0))) exitWith {hint "Орудие занято!"};
	_player playAction "Gear";
	_gun setVariable ["bn_csw_occupied",true,true];
	[_unload_time, [_player, _gun, _mags select 0, _turret_path], {
		private ['_player', '_gun', '_mags','_args'];
		_args = _this select 0;
		_player = _args select 0; //а это вообще нахрена?
		_gun = _args select 1;
		_mag = _args select 2;
		// [_args,'remoteUnloadID', false] call BIS_fnc_MP;
		_args remoteExec ["bn_csw_fnc_remoteunLoadbridge", 2,false];	// systemchat ("remoteExec owner: " + str (_gun turretOwner _turret_path));
		
		_gun setVariable ['bn_csw_occupied',false,true];
		hint format ['Разряжено (%1)', getText (configFile >> 'CfgMagazines' >> (_mag) >> 'displayName')];
	}, {
		((_this select 0) select 1) setVariable ['bn_csw_occupied',false,true]; 
		hint 'Разряжание прервано'
	}, "Разряжаю",{true},["isNotInside"]] call ace_common_fnc_progressBar; //неужели это?
} else {
	hint "Орудие не заряжено!";
};
