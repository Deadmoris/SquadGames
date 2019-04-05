/**
* Обёртка вокруг BIS_fnc_dynamicText, сохраняющая текст в "дневник" игрока/админа.
*/
params ["_text","_sender"];

if (!isDedicated) then {
	[format [ "<t size='1.1' color='#ee9000' shadow=2>%1: %2</t>", _sender, _text], 0, 0.75*safeZoneH+safeZoneY, 12, 0, 0, 32] call BIS_fnc_dynamicText;

	if !(player diarySubjectExists "tu_platform_player_messages") then {
		player createDiarySubject ["tu_platform_player_messages", localize "STR_TU_Messages_Diary_Subject"];	
	};
	private _time = format ["%1:%2", date select 3, (if (date select 4 < 10) then { "0" } else { "" }) + str (date select 4)];
	player createDiaryRecord ["tu_platform_player_messages",[localize "STR_TU_Messages_Diary_Subject",format["%1 - %2: %3", _time, _sender, _text]]];

} else {
	// сообщения игроков транслируются только админу
	// на выделенный сервер попадает только сообщение от админа, его-то мы и запишем в реплей
	if (isnil 'headlessclient') then {
		tu_log_mission_message pushBack (format ["ИА %1: %2",_sender,_text]);
	} else {
		(format ["ИА %1: %2",_sender,_text]) call tu_decoration_fnc_message;
	};
};


