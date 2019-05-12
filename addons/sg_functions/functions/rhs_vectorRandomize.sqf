/*
	Name: 		RHS_fnc_vectorRandomize
	
	Desc:		Randomize a 3d vector by integer or array
	
	Param(s):	0 - 3D Vector
				1 - Integer / 3D Vector
	
	Returns:	3D Vector
	
	Author:		Jiaan "Bakerman"
*/
/* 
private ["_vector", "_value"];

// Inputs
_vector = _this select 0;
_value = _this select 1;

if (typeName _value == "ARRAY") then {
	_vector = _vector vectorAdd [
		random((_value select 0) * 2) - (_value select 0),
		random((_value select 1) * 2) - (_value select 1),
		random((_value select 2) * 2) - (_value select 2)
	];
} else {
	_vector = _vector vectorAdd [
		random(_value * 2) - _value,
		random(_value * 2) - _value,
		random(_value * 2) - _value
	];
};

// Return
_vector; */