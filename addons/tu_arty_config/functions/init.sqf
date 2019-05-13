

tu_arty_dials_handle = 0 spawn {};
enableEngineArtillery false;

// Allow configuring the default map tools texture using Drill's UAC
TU_ARTY_MAP_TOOLS_TEXTURE = "\tu_arty\data\mapTools\RU_6000.paa";
private _enum_specification = [] call compile preprocessFileLineNUmbers "\tu_arty\data\mapTools\available_textures.sqf";
private _cbaListValues = _enum_specification apply { _x select 1 };
private _cbaListNames = _enum_specification apply { _x select 0 };
// ["TU_ARTY_MAP_TOOLS_TEXTURE", "Артиллерия Тушино", "Шкала артиллерийского круга", "", _enum_specification, false]
// 	call d_uac_fnc_registerEnumVariable;

["TU_ARTY_MAP_TOOLS_TEXTURE", "LIST", "Шкала артиллерийского круга", "Артиллерия Тушино", [_cbaListValues, _cbaListNames, 0], false] call CBA_Settings_fnc_init;
// quick and dirty copy of ACE3 range table - will become obsolete with further versions of ACE3 
// no plagiarism intended, I just need this to work

tu_arty_fnc_open_table = {
	#define LIST_CHARGE ((uiNamespace getVariable "ACE_82mm_RangeTable_Dialog") displayCtrl 1501)

	private ["_chargeNameArr","_chargeName","_weaponName", "_magazines", "_ammo", "_initSpeed", "_airFriction", "_fireModes", "_muzzleVelocities", "_showToPlayer", "_artilleryCharge", "_mag"];

	_weaponName = _this select 0; 

	createDialog "ACE_82mm_RangeTable_Dialog";
	if (isNull (uiNamespace getVariable ["ACE_82mm_RangeTable_Dialog", displayNull])) exitWith {hint("Dialog failed to open");};

	//Get Magazine Types
	_magazines = getArray (configFile >> "CfgWeapons" >> _weaponName >> "magazines");
	_ammo = getText (configFile >> "CfgMagazines" >> (_magazines select 0) >> "ammo");

	//For now just get settings from first mag, all rounds have same flight characteristics:
	if ((count _magazines) < 1) exitWith {hint("No Magazines for weapon" + _weaponName);};
	_initSpeed = getNumber (configFile >> "CfgMagazines" >> (_magazines select 0) >> "initSpeed");
	_airFriction = getNumber (configFile >> "CfgAmmo" >> _ammo >> "airFriction");

	//Get Charge Modes
	_fireModes = getArray (configFile >> "CfgWeapons" >> _weaponName >> "modes");

	_muzzleVelocities = [];
	_chargeNameArr =  [];
	
	{
	_mag = _x;
		_initSpeed = getNumber (configFile >> "CfgMagazines" >> _mag >> "initSpeed");
		if (!(_initSpeed in _muzzleVelocities)) then {
			if (({getNumber (configFile >> "CfgWeapons" >> _weaponName >> _x >> "showToPlayer") == 1} count _fireModes)>1) then {
				{
					_chargeName = getText (configFile >> "CfgWeapons" >> _weaponName >> _x >> "displayName");
					if (!(_chargeName in _chargeNameArr)) then {
						_chargeNameArr pushBack _chargeName;
						_artilleryCharge = getNumber (configFile >> "CfgWeapons" >> _weaponName >> _x >> "artilleryCharge");										
						_initSpeed = _initSpeed * _artilleryCharge;
						LIST_CHARGE lbAdd format ["%1", _chargeName];
						//LIST_CHARGE lbSetData [(count _muzzleVelocities), str (_artilleryCharge * _initSpeed)];	
						_chargeName = format ["%1%2", _mag,_x];
						LIST_CHARGE lbSetData [(count _muzzleVelocities), _chargeName];	
						_muzzleVelocities pushBack _initSpeed;
					};						
				} forEach _fireModes;
			} else {
				_chargeName = getText (configFile >> "CfgMagazines" >> _mag >> "displayNameShort");						
				LIST_CHARGE lbAdd format ["%1", _chargeName];
				//LIST_CHARGE lbSetData [(count _muzzleVelocities), str (_initSpeed)];
				LIST_CHARGE lbSetData [(count _muzzleVelocities), _mag];
				_muzzleVelocities pushBack _initSpeed;
			};
		};
	} forEach _magazines;
	/*
	
	_muzzleVelocities = [];
	{
		_mag = _x;
		_initSpeed = getNumber (configFile >> "CfgMagazines" >> _mag >> "initSpeed");
		if (!(_initSpeed in _muzzleVelocities)) then {
			_chargeName = getText (configFile >> "CfgMagazines" >> _mag >> "tu_arty_chargeName");
			LIST_CHARGE lbAdd format ["%1: %2", _chargeName, (count _muzzleVelocities)];
			LIST_CHARGE lbSetData [(count _muzzleVelocities), str (_initSpeed)];
			_muzzleVelocities pushBack _initSpeed;
		};
	} forEach _magazines;*/

	LIST_CHARGE lbSetCurSel 0;
};

tu_arty_fnc_setOwner_server = {
	if (isServer) then {
		(_this select 0) setOwner (owner (_this select 1)); 
	};
};

tu_arty_fnc_setOwner = {
	private _vehicle = _this select 0;
	if (isNull (group _vehicle)) then {//занято ли орулие?
		[[_vehicle, _this select 1], "tu_arty_fnc_setOwner_server", false] spawn BIS_fnc_MP;	
		hint 'Готово';
	} else {hint 'Занято';};
};

/*ace_mk6mortar_fnc_rangeTablePreCalculatedValues = nil;

ace_mk6mortar_fnc_rangeTablePreCalculatedValues = compileFinal preprocessFileLineNumbers "\tu_arty\functions\range_table_values.sqf";*/
