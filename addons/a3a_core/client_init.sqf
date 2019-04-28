// Project: ArmA 3 Atrium Framework
// Author: Blender
// E-mail: blender@arma3.ru
// Specially for ARMA3.RU Community: http://www.arma3.ru

if (is3DEN) exitwith {};
// Variable for platform modules
a3a_var_cli_preInit = false;
a3a_var_cli_postInit = false;
if (isnil 'pzn_saving_fixed_path') then {pzn_saving_fixed_path = ''};

waitUntil { player == player };

[] call compile preprocessFileLineNumbers "\A3A_Core\SCRIPTS\setMissionParams.sqf";

// PreBriefing external addons
if (a3a_param_externalAddons == 1) then {
	_configClass = configFile >> "A3A_PreBriefing_EventHandlers";
	if (isClass _configClass) then	{
		_a3ru_count = count _configClass;
		if (_a3ru_count > 0) then {
			for "_i" from 0 to (_a3ru_count - 1) do {
				_configEntry = _configClass select _i;
				_clientInit = _configEntry / "clientInit";
				if (isText _clientInit) then {
					call compile(getText _clientInit);
				};
			};
		};
	};
};

"a3a_var_broadCast" addPublicVariableEventHandler { (_this select 1) call a3a_fnc_getMessage };
"a3a_var_endMission" addPublicVariableEventHandler {
	_this = _this select 1;
	if (typeName _this == "STRING") then {
		["end5",true,true] spawn BIS_fnc_endMission
	} else {
		params ["_message",["_winner",civilian]];
		if (side player == _winner) then {
			["end5",true,true] spawn BIS_fnc_endMission
		} else {
			["end5",false,true] spawn BIS_fnc_endMission
		};
	};
};

"a3a_var_endMissionOnModule" addPublicVariableEventHandler { (_this select 1) spawn A3A_fnc_Modules_EM_Visual };

enableRadio false;
enableSentences false;
enableEngineArtillery false;

waitUntil { (!(isNil "a3a_var_started") && (missionNameSpace getVariable ["a3a_var_srv_randomized", false])) || !(alive player)}; // Wait for init

/// TELEPORT PLAYER ON RANDOMIZED MODULE
[] call A3A_fnc_TeleportPlayer;

[] execVM "\A3A_Core\SCRIPTS\a3a_briefing.sqf";

a3a_var_cli_postInit = true;

waitUntil { time > 0 && (!isNull (findDisplay 46)) };

// Set view distance
setViewDistance ("VIEWDISTANCE" call A3A_fnc_Modules_GetSettings);

if !(alive player) exitWith {};

[] spawn a3a_fnc_cli_spawnZoneRestriction;

// Slot reservation check
if (!isNull player && (a3a_param_slotReservation == 0)) then {
	[] execVM "\A3A_Core\SCRIPTS\cli_slotReservation.sqf";
};


a3a_UI_array = [];
//a3a_UI_DEH = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call a3a_fnc_onKeyDown"];
//(findDisplay 46) displayAddEventHandler ["KeyUp", "_this call a3a_fnc_onKeyUp"];

[] spawn a3a_fnc_ratingControl;
[] spawn a3a_fnc_vehicleFreeze;

/// Name: Save player name
/// Type: Logic
/// Description: Stores player's name to a global public variable
/// Parameters: None
player setVariable ["PlayerName", [name player, 1], true];

//Фикс для "неизвестно" вместо имен
player call ace_common_fnc_setName;

/// Name: Save player side
/// Type: Logic
/// Description: Stores player's object side to a global variable
/// Parameters: None
_playerSide = player getVariable ["A3A_PlayerSide", nil];
if (isNil "_playerSide") then { player setVariable ["A3A_PlayerSide", playerSide, true] };

/// Name: Introduction
/// Type: Logic
/// Description: Shows introduction on prepare time when player joins & intro parameter is set in mission config
/// Parameters: (Integer) _sg
_uavIntro = "UAVINTRO" call A3A_fnc_Modules_GetSettings;
if ((_uavIntro == 1) && !(a3a_var_started) && !isServer) then {
	[getPos player, "ARMA3.RU UAV Intel // " + (getText (missionConfigFile >> "onLoadName")), 110, 150, 0, 0, [["\a3\ui_f\data\map\markers\nato\b_inf.paa", [0.1, 0.5, 1, 0.78], getPos player, 1, 1, 0, name player, 0]] ] call BIS_fnc_establishingShot;
};

/// Name: Prepare time countdown
/// Type: Logic
/// Description: Stores player's object side to a global variable
/// Parameters: None

"a3ru_zoneCap" addPublicVariableEventHandler { (_this select 1) spawn a3a_fnc_pb_visual };
"a3a_event_zoneCap" addPublicVariableEventHandler { [] spawn a3a_fnc_Module_ZoneCaptureVisual }; // Module zone cap event

/// Name: Init equipment
/// Type: Function
/// Description: Main equipment initialization
/// Parameters: None
//[] spawn { call compile preprocessFileLineNumbers "\A3A_Core\SCRIPTS\init_equipment.sqf" };

/// Name: Engine artillery
/// Type: Logic
/// Description: Enable artillery engine for mortars after start
/// Parameters: None
// [] spawn { waitUntil { sleep 3.137; a3a_var_started }; enableEngineArtillery true }; 
// захотят - сами включат. Bn_.

[] spawn { call compile preprocessFileLineNumbers "\A3A_Core\SCRIPTS\cli_actions.sqf" };

[] spawn { call compile preprocessFileLineNumbers format ["%1a3a_client_scripts.sqf",pzn_saving_fixed_path] };



[a3a_param_preTime] call tu_platform_fnc_freezeTime;

waitUntil { sleep 0.1; a3a_var_started };

// PostBriefing external addons
if (a3a_param_externalAddons == 1) then {
	_configClass = configFile >> "A3A_PostBriefing_EventHandlers";
	if (isClass _configClass) then	{
		_a3ru_count = count _configClass;
		if (_a3ru_count > 0) then {
			for "_i" from 0 to (_a3ru_count - 1) do {
				_configEntry = _configClass select _i;
				_clientInit = _configEntry / "clientInit";
				if (isText _clientInit) then {
					call compile(getText _clientInit);
				};
			};
		};
	};
};