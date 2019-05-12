_vehicle = _this select 0;

private ["_crew"];
_crew = player;

sleep 1;

disableSerialization;

if(getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "has_rwr") == 0) exitWith {};
if(getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "type_rwr") == 8) exitWith {};

//INIT
private ["_type","_threats","_threatsAge","_lastScan","_lastScan2","_RWRopen","_MaxTargets","_scanInterval","_oldThreats"];
_type = 0;
_threats = [];
_threatsAge = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
_lastScan = [];
_lastScan2 = [];
_oldThreats = [];
_RWRopen = false;

// CUSTOMIZABLE PARAMETERS (BASICALLY THE ONLY THING YOU CAN CHANGE HERE)
_maxTargets = 16; // RWR maximum number of targets on-screen
_scanInterval = 0.2; //RWR scan interval in seconds

_skin = "";


//INCOMING MISSILE EVENT HANDLER
rwr_fireSource = objNull;
private ["_incomingeh"];
_incomingeh = _vehicle addEventHandler ["IncomingMissile", {rwr_fireSource = _this select 2}];

//DEFINE
#define CTRL(A) ((uiNamespace getVariable "ACE_RWR_US") displayCtrl A)
#define SKIN 21999
#define THREATS_BASE 22000
#define THREATS_NEW 22020
#define THREATS_GROUND 22040
#define THREATS_AIR 22060
#define THREATS_LAUNCH 22080
#define SR5RWR_display_width 0.22
#define SR5RWR_display_height 0.2934

//UI POSITION SETTINGS
private ["_midx","_midy"];

// USE THESE WHEN THE RWR IS PLACED BOTTOM-RIGHT
//_midX = SafeZoneX + SafeZoneW - (SR5RWR_display_width / 2) - 0.01 - 0.0075;
//_midY = SafeZoneY + SafeZoneH - (SR5RWR_display_height / 2) - 0.01 - 0.01;

// USE THESE WHEN THE RWR IS PLACED TOP-LEFT
//_midX = SafeZoneX + 0.001 + (SR5RWR_display_width / 2);
//_midY = SafeZoneY + (SR5RWR_display_height / 2);

// ((uiNamespace getVariable "ACE_RWR_US") displayCtrl 21999)

_oldrwrposset = -1;

//BEGIN MAIN LOOP
private ["_maxTargets","_threat","_invisibleThreats"];
private ["_LOSorigin","_LOSend","_LOSh","_LOSdist","_LOSvector","_LOS","_posH","_posT","_viewAngleH","_viewAngleT"];
private ["_AX","_AY","_AZ","_BX","_BY","_BZ","_HX","_HY","_HZ","_TX","_TY","_TZ"];
private ["_diffX","_diffY","_absoluteAngle","_relativeAngle","_quadrant","_quadrantFactor","_scaleX","_scaleY","_RWRposX","_RWRposY"];
private ["_age","_threatsAge","_launcher"];
private ["_new_rwr_xpos", "_new_rwr_ypos", "_old_rwr_xpos", "_old_rwr_ypos"];
_old_rwr_xpos = -2;
_old_rwr_ypos = -2;

uiNamespace setVariable ["ACE_RWR_STATUS", true];

