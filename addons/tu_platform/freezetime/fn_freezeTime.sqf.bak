#include "../addon.hpp"
params ["_duration"];

if(!isNil QGVAR(freezeTime) && { !GVAR(freezeTime) }) exitWith {}; //Если фризтайм уже завершен - выходим
if(!isNil QGVAR(freezeTimeMutex)) exitWith {};
GVAR(freezeTimeMutex) = true;

GVAR(leaders_array) = [];
{
	private _current_side = _x;
	{
		if (side _x == _current_side) exitWith {
			GVAR(leaders_array) pushBack _x;
			_x setVariable [QGVAR(side_leader),_current_side];
		};
	} forEach playableUnits;
} forEach [west, east, resistance];

if (isNil QGVAR(freezetime_side_ready_array)) then {
	GVAR(freezetime_side_ready_array) = [];
};


//Prepare server
GVAR(freezetime_adjust) = [QGVAR(freezetime_adjust),{
	params ["_delta"];		
	GVAR(freezeTimeDuration) = GVAR(freezeTimeDuration)+_delta;
}] call CBA_fnc_addEventHandler;

if(isServer) then {

	GVAR(toggleReady) = [QGVAR(toggleReady), {
		params ["_caller"];
		if (GVAR(freezeTime)) then {
			if (_caller in GVAR(leaders_array)) then {
				private _reporting_side = side _caller;

				if (_reporting_side in GVAR(freezetime_side_ready_array)) then {
					GVAR(freezetime_side_ready_array) deleteAt (GVAR(freezetime_side_ready_array) find _reporting_side);
					[QGVAR(localNotification), ["TaskAssigned", "STR_TU_Side_Not_Ready" , _reporting_side, name _caller ]]  call CBA_fnc_globalEvent;
				} else {
					GVAR(freezetime_side_ready_array) pushBack _reporting_side;
					[QGVAR(localNotification), ["TaskSucceeded", "STR_TU_Side_Ready" , _reporting_side, name _caller]] call CBA_fnc_globalEvent;
				};
			};
		
			publicVariable QGVAR(freezetime_side_ready_array);

			if (count GVAR(leaders_array) == count GVAR(freezetime_side_ready_array)) then {
				GVAR(freezeTimeElapsed) = GVAR(freezeTimeDuration);
			};
		};
		
	}] call CBA_fnc_addEventHandler;

	GVAR(freezetime_over) = [QGVAR(freezetime_over), {
		params ["_caller"];
		[QGVAR(localNotification), ["TaskSucceeded", "STR_TU_Freezetime_Ended_By_Admin" , west, name _caller ]] call CBA_fnc_globalEvent;
		GVAR(freezeTimeElapsed) = GVAR(freezeTimeDuration);	
	}] call CBA_fnc_addEventHandler;

	[QGVAR(freezetime_started)] call CBA_fnc_globalEvent;
};


//Prepare client
private _layer = nil;

if(hasInterface) then {
	[localize "STR_TU_End_Briefing", 0, 
		{
			[QGVAR(toggleReady), player] call CBA_fnc_serverEvent;
		}, 
	{(player in GVAR(leaders_array)) && GVAR(freezeTime) && !(side player in GVAR(freezetime_side_ready_array)) }
	] call FUNC(menu_addItem);

	[localize "STR_TU_Continue_Briefing", 0, 
		{
			[QGVAR(toggleReady), player] call CBA_fnc_serverEvent;
		}, 
	{(player in GVAR(leaders_array)) && GVAR(freezeTime) && (side player in GVAR(freezetime_side_ready_array)) }
	] call FUNC(menu_addItem);

	[localize "STR_TU_End_Briefing_Admin", 0, 
		{
			[QGVAR(freezetime_over), player] call CBA_fnc_serverEvent;
		}, 
		{((serverCommandAvailable "#kick")||isServer) && GVAR(freezeTime)}
	] call FUNC(menu_addItem);

	[localize "STR_TU_Briefing_AddMin", 0, 
		{
			[QGVAR(freezetime_adjust), 60] call CBA_fnc_globalEvent;
		}, 
		{((serverCommandAvailable "#kick")||isServer) && GVAR(freezeTime)}
	] call FUNC(menu_addItem);

	[localize "STR_TU_Briefing_SubMin", 0, 
		{
			[QGVAR(freezetime_adjust), -60] call CBA_fnc_globalEvent;
		}, 
		{((serverCommandAvailable "#kick")||isServer) && GVAR(freezeTime)}
	] call FUNC(menu_addItem);

	GVAR(localNotification) = [QGVAR(localNotification), {
		params ["_notification", "_template", "_side", "_player"];
		private _sideTitles = [localize "STR_TU_BLUEFOR",localize "STR_TU_OPFOR", localize "STR_TU_GUER"];
		private _reporting_side_title = _sideTitles select ( [west, east, resistance] find _side);
		[_notification,[0, format [localize _template, _reporting_side_title, _player]]] call bis_fnc_showNotification;
	}] call CBA_fnc_addEventHandler;


	GVAR(freezetime_firedEH) = player addEventHandler ["firedMan", {deleteVehicle (_this select 6)}]; // Спасибо товарищам бисам за удобный ивентхендлер	

	_layer = QGVAR(freeze_timer) call BIS_fnc_rscLayer;
	_layer cutRsc [QGVAR(freeze_timer), "PLAIN", 2];
};


