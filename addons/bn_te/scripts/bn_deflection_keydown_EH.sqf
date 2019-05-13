private ["_phase","_gun","_shft","_cam","_deflection"];



_code = _this select 1;
_shft = _this select 2;
_gun = _this select 5;
_cam = _this select 6;
_milSys = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_milSys");

if (_milSys == 0) then {_milSys = 6000};
_deflection = _gun getVariable ["bn_deflection",_milsys/2];
_elevation = _gun getVariable ["bn_sight_elevation", 0];
_levelDef = _gun getVariable ["bn_sight_level_deflection", 0];
	
if (_code in (actionKeys "TurnLeft")) exitWith {
	_phase = _gun animationPhase "MainTurret_RotateFast";
	if (_shft) then {
		_deflection = ((_deflection-10) + _milSys) mod _milSys;
	} else {
		_deflection = ((_deflection-1) + _milSys) mod _milSys;
	};
	_gun setVariable ["bn_deflection",_deflection];
	_gun setVariable ["bn_sight_orientation", (_deflection / _milSys * 360) + 180];		
};

if (_code in (actionKeys "TurnRight")) exitWith {
	_phase = _gun animationPhase "MainTurret_RotateFast";
	if (_shft) then {
		_deflection = (_deflection+10) mod _milSys;
	} else {
		_deflection = (_deflection+1) mod _milSys;
	};
	_gun setVariable ["bn_deflection", _deflection];
	//_cam setDir (_deflection / _milSys * 360) + 180;
	_gun setVariable ["bn_sight_orientation", (_deflection / _milSys * 360) + 180];
};

	
if (_code in (actionKeys "turretElevationDown")) exitWith {
	if (_shft) then {
		_levelDef = ((_levelDef-10) min 500) max -500;
	} else {
		_levelDef = ((_levelDef-1) min 500) max -500;
	};	
	_gun setVariable ["bn_sight_level_deflection", _levelDef];
	_gun setVariable ["bn_sight_level_orientation", _levelDef/_milSys*360];
};

if (_code in (actionKeys "turretElevationUp")) exitWith {
	if (_shft) then {
		_levelDef = ((_levelDef+10) min 500) max -500;
	} else {
		_levelDef = ((_levelDef+1) min 500) max -500;
	};
	_gun setVariable ["bn_sight_level_deflection", _levelDef];
	_gun setVariable ["bn_sight_level_orientation", _levelDef/_milSys*360];
};

if (_code in (actionKeys "MoveForward")) exitWith {
	if (_elevation < 45) then {_gun setVariable ["bn_sight_elevation", _elevation+5];};
};

if (_code in (actionKeys "ReloadMagazine")) exitWith {
	_aiming_circle = uiNamespace getVariable ["tu_arty_aiming_circle", objNull]; 
	if (!(isNull _aiming_circle)) then {
		_aiming_circle setVariable ["tu_arty_deflection_reset", floor (_aiming_circle getVariable ["bn_deflection",0])];	
	};
};
/*
if (_code in (actionKeys "MoveBack")) exitWith {
	if (_elevation > -45) then {_gun setVariable ["bn_sight_elevation", _elevation-5];};
};*/

if (_code in (actionKeys "MoveBack")) exitWith {
	uiNamespace setVariable ["BN_TE_Display", displayNull];
};

if (_code in (actionKeys "ZoomIn")) exitWith {
	uiNamespace setVariable ["BN_TE_CamViewChanged", true];
};
