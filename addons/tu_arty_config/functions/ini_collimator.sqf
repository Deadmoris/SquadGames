
#include "script_component.hpp"

tu_arty_collimatorHandler = {
	private ["_gp","_nearCollimators","_moved","_lastPos","_proxies","_newCollimators","_collimatorProxy","_oldCollimators","_cp","_dis","_offset","_disDif","_relDir","_colRot","_colElev","_cosElev","_cosElev","_xdash","_ydash","_zdash","_vecuz"];     
	                                                                                                                                                                                                               
	_nearCollimators = [];                                                                                                                                                                                         
	_gp = positionCameraToWorld [0,0,0];                                                                                                                                                                           
	_nearCollimators = nearestObjects [_gp, ["tu_arty_collimator"], 20];	
	_proxies = nearestObjects [_gp, ["tu_arty_collimator_test"], 20];
	//_proxies = (positionCameraToWorld [0,0,0]) nearEntities ["bn_ace2_collimator_test", 20];
	_gp set[2, getTerrainHeightASL [_gp select 0, _gp select 1]];	
	
	if ((count _nearCollimators) > 0)then {_nearCollimators = [_nearCollimators select 0];};// ограничение, только ближайший

	_moved = false;
	
	{
		_lastPos = _x getVariable [QGVAR(colLastPos), [0,0,0]];		

		if(_lastPos distance (getPosASL _x) > 1) exitWith {
			_moved = true;	
		};
		
	} forEach _nearCollimators;
	
	if((count _proxies) != (count _nearCollimators)) then {
		_moved = true;		
	};
	if(_moved) then {
		ACE_ARTY_COLLIMATORS = [];
		{
			deleteVehicle _x;
		} forEach _proxies;
	};
	_newCollimators = _nearCollimators - ACE_ARTY_COLLIMATORS;	
	{
		_collimatorProxy = "tu_arty_collimator_test" createVehicleLocal (getPos _x);		
		//_collimatorProxy animate["mask", 0.5]; //debug
		_collimatorProxy attachTo [_x, [0,0,0], "optic_proxy"];
		_x setVariable ["ace_collimator_proxy", _collimatorProxy];
	} forEach _newCollimators;
	
	_oldCollimators = ACE_ARTY_COLLIMATORS - _nearCollimators;
	
	{
		_collimatorProxy = _x getVariable "ace_collimator_proxy";
		detach _collimatorProxy;
		deleteVehicle _collimatorProxy;
	} forEach _oldCollimators;
	
	ACE_ARTY_COLLIMATORS = _nearCollimators;
	
	{
		_collimatorProxy = _x getVariable "ace_collimator_proxy";
		_x setVariable [QGVAR(colLastPos), (getPosASL _x)];	
		_colRot = (_x animationPhase "rotate_optic")/3200*-180;	
		_colElev = (_x animationPhase "elevate_optic")/3200*-180;
		_cosElev = cos(_colElev);
		_xdash = -1*(sin _colRot) * _cosElev;
		_ydash = (cos _colRot) * _cosElev;
		_zdash = sin(_colElev);
		_vecuz = _cosElev;
		_collimatorProxy setVectorDirAndUp [[_xdash,_ydash,_zdash],[0,0,_vecuz]];	
		
		_cp = _collimatorProxy modelToWorld (_collimatorProxy selectionPosition "optic");	
		_cp set[2, getTerrainHeightASL [_cp select 0, _cp select 1]];	
		_dis =  (_gp distance _cp);
		_offset = 0;
		_disDif = 0;	
		//_relDir = [_collimatorProxy, _gp] call BIS_fnc_relativeDirTo;		
		_relDir = _cp getDir _gp;
		_relDir = _relDir - (getDir _collimatorProxy);
		//if (_relDir>360) then{_relDir = _relDir-360;};	
		//if (_relDir<360) then{_relDir = _relDir+360;};			
		//hint str(_relDir);
		//if (_relDir>180) then{_relDir = _relDir-360;};	
		_relDir = -1*(sin _relDir) * _dis;
		_relDir = _relDir / 0.00796;
		
		if ((_dis >= 16)||(_dis <= 4)||(_relDir > 100)||(_relDir<-100)) then {
			_disDif = -1; // обратить сетку
		}else{
			//при 6.22101 анимация лупы = 0; при 16.66; анимация лупы = 1; диапазон 10.439; 1 фаза 1/10.439 = 0.0957946
			//_disDif = (0.59-(_dis * 0.062))*-1;
			_disDif = (_dis - 6.22101) * 0.0957946;	
		}; 	
		_collimatorProxy animate["expand_ul", _disDif];
		_collimatorProxy animate["expand_ur", _disDif];
		_collimatorProxy animate["expand_ll", _disDif];
		_collimatorProxy animate["expand_lr", _disDif];		
		_collimatorProxy animate["offset", _relDir];
	} forEach ACE_ARTY_COLLIMATORS;
};

