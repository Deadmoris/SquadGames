private ["_u","_v"];

_u = _this select 0;

if !(local _u)exitWith{};

_v=(_u getVariable ["rhs_camo",-10]);
/*
type in editor
	this setVariable ["rhs_camo",-1]
 to turn off camo randomisation
 */

if(_v isEqualTo -1)exitWith{};

_camo=
[
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo3_co.paa"],

	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot1_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot1_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot2_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot2_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot3_co.paa"]
];
//random camo
if(_v isEqualTo -10)then{
	_i=round(random((count _camo) - 1));
	_u setObjectTexture [0,(_camo select _i) select 0];
	_u setObjectTexture [1,(_camo select _i) select 1];
}else{
//manual camo selection
	if(_v>((count _camo) - 1))exitWith{};
	_u setObjectTexture [0,(_camo select _v) select 0];
	_u setObjectTexture [1,(_camo select _v) select 1];
};
