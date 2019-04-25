private ["_gun","_player","_mags_allowed","_load_time","_max_load","_mags_available","_timeout","_loading_style", "_source", "_source_full", "_extra_source", "_nearby", "_holder","_le_mag"];
_gun = _this select 0;
_player = _this select 1;
_turret_path = [0];
if (_player in _gun) then {
	_turret_path = (assignedVehicleRole _player) select 1;
};
_mags_allowed = getArray (configFile >> "CfgWeapons" >> (_gun weaponsTurret _turret_path) select 0>> "magazines");
_load_time = getNumber (configFile >> "CfgWeapons" >> (_gun weaponsTurret _turret_path) select 0 >> "bn_csw_ReloadTime");
_max_load = getNumber (configFile >> "CfgWeapons" >> (_gun weaponsTurret _turret_path) select 0 >> "bn_csw_extra_capacity") + 1;
_loading_style = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_csw_loading_style");  //0: loadable by player from outside; 1: loadable by gunner inside the vehicle
_mags_available = [];

_source = []; 
_source_full = [];
_extra_source = [];
_nearby = [];

private _magtype = (_this select 2) select 0;
_holder = (_this select 2) select 1;

_le_mag = [];
{
	if (_magtype == (_x select 0)) exitWith {
		_le_mag = _x;
	};
} forEach (magazinesAmmoCargo _holder);

//if (({(_x select 1) > 0} count magazinesAmmoFull _gun) >= _max_load) exitWith {hint "Уже заряжено!";};
if (({((_x select 0) in _mags_allowed) && ((_x select 1) > 0)} count magazinesAmmoFull _gun) >= _max_load) exitWith {hint "Уже заряжено!";};
if ((_gun getVariable ["bn_csw_occupied",false]) || (!(isNull (gunner _gun)) && (_loading_style != 1) && (someAmmo _gun))) exitWith {hint "Орудие занято!"};

_player playAction "Gear";
_gun setVariable ["bn_csw_occupied",true,true];
[_load_time, [_player, _gun, _le_mag, _loading_style, _holder, _turret_path], {
	private ['_old_mags','_i','_source','_args'];
	private _args = _this select 0;
	private _gun = _args select 1;
	private _le_mag = _args select 2; // NB: this is an array [mag name, ammo count]
	private _loading_style = _args select 3;
	private _holder = _args select 4;
	
	if ((isNull _holder) || {!((_le_mag select 0) in ((getMagazineCargo _holder) select 0))}) exitWith {_gun setVariable ['bn_csw_occupied',false,true]; hint 'Кто-то спи*дил снаряд!'};


	_args remoteExec ["bn_csw_fnc_remoteLoadbridge", 2,false]; //systemchat ("remoteExec owner: " + str (_gun turretOwner (_this select 5)));
	
	// remove magazines from holder
	_old_mags = magazinesAmmoCargo _holder;
	
	_i = _old_mags find _le_mag;
	_old_mags set [_i, 'kill me'];
	_old_mags = _old_mags - ['kill me'];

	if (count (weaponCargo _holder) == 0) then {_holder addWeaponCargoGlobal ['FakeWeapon',1];}; //возможно, надо добавить проверку на вепонхолдер
	clearMagazineCargoGlobal (_holder);
	{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _old_mags;

	if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};
	//end
	
	(_args select 1) setVariable ['bn_csw_occupied',false,true];
	hint format ['Орудие %1 заряжено', getText (configFile >> 'CfgVehicles' >> typeOf _gun >> 'displayName')];

}, {
	((_this select 0) select 1) setVariable ['bn_csw_occupied',false,true]; 
	hint 'Зарядка прервана'
}, "Заряжаю",{true},["isNotInside"]] call ace_common_fnc_progressBar;