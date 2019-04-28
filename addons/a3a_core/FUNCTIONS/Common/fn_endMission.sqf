// a3a_fnc_endMission
// a3a_fnc_endMission - ends current mission
// Syntax: [message, win side] or [message]
// Usage: [MESSAGE, EAST] call a3a_fnc_endMission;
// Example: ["All Iranian Troops were killed", WEST] call a3a_fnc_endMission;

_this spawn {
	params ["_message",["_winner",civilian]];
	if (isNil "a3a_var_missionFinished") then { a3a_var_missionFinished = false };
	if (a3a_var_missionFinished) exitWith {};
	a3a_var_missionFinished = true;
	if (typeName _this == "STRING") then { // Old Atrium version End Mission fix
		_this = [_this, civilian];
	};
	[_message, 2] call a3a_fnc_message;
	if (isServer) then { Replay_var_srv_running = false; [] call ocap_fnc_exportData; }; // REPLAY SYSTEM FINISH
	sleep 3;
	a3a_var_endMission = _this;
	publicVariable "a3a_var_endMission";
	
	if (!isDedicated) then {
		["end5",(side (group player)) == _winner,true] call BIS_fnc_endMission;
	} else {
		if (isnil 'headlessclient') then {
			tu_log_mission_message pushback _message;
			tu_log_mission_message pushback (format ["Winner: %1",str _winner]);
		} else {
			_message call tu_decoration_fnc_message;
			(format ["Winner: %1",str _winner]) call tu_decoration_fnc_message;
		};
		["end5",true,true] call BIS_fnc_endMission;
		tu_log_endMission = true;
	};
};