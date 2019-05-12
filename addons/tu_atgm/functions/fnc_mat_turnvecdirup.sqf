private ["_i", "_newVec"];

params ["_vec", "_vecDir", "_vecUp"];

_i = [_vecDir, _vecUp] call BIS_fnc_crossProduct;

_newVec = [[_i, _vec] call tu_atgm_fnc_dotProduct, [_vecDir, _vec] call tu_atgm_fnc_dotProduct, [_vecUp, _vec] call tu_atgm_fnc_dotProduct];

_newVec