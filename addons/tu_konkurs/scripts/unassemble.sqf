
params ["_target","_class"];

private _holder = objNull;
 // hint str _holder;
_nearby = nearestObjects [_target, ['GroundWeaponHolder'], 3];
if (count _nearby > 0) then {_holder = _nearby select 0};
if (isNull _holder) then {_holder = 'GroundWeaponHolder' createVehicle (getPos _target);};
_holder addbackpackCargoGlobal [_class, 1];
_pos = ((getPos _target) vectorAdd ((vectorDir _target) vectorMultiply -1));
_holder setPosATL [_pos select 0, _pos select 1, (getPosATL _target) select 2];
deletevehicle _target;