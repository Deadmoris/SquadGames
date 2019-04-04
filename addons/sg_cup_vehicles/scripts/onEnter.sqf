_suv = _this select 0;
_position = _this select 1;
_unit = _this select 2;

if(_position == "gunner") then {
	if(_suv animationPhase "HideGun_01" == 1) then {
		[-2,{_this switchMove "CUP_ArmoredSUV_GunnerIn_PMC";},_unit] call CBA_Fnc_GlobalExecute;
	};
};