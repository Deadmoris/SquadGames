private ["_object","_truck", "_z"];
_object = _this select 0;
TU_ARTY_TOWING_TRUCK_CLASSES = ["rhs_gaz66_vmf","RHS_Ural_Base","CUP_HMMWV_Base","CUP_MTVR_Base","rhsusf_hmmwe_base"];
_truck = nearestObjects [_object, TU_ARTY_TOWING_TRUCK_CLASSES, 15] select 0;

//private _barrel_offset = [0,3.4,-1];
private _barrel_offset = _object selectionPosition "slingloadcargo3";
private _truck_offset = [0,-2.7,0];
private _offset_array = getArray (configFile >> "CfgVehicles" >> typeOf _truck >> "tu_arty_gun_attachment_point");
private _rotation_array = getArray (configFile >> "CfgVehicles" >> typeOf _truck >> "tu_arty_gun_rotation");
if (count _offset_array > 0) then {
	_truck_offset = _offset_array;
};

// другая точка отсчета, тк центр у моделей в мировом пространстве разный
_truck_offset set [2, ((_truck selectionPosition "wheel_1_1_axis") select 2) + ((_truck selectionPosition "axis_wheel_1_1") select 2) + (_truck_offset select 2)]; //имя оси "wheel_1_1_axis" либо "axis_wheel_1_1"  
_barrel_offset set [2, ((_object selectionPosition "wheel_1_1_axis") select 2)]; 

if (count _this > 1) then {
	_truck = _this select 1;
};
if (count _this > 2) then {
	_truck_offset = _this select 2;
};

private _attach_position = _truck modelToWorld _truck_offset;
private _barrel_position = _object modelToWorld _barrel_offset;

if (_attach_position distance _barrel_position < 2) then {
	_z=0;
	_object attachTo [_truck, [_truck_offset select 0,0 - (abs(_truck_offset select 1) + abs(_barrel_offset select 1)),(_truck_offset select 2) - (_barrel_offset select 2)]];
	_object enableSimulation true;
	if (_object isKindOf "RHS_M119_base") then {
		_object setDir 180;
	}else{
		_object setDir 0;
	};
	_object lock true;
	_truck setVariable ["tu_arty_tow_busy", true, true];
	if (count _rotation_array > 0) then {
		_object setVectorUp _rotation_array;
	};
} else {
	hint ("Тягач (" + (getText (configFile >> "CfgVehicles" >> typeOf _truck >> "displayName")) + ") слишком далеко");
};