while { (_crew == driver _vehicle || {_crew == gunner _vehicle} || {_crew == commander _vehicle}) && {alive _crew} && {alive _vehicle} && (uiNamespace getVariable "ACE_RWR_STATUS")} do {
	//_rwr_set_pos = 0/*["ACE", "sys_air_rwr", "resource_pos"] call ace_settings_fnc_getNumber*/;
	if (_oldrwrposset != rwr_us_pos) then {
		switch (rwr_us_pos) do {
			case 0: {
				_midX = SafeZoneX + SafeZoneW - (SR5RWR_display_width / 2) - 0.01 - 0.0075;
				_midY = SafeZoneY + SafeZoneH - (SR5RWR_display_height / 2) - 0.01 - 0.01;
				_new_rwr_xpos = SafeZoneX + SafeZoneW - 0.01 - SR5RWR_display_width;
				_new_rwr_ypos = SafeZoneY + SafeZoneH - 0.01 - SR5RWR_display_height;
			};
			case 1: {
				_midX = SafeZoneX + SafeZoneW - (SR5RWR_display_width / 2) - 0.01 - 0.0075;
				_midY = SafeZoneY + (SR5RWR_display_height / 2);
				_new_rwr_xpos = SafeZoneX + SafeZoneW - 0.01 - SR5RWR_display_width;
				_new_rwr_ypos = SafeZoneY + 0.01;
			};
			case 2: {
				_midX = SafeZoneX + 0.0025 + (SR5RWR_display_width / 2);
				_midY = SafeZoneY + (SR5RWR_display_height / 2);
				_new_rwr_xpos = SafeZoneX + 0.01;
				_new_rwr_ypos = SafeZoneY + 0.01;
			};
			case 3: {
				_midX = SafeZoneX + 0.0025 + (SR5RWR_display_width / 2);
				_midY = SafeZoneY + SafeZoneH - (SR5RWR_display_height / 2) - 0.01 - 0.01;
				_new_rwr_xpos = SafeZoneX + 0.01;
				_new_rwr_ypos = SafeZoneY + SafeZoneH - 0.01 - SR5RWR_display_height;
			};
		};
		_oldrwrposset = rwr_us_pos;
	};
	
	//GATHER ALL NEARBY CARS AND TANKS
	private _nearStuff = vehicles select {_vehicle distance _x < (getNumber (configFile >> "cfgVehicles" >> typeOf _x >> "rangerwrnew"))};
    _nearStuff deleteAt (_nearStuff find _vehicle);
  
	//SET NUMBER OF TARGETS
	_maxTargets = if (count _nearStuff < 16) then {count _nearStuff} else {16};
  
	if (count _nearStuff > 0) then {
		//ACQUIRE THREATS AND BUILD ARRAY
		for "_y" from 0 to (_maxTargets - 1) do {
			_threat = _nearStuff select _y;
			if ((isVehicleRadarOn _threat) && {_threat != _vehicle} && {alive _threat} && {!(_threat in _threats)}) then {
				_threats set [count _threats, _threat];
			};
		};
		
		//CHECK FOR RADIO VISIBILITY
		_invisibleThreats = [];
		for "_y" from 0 to (count _threats - 1) do {
			_threat = _threats select _y;
			_LOSorigin = getPosASL _vehicle;
			/*if (_vehicle isKindOf "AH64D_EP1" || {_vehicle isKindOf "BAF_Apache_AH1_D"}) then {
				_LOSorigin set [2, (_LOSorigin select 2) + 4 ];
			} else {
				_LOSorigin set [2, (_LOSorigin select 2) + 0 ];
			};*/
			_LOSend = getPosASL _threat;
			//_LOSend set [2,getTerrainHeightASL _LOSend];
			_LOSdist = _vehicle distance _threat;
			_posH = _vehicle worldToModel [_LOSend select 0, _LOSend select 1, (_LOSend select 2) + 0];
			_LOSvector = [(_posH select 0) / _LOSdist, (_posH select 1) / _LOSdist, (_posH select 2) / _LOSdist];
			_LOS = true;
			private _vPositon = (getPosASLVisual _vehicle) vectorAdd [0,0,-2];
		    private _posx = getPosASLVisual _threat vectorAdd [0,0,2];
		    if((count (lineIntersectsObjs [_vPositon, _posx, _threat]) <= 1)  && !(terrainIntersectASL [_vPositon, _posx]))then{ _LOS = false };
			if (_LOS && {!(_threat in _invisibleThreats)} && (isVehicleRadarOn _threat)) then { _invisibleThreats set [count _invisibleThreats, _threat] };
		};
		
		    if (!(isVehicleRadarOn _threat) && (alive _threat) && {_threat in _lastScan2} && {!(_threat in _lastScan)}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan2 = _lastScan2 - [_threat]; };
			if (!(isVehicleRadarOn _threat) && (alive _threat) && {_threat in _lastScan} && {!(_threat in _lastScan2)}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan = _lastScan - [_threat]; };
			if (!(isVehicleRadarOn _threat) && (alive _threat) && {_threat in _lastScan2}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan2 = _lastScan2 - [_threat]; };
			if (!(isVehicleRadarOn _threat) && (alive _threat) && {_threat in _lastScan}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan = _lastScan - [_threat]; };
			
			if ((isVehicleRadarOn _threat) && !(alive _threat) && {_threat in _lastScan2} && {!(_threat in _lastScan)}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan2 = _lastScan2 - [_threat]; };
			if ((isVehicleRadarOn _threat) && !(alive _threat) && {_threat in _lastScan} && {!(_threat in _lastScan2)}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan = _lastScan - [_threat]; };
			if ((isVehicleRadarOn _threat) && !(alive _threat) && {_threat in _lastScan2}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan2 = _lastScan2 - [_threat]; };
			if ((isVehicleRadarOn _threat) && !(alive _threat) && {_threat in _lastScan}) then { _invisibleThreats = _invisibleThreats - [_threat]; _lastScan = _lastScan - [_threat]; };
		
		if (count (_threats - _invisibleThreats) > 0) then {
			if !(_RWRopen) then {
				135737 cutRsc ["ACE_RWR_US","PLAIN"];
				_RWRopen = true;
				_ctrlepos = ctrlPosition CTRL(SKIN);
				_ctrlepos set [0, _new_rwr_xpos];
				_ctrlepos set [1, _new_rwr_ypos];
				_old_rwr_xpos = _new_rwr_xpos;
				_old_rwr_ypos = _new_rwr_ypos;
				CTRL(SKIN) ctrlSetPosition _ctrlepos;
				//CTRL(SKIN) CtrlSetText _skin;
				CTRL(SKIN) ctrlCommit 0;
			};
			
			if (_RWRopen) then {
				if (_old_rwr_xpos != _new_rwr_xpos || {_old_rwr_ypos != _new_rwr_ypos}) then {
					_ctrlepos = ctrlPosition CTRL(SKIN);
					_ctrlepos set [0, _new_rwr_xpos];
					_ctrlepos set [1, _new_rwr_ypos];
					_old_rwr_xpos = _new_rwr_xpos;
					_old_rwr_ypos = _new_rwr_ypos;
					CTRL(SKIN) ctrlSetPosition _ctrlepos;
					CTRL(SKIN) ctrlCommit 0;
				};
			};
		
			for "_y" from 0 to (count _threats - 1) do {
				_threat = _threats select _y;
				
				_type = if (_threat isKindOf "Air") then {1} else {0};
				
				if ((_threat in _threats) && {!(_threat in _invisibleThreats)} && (isVehicleRadarOn _threat) && (alive _threat)) then {
					//GET VECTOR POSITIONS
					_AX = (getPos _vehicle) select 0;
					_BX = (getPos _threat) select 0;
					_AY = (getPos _vehicle) select 1;
					_BY = (getPos _threat) select 1;
					
					//GET VECTOR ANGLE INFORMATION COMPARED TO X-Y AXIS
					_diffX = _AX < _BX;
					_diffY = _AY < _BY;
					
					switch (true) do {
						case (_diffX && {!_diffY}): {_quadrantFactor = +000; _quadrant = 1;	}; //QUADRANT 1
						case (!_diffX && {!_diffY}): {_quadrantFactor = +090; _quadrant = 2;	}; //QUADRANT 2
						case (_diffX && {_diffY}): {_quadrantFactor = -090; _quadrant = 3; 	}; //QUADRANT 3
						case (!_diffX && {_diffY}): {_quadrantFactor = +180; _quadrant = 4;	}; //QUADRANT 4
					};
					
					_absoluteAngle = if (_quadrant in [1,4]) then {
						abs(atan((_AY-_BY)/(_AX-_BX)));
					} else {
						abs(atan((_AX-_BX)/(_AY-_BY)));
					};
					_relativeAngle = - ((getDir _vehicle) - _absoluteAngle) + _quadrantFactor;

					//TRANSLATE THE ABOVE TO UI VALUES
					_scaleX = (SR5RWR_display_width / 2) * (_vehicle distance _threat) / ((getNumber (configFile >> "cfgVehicles" >> typeOf _threat >> "rangerwrold")) + 0);
					_scaleY = (SR5RWR_display_height / 2) * (_vehicle distance _threat) / (getNumber (configFile >> "cfgVehicles" >> typeOf _threat >> "rangerwrold"));
					_RWRposX = _midX + (cos _relativeAngle * _scaleX);
					_RWRposY = _midY + (sin _relativeAngle * _scaleY);
				
					//DISPLAY THREAT ON RWR UI
					
					//NEW THREAT
					if !(_threat in _lastScan) then {
						_lastScan set [count _lastScan, _threat];
						//SOUND
						switch (_type) do {
							case 0: {
								//playSound "ACE_SR5RWR_GROUND";
								playSound ["ACE_SR5RWR_GROUND",true];
							};
							case 1: {
								//playSound "ACE_SR5RWR_AIR";
								playSound ["ACE_SR5RWR_AIR",true];
							};
						};
						switch (_type) do {
							case 0: {
								//BASIC GROUND THREAT ICON (SQUARE)
								CTRL(THREATS_GROUND + _y) ctrlSetPosition [_RWRposX - 0.005, _RWRposY + 0.00125, 0.025,0.032];
								CTRL(THREATS_GROUND + _y) CtrlSetText "rwr_15_stn\data\threat_square.paa";
								//SET ICON POSITION
								CTRL(THREATS_BASE + _y) ctrlSetPosition [_RWRposX, _RWRposY + 0.005, 0.015, 0.022];
								_image = getText(configFile >> "CfgVehicles" >> typeOf _threat >> "threat_rwr_img");
								CTRL(THREATS_BASE + _y) CtrlSetText _image;
								//ADD NEW GROUND SYMBOLS HERE IF ANY
								CTRL(THREATS_BASE + _y) ctrlCommit 0;
								CTRL(THREATS_GROUND + _y) ctrlCommit 0;
							};
							case 1: {
								//BASIC AIR THREAT ICON (TRIANGLE)
								CTRL(THREATS_AIR + _y) ctrlSetPosition [_RWRposX-0.005, _RWRposY - 0.006, 0.025, 0.032];
								CTRL(THREATS_AIR + _y) CtrlSetText "rwr_15_stn\data\threat_air.paa";
								//SET ICON POSITION
								CTRL(THREATS_BASE + _y) ctrlSetPosition [_RWRposX,_RWRposY+0.005,0.015,0.022];
								
								_image = getText(configFile >> "CfgVehicles" >> typeOf _threat >> "threat_rwr_img");
								CTRL(THREATS_BASE + _y) CtrlSetText _image;
								//ADD NEW AIR SYMBOLS HERE IF ANY
								CTRL(THREATS_BASE + _y) ctrlCommit 0;
								CTRL(THREATS_AIR + _y) ctrlCommit 0;
							};
						};
						sleep _scanInterval;
					} else {
					_lastScan2 set [count _lastScan2, _threat];
						//OLD THREATS
						_Age = (_threatsAge select _y) + 1;
						_threatsAge set [_y,_Age];
						//REMOVE NEW THREAT NOTIFICATION
							CTRL(THREATS_BASE + _y) ctrlSetPosition [_RWRposX,_RWRposY+0.005,0.015,0.022];
							CTRL(THREATS_BASE + _y) ctrlCommit 0;
							CTRL(THREATS_GROUND + _y) ctrlSetPosition [_RWRposX-0.005,_RWRposY+0.00125,0.025,0.032];
							CTRL(THREATS_GROUND + _y) ctrlCommit 0;
							CTRL(THREATS_AIR + _y) ctrlSetPosition [_RWRposX-0.005,_RWRposY-0.006,0.025,0.032];
							CTRL(THREATS_AIR + _y) ctrlCommit 0;
							CTRL(THREATS_LAUNCH + _y) ctrlSetPosition [_RWRposX-0.005,_RWRposY-0.006,0.025,0.032];
						sleep _scanInterval;
					};
				} else {
					//THREAT IS ACTIVE BUT OUT OF RANGE
					// if (_threat in _threats) then { _threats = _threats - [_threat] };
					if (_threat in _lastScan) then {_lastScan = _lastScan - [_threat] };
					if (_threat == rwr_fireSource) then { rwr_fireSource = objNull };
					_threatsAge set [_y,0];
					if (_RWRopen && {count (_threats - _invisibleThreats) <= 0}) then { 135737 cutRsc ["Default","PLAIN"]; _RWRopen = false; };
					CTRL(THREATS_BASE + _y) CtrlSetText "";
					CTRL(THREATS_BASE + _y) ctrlCommit 0;
					CTRL(THREATS_GROUND + _y) CtrlSetText "";
					CTRL(THREATS_GROUND + _y) ctrlCommit 0;
					CTRL(THREATS_AIR + _y) CtrlSetText "";
					CTRL(THREATS_AIR + _y) ctrlCommit 0;
				}; //END IF (_vehicle distance _threat > (getNumber (configFile >> "cfgVehicles" >> typeOf _threat >> "rangerwrnew")))
			}; //END for (threats)
		} else {
			//NO THREATS
			//_threats = [];
			_lastScan = [];
			_lastScan2 = [];
			135737 cutRsc ["Default","PLAIN"]; _RWRopen = false;
			_vehicle setVariable ["LaunchWarning",false];
			rwr_fireSource = objNull;
		}; //END if (count _threats > 0)
	} else {
		//NO THREATS
		//_threats = [];
		_lastScan = [];
		_lastScan2 = [];
		135737 cutRsc ["Default","PLAIN"]; _RWRopen = false;
		_vehicle setVariable ["LaunchWarning",false];
		rwr_fireSource = objNull;
	}; //END if (count _nearStuff > 0)
	sleep _scanInterval;
	//CLEANING
	_rmthreats = [];
	for "_y" from 0 to (count _threats - 1) do {
		_threat = _threats select _y;
		if (_threat distance _vehicle > (getNumber (configFile >> "cfgVehicles" >> typeOf _threat >> "rangerwrnew"))) then {
			_rmthreats set [count _rmthreats, _threat];
			_threatsAge set [_y, 0];
		};
	};
	if (count _rmthreats > 0) then {
		_threats = _threats - _rmthreats;
		_lastScan = _lastScan - _rmthreats;
		_lastScan2 = _lastScan2 - _rmthreats;
		_threats = _threats - [objNull];
		_lastScan = _lastScan - [objNull];
		_lastScan2 = _lastScan2 - [objNull];
	};
}; //END While Main Loop

135737 cutRsc ["Default","PLAIN"];
_vehicle setVariable ["LaunchWarning", false];
_vehicle removeEventHandler ["IncomingMissile", _incomingeh];