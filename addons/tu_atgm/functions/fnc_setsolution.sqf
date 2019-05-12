#define __magcfg configFile >> "cfgMagazines" >> _x

private ["_currange","_ammo","_fired","_c","_flighttime","_elev","_maxrng","_minrng","_lead"];
params["_veh", "_range", "_magz", "_wpn", "_ignorelead"];

_fired = []; 
/*
{
	_ammo = getText(__magcfg >> "ammo");
	if !(_ammo in _fired) then {
		_maxrng =  getNumber(__magcfg >> "ace_air_fcs_maxrange");
		if (_maxrng > 0) then {
			_currange = _maxrng min _range;
			_elev = [_x,_currange] call FUNC(elev);
			_flighttime = _elev select 1;
			_elev = _elev select 0;
			_lead = if (_ignorelead) then {0} else {[_veh,_wpn,_currange,_flighttime] call FUNC(lead)};
			_fired set [count _fired,_ammo];
			_fired set [count _fired,[_lead,_elev]];
		};
	};
} forEach _magz;*/

_veh setVariable ["tu_atgm_fired",_fired];
