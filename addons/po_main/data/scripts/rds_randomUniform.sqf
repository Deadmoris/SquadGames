/*
	random cloths assigment

	i: 	_unit - unit
	a: reyhard
*/

params["_unit"];

// exit for non local units
if(!local _unit)exitWith{};

if(is3DEN)exitWith{};

private _textureList = getArray (configFile >> "cfgVehicles" >> typeOf _unit >> "rds_randomCloths");
private _textureSources = [];
private _probabilities = [];

// create 2 separate arrays - one for uniforms & second for their probabilities (number)
for "_i" from 0 to (count _textureList -1) step 2 do {
	_textureSources append [_textureList select _i];
	_probabilities append [_textureList select (_i +1)];
};

private _uniform = ([_textureSources, _probabilities] call bis_fnc_selectRandomWeighted);
private  _uniformItems = uniformItems _unit;

_unit addUniform _uniform;
{_unit addItemToUniform _x}foreach _uniformItems;
/*
_unit spawn {
	if((headgear _this) isEqualTo "")then{
		if(random(100)>20)exitWith{};
		_this addGoggles (selectRandom [] );
	};
};*/