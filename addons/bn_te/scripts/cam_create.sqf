private ["_layer","_keyDownHandlerId","_sight_orientation","_weapon_dir","_x0","_y0","_xdash","_ydash", "_handler_id", "_tu_arty_gun_sight_cam","_z0"];
_vehicle = vehicle player;
uiNamespace setVariable ["tu_arty_aiming_circle_mode",false];
if ((count _this > 0) && {(_this select 0) isKindOf "bn_ace2_aiming_circle"}) then {
	_vehicle = _this select 0;
	uiNamespace setVariable ["tu_arty_aiming_circle_mode",true];
	uiNamespace setVariable ["tu_arty_aiming_circle",_vehicle];
};
_tu_arty_gun_sight_cam = "camera" camCreate (position (_vehicle));
_tu_arty_gun_sight_cam cameraEffect ["internal", "back"];
_tu_arty_gun_sight_cam setDir (getDir (_vehicle));
_tu_arty_offset = getArray (configFile >> "CfgVehicles" >> typeOf (_vehicle) >> "tu_arty_sight_offset");
_tu_arty_offset_selection = getText (configFile >> "CfgVehicles" >> typeOf (_vehicle) >> "tu_arty_sight_offset_selection");
_use_offset = getNumber (configFile >> "CfgVehicles" >> typeOf (_vehicle) >> "tu_arty_use_offset");
tu_arty_apply_offset = false;
if (_use_offset == 0) then {
	if (uiNamespace getVariable ["tu_arty_aiming_circle_mode",false]) then {
		// do nothing
	} else {
		_tu_arty_gun_sight_cam attachTo [_vehicle,[0,0,0.3], "gunnerView"];
	};
	
} else {
	tu_arty_apply_offset = true;
	tu_arty_offset = _tu_arty_offset;
	tu_arty_offset_selection = _tu_arty_offset_selection;
};
_tu_arty_gun_sight_cam camSetFov 0.14;//;0.0718;
_tu_arty_gun_sight_cam camCommit 0;
uiNamespace setVariable ["tu_arty_gun_sight_cam",_tu_arty_gun_sight_cam];


/*_layer = ["BN_GUN_SIGHT"] call BIS_fnc_rscLayer;
_layer cutRsc ["BN_GUN_SIGHT", "PLAIN", 0, false];*/
_keyDownHandlerId = 0;
if (uiNamespace getVariable ["tu_arty_aiming_circle_mode",false]) then {
	_keyDownHandlerId = (findDisplay 46) displayAddEventHandler ["KeyDown", {(_this + [uiNamespace getVariable "tu_arty_aiming_circle", uiNamespace getVariable "tu_arty_gun_sight_cam"]) call bn_te_fnc_gun_sight_keydown_EH}];
} else {
	_keyDownHandlerId = (findDisplay 46) displayAddEventHandler ["KeyDown", {(_this + [vehicle player, uiNamespace getVariable "tu_arty_gun_sight_cam"]) call bn_te_fnc_gun_sight_keydown_EH}];
};
	
_handler_id = addMissionEventHandler ["Draw3D", {
	_tu_arty_gun_sight_cam_int = uiNamespace getVariable "tu_arty_gun_sight_cam";
	_aiming_circle_mode = uiNamespace getVariable ["tu_arty_aiming_circle_mode", false];
	if (isNil "_tu_arty_gun_sight_cam_int") exitWith {hint "прицел сломалсо";};

	_vehicle_dir = getDir (vehicle player);
	_sight_elevation = ((vehicle player) getVariable ["bn_sight_elevation",0]);
	_weapon_dir = ((vehicle player) weaponDirection ((weapons (vehicle player)) select 0));
	_x0 = _weapon_dir select 0;
	_y0 = _weapon_dir select 1;
	_weapon_dir_atan = 0-((((_x0 atan2 _y0) - _vehicle_dir+180) mod 360) - 180); // 0 - atan
	_weapon_dir_atan2 = ((_x0 atan2 _y0) + _vehicle_dir) mod 360;
	_sight_orientation = (((vehicle player) getVariable ["bn_sight_orientation",0]) + (_vehicle_dir)) mod 360;
	_sight_level = (vehicle player) getVariable ["bn_sight_level_orientation",0];
	
	if (_aiming_circle_mode) then {
		_aiming_circle = uiNamespace getVariable "tu_arty_aiming_circle";
		_reset_dir = _aiming_circle getVariable "tu_arty_deflection_reset";
		_sight_orientation = _aiming_circle getVariable ["bn_sight_orientation",0]; // + 180???
		_sight_level = _aiming_circle getVariable ["bn_sight_level_orientation",0];
		_x0 = 0;
		_y0 = 1;		
		//_aiming_circle setDir (_sight_orientation);
		// todo: animate
	};
	
	if (tu_arty_apply_offset) then {
		_tu_arty_offset_x = (tu_arty_offset select 0) * (cos _weapon_dir_atan) - (tu_arty_offset select 1) * (sin _weapon_dir_atan);
		_tu_arty_offset_y = (tu_arty_offset select 0) * (sin _weapon_dir_atan) + (tu_arty_offset select 1) * (cos _weapon_dir_atan);
		_tu_arty_offset_z = (tu_arty_offset select 2);
		_sel_pos = (vehicle player) selectionPosition tu_arty_offset_selection;
		_sight_pos = (vehicle player) modelToWorld (_sel_pos vectorAdd [_tu_arty_offset_x,_tu_arty_offset_y,_tu_arty_offset_z]);
		_tu_arty_gun_sight_cam_int setPos _sight_pos;
		//diag_log "_tu_arty_gun_sight_cam_int setPos _sight_pos;";
		_sight_orientation = ((vehicle player) getVariable ["bn_sight_orientation",0]);
	}; 
	_xdash = _x0 * (cos _sight_orientation) - _y0 * (sin _sight_orientation);
	_ydash = _x0 * (sin _sight_orientation) + _y0 * (cos _sight_orientation); // не зря я про матрицу поворота учил, блеать

    //_dir = acos(_ydash / (((_xdash^2) + (_ydash^2))^0.5));
	//if (_xdash<0) then {_dir = 360 - _dir};
	//_angle = _sight_level;
	//_vecdx = sin(_dir) * cos(_angle);
	//_vecdy = cos(_dir) * cos(_angle);
	//hint format["dir: %1\nangle: %2\npitch: %3",_dir,_angle,_pitch];

	_xdash = _xdash * cos(_sight_level);
	_ydash = _ydash * cos(_sight_level);
	_zdash = sin(_sight_level);
	_vecuz = cos(_sight_level);

	(uiNamespace getVariable "tu_arty_gun_sight_cam") setVectorDirAndUp [[_xdash,_ydash,_zdash],[0,0,_vecuz]];	
	//(uiNamespace getVariable "tu_arty_gun_sight_cam") setVectorDirAndUp [[_xdash, _ydash, _zdash],[0,0,1]]; //todo: подъём окуляра
	
	if (_aiming_circle_mode) then {
		_cam_pos = getPos(uiNamespace getVariable "tu_arty_aiming_circle");
		_tu_arty_gun_sight_cam_int setPos [(_cam_pos select 0), (_cam_pos select 1)-0.5, (_cam_pos select 2) + 1.6];
	};
}];

uiNamespace setVariable ["BN_TE_CamViewChanged", true];
uiNamespace setVariable ["BN_TE_CamView", 1];

[_handler_id, _keyDownHandlerId]
