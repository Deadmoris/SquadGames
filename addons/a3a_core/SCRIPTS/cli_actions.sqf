// Добавление в меню действий администратора: завершение миссии
[
	'Завершить миссию',
	str(format['Миссия завершена админом: %1', name player]),
	a3a_fnc_endMission,
	{(serverCommandAvailable "#kick" || isServer) && a3a_var_started}
] call tu_platform_fnc_menu_addItem;


_fireteamHUD = "FIRETEAMHUD" call A3A_fnc_Modules_GetSettings;
if (_fireteamHUD == 1) then {
	if (isClass (configFile >> "A3RU_PostInit_EventHandlers" >> "FireteamHUD")) then {
		a3ru_FTHUD_disabled = true;

		[
			localize 'STR_A3RU_FTHUDEnable',
			0,
			a3a_fnc_FTHUDShow,
			{a3ru_FTHUD_disabled && ("ItemTCubeMT" in (assignedItems player))}
		] call tu_platform_fnc_menu_addItem;
		
		[
			localize 'STR_A3RU_FTHUDDisable',
			1,
			a3a_fnc_FTHUDShow,
			{!a3ru_FTHUD_disabled}
		] call tu_platform_fnc_menu_addItem;
	};
};