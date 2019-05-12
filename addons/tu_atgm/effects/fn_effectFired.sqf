_this call BIS_fnc_effectFiredRocket;
	// hint "im local";
	if ((_this select 4) isKindOf 'MissileBase') then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call tu_atgm_fnc_fired }};