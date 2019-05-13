if (isDedicated) exitWith {};
[] spawn {
	private _timeout_start = time + 15;
	waitUntil {sleep 1; !(isNil "ace_common_mapaltitude") || (time > _timeout_start)};
	if (isNil "ace_common_mapaltitude") exitWith {};
	private _pressure = floor ((getPosASL player select 2) call ace_weather_fnc_calculateBarometricPressure);
	private _temperature = floor ace_weather_currentTemperature;
	player createDiaryRecord ["Diary", ["Метеосводка",format["Температура воздуха: %1 С<br />Барометрическое давление (на стартовой позиции): %2 гПа",_temperature, _pressure]]];
};