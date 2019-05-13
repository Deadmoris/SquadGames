private ["_newPhase", "_gun","_type","_dir","_milSys","_min","_max"];
_gun = vehicle player;
_type = typeOf _gun;
_dir = _this select 0;
_milSys = getNumber (configFile >> "CfgVehicles" >> _type >> "initSpeed");
_max = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "OpticElevate" >> "maxValue");
_min = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "OpticElevate" >> "minValue");
if (_milSys == 6400) then {_dir = _dir * -1};
_newPhase = (round((_gun animationPhase "OpticElevate") + _dir) min _max) max _min;
_gun animate ["OpticElevate", _newPhase];

