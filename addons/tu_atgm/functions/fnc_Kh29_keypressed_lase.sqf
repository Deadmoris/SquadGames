
private ["_veh"];

_veh = vehicle player;

//if !(_veh isKindOf "Su25_Base" || {_veh isKindOf "Plane_LG"} || {_veh isKindOf "Su34"} || {_veh isKindOf "ACE_Su30"}) exitwith {false};
if !(getNumber(configFile>>"cfgWeapons">>currentWeapon _veh>>"tu_atgm_enableAirDesignator") == 1) exitwith {false};
if (tu_atgm_presstime_Kh29 == time) exitWith {false};
if (tu_atgm_Kh29_lasinginprogress) exitWith {false};
tu_atgm_Kh29_lasinginprogress = true;
tu_atgm_presstime_Kh29 = time;
if (count _this >= 3) then {[_veh,_this select 1,_this select 2] call tu_atgm_fnc_Kh29_lasepfh} else {[_veh,0,0] call tu_atgm_fnc_Kh29_lasepfh};

true