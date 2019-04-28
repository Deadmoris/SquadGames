// Variable for platform modules
if (is3DEN) exitwith {};
a3a_var_srv_postInit = false;
a3a_var_missionFinished = false;
a3a_var_srv_startNow = false;
a3a_var_started = false;
a3a_var_srv_startTime = diag_tickTime;
if (isnil 'pzn_saving_fixed_path') then {pzn_saving_fixed_path = ''};
publicVariable "a3a_var_started";

call compile preprocessFileLineNumbers "\A3A_Core\SCRIPTS\setMissionParams.sqf";
//_script = [] execVM "\A3A_Core\SCRIPTS\setMissionParams.sqf";
//waitUntil { scriptDone _script };

// PreBriefing external addons
if (a3a_param_externalAddons == 1) then {
	_configClass = configFile >> "A3A_PreBriefing_EventHandlers";
	if (isClass _configClass) then	{
		_a3ru_count = count _configClass;
		if (_a3ru_count > 0) then {
			for "_i" from 0 to (_a3ru_count - 1) do {
				_configEntry = _configClass select _i;
				_serverInit = _configEntry / "serverInit";
				if (isText _serverInit) then {
					call compile(getText _serverInit);
				};
			};
		};
	};
};

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



"a3a_var_srv_counter_setVote" addPublicVariableEventHandler { (_this select 1) spawn a3a_fnc_srv_counter_setVote };


/* if (a3a_param_slotReservation == 0) then {
	[] execVM "\A3A_Core\SCRIPTS\srv_slotReservation.sqf"
}; */

[] spawn { call compile preprocessFileLineNumbers format ["%1a3a_server_scripts.sqf",pzn_saving_fixed_path] };

waitUntil { time > 0 };

// PostBriefing external addons
if (a3a_param_externalAddons == 1) then {
	_configClass = configFile >> "A3A_PostBriefing_EventHandlers";
	if (isClass _configClass) then	{
		_a3ru_count = count _configClass;
		if (_a3ru_count > 0) then {
			for "_i" from 0 to (_a3ru_count - 1) do {
				_configEntry = _configClass select _i;
				_serverInit = _configEntry / "serverInit";
				if (isText _serverInit) then {
					call compile(getText _serverInit);
				};
			};
		};
	};
};

a3a_var_srv_postInit = true;

/// START COUNTDOWN & WAIT UNTIL STARTED
[a3a_param_preTime] call tu_platform_fnc_freezeTime;