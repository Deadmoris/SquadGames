#include "\z\ace\addons\hearing\functions\script_component.hpp"
params ["_weapon","_ammo"];

private _loudness = GVAR(cacheAmmoLoudness) getVariable (format ["%1%2",_weapon,_ammo]);
if (isNil "_loudness") then {
    private _isSuppressedWeapon = ((getNumber (configFile >> "CfgWeapons" >> _weapon >> "fireLightIntensity"))*(getNumber (configFile >> "CfgWeapons" >> _weapon >> "fireLightDuration"))) == 0;
    private _muzzles = getArray (configFile >> "CfgWeapons" >> _weapon >> "muzzles");
    private _weaponMagazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
    {
        if (_x != "this") then {
            private _muzzleMagazines = getArray (configFile >> "CfgWeapons" >> _weapon >> _x >> "magazines");
            _weaponMagazines append _muzzleMagazines;
        };
    } count _muzzles;
    {
        private _ammoType = getText(configFile >> "CfgMagazines" >> _x >> "ammo");
        _weaponMagazines set [_forEachIndex, [_x, _ammoType]];
    } forEach _weaponMagazines;

    private _magazine = "";
    {
        _x params ["_magazineType", "_ammoType"];
        if (_ammoType == _ammo) exitWith {
            _magazine = _magazineType;
        };
    } count _weaponMagazines;

    if (_magazine == "") then {
        _loudness = 0;
        TRACE_2("No mag for Weapon/Ammo??",_weapon,_ammo);
    } else {
        private _initSpeed = getNumber(configFile >> "CfgMagazines" >> _magazine >> "initSpeed");
        private _caliber = getNumber (configFile >> "CfgAmmo" >> _ammo >> "ACE_caliber");
        private _hit = 1;

        _caliber = call {
            // If explicilty defined, use ACE_caliber
            if ((count configProperties [(configFile >> "CfgAmmo" >> _ammo), "configName _x == 'ACE_caliber'", false]) == 1) exitWith {_caliber};
            if (_ammo isKindOf ["ShellBase", (configFile >> "CfgAmmo")]) exitWith { 80 };
            if (_ammo isKindOf ["RocketBase", (configFile >> "CfgAmmo")]) exitWith { 200 };
            if (_ammo isKindOf ["MissileBase", (configFile >> "CfgAmmo")]) exitWith { 600 };
            if (_ammo isKindOf ["SubmunitionBase", (configFile >> "CfgAmmo")]) exitWith { 80 };
            if (_caliber <= 0) then { 6.5 } else { _caliber };
        };

        if (_ammo isKindOf ["BulletBase", (configFile >> "CfgAmmo")]) then {
            _hit = (getNumber (configFile >> "CfgAmmo" >> _ammo >> "hit"));
            if(_isSuppressedWeapon) then {
                _hit = _hit / 30;
            };
        }; 
        _loudness = (_caliber ^ 1.25 / 10) * (_initspeed / 1000) * (_hit/10) ^ 0.75;
        TRACE_8("building cache",_weapon,_ammo,_magazine,_initSpeed,_caliber,_loudness,_hit,_isSuppressedWeapon);
    };
    GVAR(cacheAmmoLoudness) setVariable [(format ["%1%2",_weapon,_ammo]), _loudness];
};
_loudness