tu_arty_startCollimatorHandler = {
	[] call tu_arty_endCollimatorHandler;
	ACE_ARTY_COLLIMATORS_PFH_ID = [tu_arty_collimatorHandler, 0.0, []] call CBA_fnc_addPerFrameHandler;
};

tu_arty_endCollimatorHandler = {
	{
		_collimatorProxy = _x getVariable "ace_collimator_proxy";
		detach _collimatorProxy;
		deleteVehicle _collimatorProxy;
	} forEach ACE_ARTY_COLLIMATORS;
	[ACE_ARTY_COLLIMATORS_PFH_ID] call CBA_fnc_removePerFrameHandler;
	ACE_ARTY_COLLIMATORS = [];
};

tu_arty_onAlignCollimator = {
	// player sideChat format["lol"];
	GVAR(aligningCollimator) = _this select 0;
	_pos = GVAR(aligningCollimator) modelToWorld (GVAR(aligningCollimator) selectionPosition "sight_begin");
	_camera = "camera" camCreate _pos;
	_camera cameraEffect ["internal", "back"];
	_camera camSetTarget (GVAR(aligningCollimator) modelToWorld (GVAR(aligningCollimator) selectionPosition "sight_end"));
	_camera camSetFov 0.2;
	_camera camCommit 0.1;	
	showCinemaBorder false;
	GVAR(collimatorAlignHorz) = GVAR(aligningCollimator) animationPhase "rotate_optic";
	GVAR(collimatorAlignVert) = GVAR(aligningCollimator) animationPhase "elevate_optic";
	[] call FUNC(addKeys);
	_func = {
		_camera = (_this select 0) select 0;
		if(GVAR(aligning)) then {
			_pos = GVAR(aligningCollimator) modelToWorld (GVAR(aligningCollimator) selectionPosition "sight_begin");
			_camera camSetPos _pos;
			_camera camSetTarget (GVAR(aligningCollimator) modelToWorld (GVAR(aligningCollimator) selectionPosition "sight_end"));
			camUseNVG ace_sys_nvg_on;
			_camera camSetFov 0.2;
			_camera camCommit 0.1;
		} else {
			_camera cameraEffect ["terminate", "back"];
			cutrsc ["default", "PLAIN DOWN"];
			camDestroy _camera;
			[] call FUNC(removeKeys);
			[(_this select 1)] call CBA_fnc_removePerFrameHandler;
		};
	};
	GVAR(aligning) = true;
	[_func, 0.05, [_camera]] call CBA_fnc_addPerFrameHandler;
};

FUNC(addKeys) = {
	GVAR(key_dn) = (findDisplay 46) displayAddEventHandler["KeyDown", '["KeyDown", _this] call FUNC(keyEvent)'];
	GVAR(key_up) = (findDisplay 46) displayAddEventHandler["KeyUp", '["KeyUp", _this] call FUNC(keyEvent)'];
};

FUNC(removeKeys) = {
	(findDisplay 46) displayRemoveEventhandler ["KeyDown", GVAR(key_dn)];
	(findDisplay 46) displayRemoveEventhandler ["KeyUp", GVAR(key_up)];
};

FUNC(keyEvent) = {
	_event = _this select 0;
	_parameters = _this select 1;

	if (GVAR(presstime) == time) exitwith {false};
	GVAR(presstime) = time;
	switch(_event) do {
		case "KeyDown": {
			_key = _parameters select 1;
			switch(_key) do {
				case 0xCD: { GVAR(collimatorAlignHorz) = GVAR(collimatorAlignHorz) + 0.25; };
				case 0xCB: { GVAR(collimatorAlignHorz) = GVAR(collimatorAlignHorz) - 0.25; };
				case 0xD0: { GVAR(collimatorAlignVert) = GVAR(collimatorAlignVert) + 0.25; };
				case 0xC8: { GVAR(collimatorAlignVert) = GVAR(collimatorAlignVert) - 0.25; };
				case 1:  { GVAR(aligning) = false; };
			};
		};
	};
	if ((GVAR(aligningCollimator) animationPhase "rotate_optic") != GVAR(collimatorAlignHorz)) then {
		GVAR(aligningCollimator) animate ["rotate_optic", GVAR(collimatorAlignHorz)];
	};
	if ((GVAR(aligningCollimator) animationPhase "elevate_optic") != GVAR(collimatorAlignVert)) then {
		GVAR(aligningCollimator) animate ["elevate_optic", GVAR(collimatorAlignVert)];
	};
	!(GVAR(aligning))
};

//GVAR(placingStake) = false;



