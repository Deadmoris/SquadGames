private ["_gun", "_pad","_dir","_up"];
// diag_log "level_gun";
// diag_log _this;

_gun = (_this select 0) select 0;

if ((_gun isKindOf "bn_ace2_aiming_circle")||(_gun isKindOf "tu_arty_collimator")) then {
	_dir = getDir _gun;
	//_pad = nil;
	//_pad = "Land_HelipadEmpty_F" createVehicle (getPos _gun);
	//_pad setPosATL (getPosATL _gun);
	_gun setVectorDirAndUp [[0,1,0],[0,0,1]];	
	if (_gun isKindOf "tu_arty_collimator") then {_gun setDir _dir;};
}else{ 	
	_dir = vectorDir _gun;
	_up = vectorUp _gun;
	_vecdz = _dir select 2;
	_vecuz = _up select 2;
	_angle = asin _vecdz;
	_dir = direction _gun;
	_pitch =acos(_vecuz/cos(_angle));	
	
	if((_angle>15)||(_pitch>15)||(_angle<-15)||(_pitch<-15)) exitWith {hint("Слишком неровная поверхность");};
	
	_angle = _angle*0.7;
	_pitch = _pitch*0.7;
	
	_vecdx = sin(_dir) * cos(_angle);
	_vecdy = cos(_dir) * cos(_angle);
	_vecdz = sin(_angle);
	
	_vecux = cos(_dir) * cos(_angle) * sin(_pitch);
	_vecuy = sin(_dir) * cos(_angle) * sin(_pitch);
	_vecuz = cos(_angle) * cos(_pitch);
	
	_dir = [_vecdx,_vecdy,_vecdz];
	_up = [_vecux,_vecuy,_vecuz];
		
	_pad = "Land_HelipadEmpty_F" createVehicle (getPos _gun);
	_pad setPosATL (getPosATL _gun);
	_pad setVectorDirAndUp [_dir,_up];

	//hint (str[_pad,getPos _pad,_gun,getPos _gun]); 
	
	/*
	[_gun, _pad] spawn { //дебаг-костыль
		waitUntil {
			_d = (_this select 0) distance (_this select 1);
			hint str(d);
			if (_d>1) exitWith {detach (_this select 0); deleteVehicle (_this select 0);};
			sleep 3;
			_d>1;
		};
	};*/
	if (_gun isKindOf "TU_ARTY_M224_mortar") exitWith {
		_gun attachTo [_pad, [0,0,0.19]];
	};
	if (_gun isKindOf "TU_ARTY_M252_mortar") exitWith {
		_gun attachTo [_pad, [0,0,0.48]];
	};
	if (_gun isKindOf "TU_ARTY_120mm_mortar") exitWith {
		_gun attachTo [_pad, [0,0,0.36]];
	};
	if (_gun isKindOf "rhs_2b14_82mm_Base") exitWith {
		_gun attachTo [_pad, [0,0,0.38]];
	};
	if (_gun isKindOf "bn_ace2_aiming_circle") exitWith {
		_gun attachTo [_pad, [0,0,1]];
	};

	// default option in case of further classname changes
	_gun attachTo [_pad, [0,0,0.38]]
};