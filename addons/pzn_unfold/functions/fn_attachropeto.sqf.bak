	
if (isnull (player getvariable ["pzn_currentrope",objnull])) exitwith {hint "Не прицеплен трос"};
_v = _this select 0;
_p = _this select 1;
_ropes = ropes _v;
if (count _ropes > 0) exitwith {hint "Трос тут уже прицепили"};
// _ropesp = ropes _p;
// hint str _ropesp;
// _p ropeDetach _rope;
_helper = _p getVariable "pzn_helper";
if (((ropeattachedto _helper) distance _v) > 15) exitwith {hint "слишком далеко"};

_vu = (vectorup _v) select 2;
_offset = if ((_v getdir _p) < 180) then {2 * _vu} else {-2 * _vu};
_rope = _p getvariable "pzn_currentrope";

[_helper,_rope] remoteExec ["pzn_unfold_fnc_detachbridge", _rope];
	_helper attachTo [_v, [_offset,0,0]];

[_v,_offset,_rope] remoteExec ["pzn_unfold_fnc_attachbridge", _rope];