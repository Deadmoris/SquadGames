private ["_newPhase", "_gun","_type","_dir","_milSys","_min","_max"];
_gun = vehicle player;
_type = typeOf _gun;
_dir = _this select 0;
_max = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "MainTurretTraverse" >> "maxValue");
_min = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "MainTurretTraverse" >> "minValue");
_newPhase = (round((_gun animationPhase "MainTurretTraverse") + _dir) min _max) max _min;
_gun animate ["MainTurretTraverse", _newPhase];

 