//Timer
[_duration,{
	if(hasInterface) then {
		params ["_elapsed", "_duration"];
		disableSerialization;

		private _display = uiNamespace getVariable [QGVAR(timer_display), displayNull];
		if(! isNull _display) then {
			private _timeText = _display displayCtrl 412001;
			_timeText ctrlSetText ([_duration - _elapsed, "MM:SS"] call BIS_fnc_secondsToString);
		}
	};

}] call FUNC(freezeTimer);

//Cleanup server
if(isServer) then {	
	[QGVAR(toggleReady),GVAR(toggleReady)] call CBA_fnc_removeEventHandler;
	GVAR(toggleReady) = nil;

	[QGVAR(freezetime_over),GVAR(freezetime_over)] call CBA_fnc_removeEventHandler;
	GVAR(freezetime_over) = nil;

	GVAR(freezetime_side_ready_array) = nil;

	if (isNil "a3a_var_dontRemoveAI" && !GVAR(doNotRemoveBots)) then {
		{
			private _slotName = _x getVariable "PlayerName";
			if (!(isPlayer _x) && {(_x getVariable ["SerP_isPlayer",false]) || isNil "_slotName" }) then {
				// diag_log format ['tu_platform deleteing: %1, have data: %2 %3',_x,_slotName,(_x getVariable ["SerP_isPlayer",false])];
				deleteVehicle _x;
			};
		} forEach playableUnits;
	};


	if (!isNil "a3a_var_started" ) then {
		a3a_var_started = true;
		a3a_var_srv_startTime = diag_tickTime;
		publicVariable "a3a_var_started";
	};
	if (!isNil "SerP_warbegins") then {
		SerP_warbegins = 1;
		publicVariable "SerP_warbegins";
		SerP_warbeginsTime=time;
		publicVariable "SerP_warbeginsTime";
	};

	GVAR(freezetime_ended) = true;
	publicVariable QGVAR(freezetime_ended);
	
	[QGVAR(freezetime_ended)] call CBA_fnc_globalEvent;
};

//Cleanup client
[QGVAR(freezetime_adjust), GVAR(freezetime_adjust)]  call CBA_fnc_removeEventHandler;

if(hasInterface) then {
	(localize "STR_TU_End_Briefing_Admin") call FUNC(menu_removeItem);
	(localize "STR_TU_Continue_Briefing") call FUNC(menu_removeItem);
	(localize "STR_TU_End_Briefing") call FUNC(menu_removeItem);
	(localize "STR_TU_Briefing_AddMin") call FUNC(menu_removeItem);
	(localize "STR_TU_Briefing_SubMin") call FUNC(menu_removeItem);
	
	[QGVAR(localNotification), GVAR(localNotification)]  call CBA_fnc_removeEventHandler;
	GVAR(localNotification) = nil;

	player removeEventHandler ["firedMan", GVAR(freezetime_firedEH)];
	GVAR(freezetime_firedEH) = nil;

	if(!isNil "_layer") then {
		private _display = uiNamespace getVariable [QGVAR(timer_display), displayNull];
		private _timeText = _display displayCtrl 412001;
		_timeText ctrlSetText (localize "STR_TU_Game_Start");

		playSound QGVAR(game_started);
		waitUntil { sleep 1; !GVAR(freezeTime) };	
		_layer cutText ["", "PLAIN"];
	};
};

GVAR(leaders_array) = nil;
GVAR(freezeTimeMutex) = nil;