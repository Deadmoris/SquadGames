params ["_veh"];
if !(alive _veh) exitWith {};

_dirOffset = if (count _this > 1) then {_this select 1} else {0};
_pitchOffset = if (count _this > 2) then {_this select 2} else {0};

[_veh,_dirOffset,_pitchOffset] call tu_atgm_fnc_Kh29_lasepfh;