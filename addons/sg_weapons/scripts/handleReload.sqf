params ["_unit","_currentWeaponClass","_currentMuzzle","_newMagazineArray",["_currentMagazineArray",["","","",""]]];

_newMagazineArray params ["_newMagazineClass","_newMagazineCapacity"];
_currentMagazineArray params ["_currentMagazineClass"];


if (getNumber(configFile/"CfgWeapons"/_currentWeaponClass/"LIB_ReplaceMagazine") != 1) exitWith {};
if (_newMagazineClass == _currentMagazineClass) exitWith {};

private _newWeaponClass = getText(configFile/"CfgMagazines"/_newMagazineClass/"LIB_ReplaceWeapon");

if (_newWeaponClass == "") exitWith {};

if (_newWeaponClass == _currentWeaponClass) exitWith {};

private _allMagazinesUnit = magazinesAmmoFull _unit;
private _magazinesOfWeaponType = getArray(configFile/"CfgWeapons"/_currentWeaponClass/"magazines");

{_unit removeMagazines _x} forEach _magazinesOfWeaponType;

_unit removeWeapon _currentWeaponClass;

_unit addMagazine [_newMagazineClass,_newMagazineCapacity];
_unit addWeapon _newWeaponClass;

_unit selectWeapon (primaryWeapon _unit);

private "_container";
{
	_x params ["_magazineClass","_magazineAmmoCount","_isMagazineLoaded","_magazineType","_magazineContainer"];

	if (!(_isMagazineLoaded)) then
	{
		if (({_x == _magazineClass} count _magazinesOfWeaponType) > 0) then
		{
			_container = switch (_magazineContainer) do
			{
				case "Uniform":		{uniformContainer _unit};
				case "Vest":		{vestContainer _unit};
				case "Backpack":	{backpackContainer _unit};
				default			{objNull};
			};

			if (!(isNull _container)) then
			{
				_container addMagazineAmmoCargo [_magazineClass,1,_magazineAmmoCount];
			};
		};
	};
} forEach _allMagazinesUnit;
