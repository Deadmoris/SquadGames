#include "..\addon.hpp"
params ["_pause", "_admin"];
[_this, {
	if(!isDedicated) then {
		params ["_pause", "_admin"];
		private _message = if(_pause) then { localize "STR_TU_Paused" } else { localize "STR_TU_Unpaused" };
		["TaskAssigned",[0, _message + " " + _admin]] call BIS_fnc_showNotification;
	};
}] remoteExec ["BIS_fnc_spawn"];

!_pause call FUNC(hardfreeze);

if(!isNil {tu_log_mission_message}) then {
	private _message = if(_pause) then { localize "STR_TU_Paused" } else { localize "STR_TU_Unpaused" };
	_message = _message + " " + _admin;
	if(!_pause) then {
		_message = _message + ", " + str(diag_tickTime - GVAR(pauseMissionTimeCurrent));
		
	};
	
	if (isnil 'headlessclient') then {
		tu_log_mission_message pushback (_message + " " + _admin);
	} else {
		(_message + " " + _admin) call tu_decoration_fnc_message;
	};
};
