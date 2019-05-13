#include "addon.hpp"
#define KEY_F1 0x3B
#define KEY_F2 0x3C
#define KEY_F3 0x3D
#define KEY_F4 0x3E
#define KEY_F5 0x3F
#define KEY_F6 0x40
#define KEY_MENU 0xDD

if (hasInterface) then
{

    // Update information about admin
	if(isMultiplayer) then {
		[] spawn {
			while{true} do {
				if((serverCommandAvailable "#kick" || isServer)) then {
					if( isNil QGVAR(GlobalAdmin) || { GVAR(GlobalAdmin) select 0 != player } ) then {
						GVAR(GlobalAdmin) = [player, name player];
						publicVariable QGVAR(GlobalAdmin);
					};
				};
				sleep 15;
			};
		};
	};

	//назначим клавиши
	["Tushino platform",QGVAR(menu_key), localize "STR_TU_ShowMenu", FUNC(menu_show), {}, [221, [false, false, false]]] call CBA_fnc_addKeybind;

	["Tushino platform",QGVAR(decViewDistance_key),  localize "STR_TU_ViewDistanceDown", {[-500] call FUNC(viewDistance_change)}, {}, [KEY_F1, [false, false, false]]] call CBA_fnc_addKeybind;
	
	["Tushino platform",QGVAR(incViewDistance_key),  localize "STR_TU_ViewDistanceUp", {[500] call FUNC(viewDistance_change)}, {}, [KEY_F2, [false, false, false]]] call CBA_fnc_addKeybind;
	
	//["Tushino platform","kbn_muteViewDistance_key", localize "STR_TU_ViewDistanceHalf", {call fnc_kbn_muteViewDistance}, {}, [KEY_F1, [false, true, false]]] call CBA_fnc_addKeybind;

	["Tushino platform",QGVAR(decSoundVolume_key), localize "STR_TU_SoundVolumeDown", {[-1] call FUNC(changeSoundVolume)}, {}, [KEY_F3, [false, false, false]]] call CBA_fnc_addKeybind;

	["Tushino platform",QGVAR(incSoundVolume_key), localize "STR_TU_SoundVolumeUp", {[1] call FUNC(changeSoundVolume)}, {}, [KEY_F4, [false, false, false]]] call CBA_fnc_addKeybind;

	["Tushino platform",QGVAR(muteSoundVolume_key), localize "STR_TU_SoundVolumeHalf", {call FUNC(muteSoundVolume)}, {}, [KEY_F3, [false, true, false]]] call CBA_fnc_addKeybind;
	
	// Добавление в меню - связь с админом
	[
		localize 'STR_TU_Feedback',
		[],
		{ createDialog QGVAR(FeedbackDialog) },
		{isMultiplayer && !(serverCommandAvailable "#kick" || isServer)}
	] call FUNC(menu_addItem);	

	// Добавление в меню - сообщшение игрокам
	[
		localize 'STR_TU_Broadcast',
		[],
		{ createDialog QGVAR(BroadcastDialog) },
		{isMultiplayer && (serverCommandAvailable "#kick" || isServer)}
	] call FUNC(menu_addItem);	

	// Добавление в меню действий администратора: пауза миссии
	[
		localize 'STR_TU_Unpause',
		[false, name player],
		{ _this remoteExec [QFUNC(pause), 2] },
		{isMultiplayer && (serverCommandAvailable "#kick" || isServer) && GVAR(pauseMission)}
	] call FUNC(menu_addItem);
	
	// Добавление в меню действий администратора: пауза миссии
	[
		localize 'STR_TU_Pause',
		[true, name player],
		{ _this remoteExec [QFUNC(pause), 2] },
		{isMultiplayer && (serverCommandAvailable "#kick" || isServer) && !GVAR(pauseMission)}
	] call FUNC(menu_addItem);


	[player] call ace_common_fnc_setName;

	[] spawn {
		waitUntil{sleep 0.3; !isNull (findDisplay 12)};
		[(findDisplay 12) displayCtrl 102] call FUNC(checkMapCompasPosition);
	};
};

{
	_x call FUNC(disableAi);
} forEach playableUnits;

//Хардфриз
if(isDedicated && (GVAR(defaultHardfreeze) > 0)) then {
	[GVAR(defaultHardfreeze)] spawn {
		params ["_t"];
		false call FUNC(hardfreeze);

		if (count playableUnits > 120) then {_t = _t * 2};
		sleep _t;
		
		if (diag_fps < 25) then {
			["TaskAssigned",[0, ("Hard freeze on low FPS: " + str round diag_fps)]] remoteExec ["bis_fnc_showNotification",-2];
			sleep (_t * 3);
			waituntil {sleep 1; (diag_fps > 25) || (time > _t*5)};
		};
		["TaskSucceeded",[0, ("Server FPS: " + str round diag_fps)]] remoteExec ["bis_fnc_showNotification",-2];
		true call FUNC(hardfreeze);
	};
};


