_suv = _this select 0;
_unit1 = _this select 1;
_unit2 = _this select 2;

_selectedUnit = _unit1;
if((assignedVehicleRole _selectedUnit select 0) != "Turret") then {
_selectedUnit = _unit2;
};

if((assignedVehicleRole _selectedUnit select 0) == "Turret") then {
	if(_suv animationPhase "HideGun_01" == 1) then {
		[-2,{_this switchMove "CUP_ArmoredSUV_GunnerIn_PMC";},_selectedUnit] call CBA_Fnc_GlobalExecute;
	};
};