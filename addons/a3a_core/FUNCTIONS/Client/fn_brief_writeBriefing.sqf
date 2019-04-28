private ["_BFSide", "_OFSide", "_ver"];

if ((getNumber (missionConfigFile >> 'atrium_version')) >= 15) then {
player createDiaryRecord ["diary", [localize "STR_A3RU_Conventions", loadFile format ["%1A3A_BRIEFING\briefing_MISSION_CONV.html",pzn_saving_fixed_path]]];
};
_BFSide = "BFSIDE" call A3A_fnc_Modules_GetSettings;
_OFSide = "OFSIDE" call A3A_fnc_Modules_GetSettings;
switch (side player) do {
	case _BFSide: {
		player createDiaryRecord ["diary", [localize "STR_A3RU_Enemy", loadFile format ["%1A3A_BRIEFING\briefing_BLUEFOR_ENEMY.html",pzn_saving_fixed_path]]];
		player createDiaryRecord ["diary", [localize "STR_A3RU_Tasks", loadFile format ["%1A3A_BRIEFING\briefing_BLUEFOR_TASKS.html",pzn_saving_fixed_path]]];
		if ((localize "STR_convent") !="") then {
		player createDiaryRecord ["diary", [localize "STR_atrium_conven", localize "STR_convent"]];
		};
	};
	case _OFSide: {
		player createDiaryRecord ["diary", [localize "STR_A3RU_Enemy", loadFile format ["%1A3A_BRIEFING\briefing_OPFOR_ENEMY.html",pzn_saving_fixed_path]]];
		player createDiaryRecord ["diary", [localize "STR_A3RU_Tasks", loadFile format ["%1A3A_BRIEFING\briefing_OPFOR_TASKS.html",pzn_saving_fixed_path]]];
		if ((localize "STR_convent") !="") then {
		player createDiaryRecord ["diary", [localize "STR_atrium_conven", localize "STR_convent"]];
		};
	};
};

_core_ver = getText (ConfigFile >> "CfgPatches" >> "A3A_Core" >> "versionStr");
_mods_ver = getText (ConfigFile >> "CfgPatches" >> "A3A_Modules" >> "versionStr");
_miss_ver = getNumber (MissionConfigFile >> "atrium_version");
player createDiaryRecord ["diary", [localize "STR_A3RU_Intel",
	format [localize "STR_A3A_BriefVersion",
		loadFile format ["%1A3A_BRIEFING\briefing_MISSION_DESCRIPTION.html",pzn_saving_fixed_path],
		_core_ver,
		_mods_ver,
		_miss_ver		
	]
]];