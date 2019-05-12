private ["_signV","_signH","_distV","_sinV","_cosV","_d","_offsetH","_offsetV","_off","_dh","_dv","_spdH","_spdV","_lh","_lv","_d","_c","_max","_mag","_dt","_min","_ahead","_vec1_hmag","_vec2_hmag","_vec1","_diffH","_vec2","_diffV","_diff","_H","_V","_newdirH","_newdirV","_newvec"];

_vec2 = _this select 0;
_vectortomissile = _this select 1;
_vec1 = _vectortomissile;
_signH = 1;
_signV = -1;

if (_dist < 50) exitwith {[0,0,0]};


_vec1_hmag = _vec1 call tu_atgm_fnc_mat_horizmag;
_vec2_hmag = _vec2 call tu_atgm_fnc_mat_horizmag;

_diffH = [_vec2,_vec1] call tu_atgm_fnc_mat_2vecanglediff;
_diffV = [[_vec2_hmag,_vec2 select 2],[_vec1_hmag,_vec1 select 2]] call tu_atgm_fnc_mat_2vecanglediff;

if (_diffH < 0) then {_signH = -1};
if (_diffV < 0) then {_signV = 1};

_newvec = _vec2;

_vectortomissile_hmag = _vectortomissile call tu_atgm_fnc_mat_horizmag;

_vectortomissileH = [_vectortomissile select 0,_vectortomissile select 1];

	_wvecH = [_newvec select 0,_newvec select 1];
	_wvec_hmag = _newvec call tu_atgm_fnc_mat_horizmag;
	_wvecV = [_wvec_hmag, _newvec select 2];

	_cosH = [_wvecH,_vectortomissileH] call tu_atgm_fnc_mat_cos2Dvec;
	_sinH = sqrt (abs(1-_cosH^2));
	_distH = _vectortomissile_hmag;
	_offsetH = _distH*_sinH;

	_vectortomissileV = [_distH*_cosH,_vectortomissile select 2];

	_cosV = [_wvecV,_vectortomissileV] call tu_atgm_fnc_mat_cos2Dvec;
	_sinV = sqrt (abs(1-_cosV^2));
	_distV = _vectortomissileV call tu_atgm_fnc_mat_horizmag;
	_offsetV = _distV*_sinV;
	_off = sqrt (_offsetH^2 + _offsetV^2);

[_offsetH*_signH, _offsetV*_signV, _off]
