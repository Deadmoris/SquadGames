private ["_t","_wH","_wV","_mag","_min","_aheadH","_aheadV","_vec1_hmag","_vec2_hmag","_vec1","_offH","_offHprev","_vec2","_offV","_offVprev","_diff","_H","_V","_newdirH","_newdirV","_newvec","_saclos_cur"];

params["_vec1", "_vec2", "_dt", "_vectortomissile", "_dist", "_vehicle"];

_aheadH = 1;
_aheadV = 1;

if (!isNil {_vehicle getVariable "tu_atgm_saclos_cur"}) then {
	_saclos_cur = _vehicle getVariable "tu_atgm_saclos_cur";
	_saclos_cur set [0,_vec2];
} else {
	_saclos_cur = [_vec2,0,0,0,0];
};

_offHprev = _saclos_cur select 3;
_offVprev = _saclos_cur select 4;

_vec2_hmag = _vec2 call tu_atgm_fnc_mat_horizmag;

_wH = _saclos_cur select 1;
_wV = _saclos_cur select 2;

_H = [_vec2] call tu_atgm_fnc_mat_getvecdir;
_V = [[_vec2_hmag,_vec2 select 2]] call tu_atgm_fnc_mat_getvecdir;


_t = [_vec2,_vectortomissile] call tu_atgm_fnc_opt_losoffset;

_offH = _t select 0;
_offV = _t select 1;

_saclos_cur set [3,_offH];
_saclos_cur set [4,_offV];

_aheadH = 1 + abs _offH;
_aheadV = 1 + abs _offV;

_wdirH = _H + _wH*_dt*_aheadH;
_wdirV = _V + _wV*_dt*_aheadV;
_mag = _vec2 call tu_atgm_fnc_magnitude;
_newvec = [_mag*sin(_wdirH) * sin(_wdirV), _mag*cos(_wdirH) * sin (_wdirV), _mag*cos (_wdirV)];

_vehicle setVariable ["tu_atgm_saclos_cur",_saclos_cur];

[_newvec]
