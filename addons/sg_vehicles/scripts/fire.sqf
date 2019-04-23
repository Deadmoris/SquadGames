_unit = _this select 0;
_ammo = _this select 4;
_shell = _this select 6;

_unit setWeaponReloadingTime [(gunner _unit), (currentMuzzle gunner _unit), 0.001];
sleep 0.1;
_unit setWeaponReloadingTime [(gunner _unit), (currentMuzzle gunner _unit), 1];

if (_ammo == "SG_Sh_57mm_HEAT") exitwith {};
_explodeDist = _unit getVariable ["explodeDist",-1];
if (_explodeDist < 0) exitwith {};

while {(_shell distance _unit) < _explodeDist} do { sleep 0.1; };

_explosion = "SG_57mm_HEFRAG_AirExplo" createVehicle (position _shell);
deletevehicle _shell;