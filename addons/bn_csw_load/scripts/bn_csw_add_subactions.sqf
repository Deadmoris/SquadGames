// Выбор типа и источника боепитания

BN_CSW_GROUND_LOADING_DISTANCE = 4;


private _gun = _this select 0;

if (_gun isKindOf "rhs_D30_base") then {BN_CSW_GROUND_LOADING_DISTANCE = 5};

private _turret_path = [0];
if (player in _gun) then {
	_turret_path = (assignedVehicleRole _player) select 1;
};

private _mags_allowed = getArray (configFile >> "CfgWeapons" >> (_gun weaponsTurret _turret_path) select 0>> "magazines");
private _loading_style = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_csw_loading_style");  //0: loadable by player from outside; 1: loadable by gunner inside the vehicle

private _all_holders = [uniformContainer player, vestContainer player, backpackContainer player];
private _holder_descriptions = ['карман','жилет','рюкзак'];

if (_loading_style == 0) then {
	private _nearby_weapon_holders = (nearestObjects [_gun, ['GroundWeaponHolder'], BN_CSW_GROUND_LOADING_DISTANCE]);
	{	
		_all_holders pushBack _x;
		_holder_descriptions pushBack 'с грунта';
	} forEach _nearby_weapon_holders;
};
if (_loading_style == 1) then {
	_all_holders pushBack _gun;
	_holder_descriptions pushBack 'машина';
};

private _available_magazine_info = [];  //[[magazine, description, icon, container, container_description] ...]
{
	_holder = _x;
	_holderDescription = _holder_descriptions select _forEachIndex;
	_magtypes = (getMagazineCargo _holder) select 0;
	{
		if (_x in _mags_allowed) then {
			_available_magazine_info pushBack [
				_x,
				if (simulationEnabled player) then {getText (configFile >> "CfgMagazines" >> _x >> "displayName")} else {"Пауза"},
				getText (configFile >> "CfgMagazines" >> _x >> "picture"),
				_holder,
				_holderDescription
			];
		};
	} forEach _magtypes;
} forEach _all_holders;

private _actions = [];

{
	private _target = _this select 0;
	private _selected_magazine = _x select 0;
	private _selected_holder = _x select 3;
	private _childStatement = if (simulationEnabled player) then {{_this spawn bn_csw_fnc_load;};};
    private _action = [
		format["csw_load:%1",_x], 
		format ["%1 (%2)", _x select 1, _x select 4], 
		_x select 2, 
		_childStatement, 
		{true}, 
		{}, 
		[_selected_magazine, _selected_holder], 
		{[0, 0, 0]}, 
		BN_CSW_GROUND_LOADING_DISTANCE,
		[false,true,false,false,false],
		{}
		] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _available_magazine_info;

_actions