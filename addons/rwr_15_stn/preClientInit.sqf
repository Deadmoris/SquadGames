rwr_15_stn_fnc_getIn = compile preprocessFileLineNumbers "\rwr_15_stn\fnc_getin.sqf";
rwr_15_stn_fnc_rwr = compile preprocessFileLineNumbers "\rwr_15_stn\fnc_rwr.sqf";
rwr_15_stn_fnc_rwr_us = compile preprocessFileLineNumbers "\rwr_15_stn\fnc_rwr_us.sqf";
rwr_15_stn_fnc_interaction = compile preprocessFileLineNumbers "\rwr_15_stn\fnc_rwr_interaction.sqf";
rhs_fnc2_rwr_spo15 = compile preprocessFileLineNumbers "\rwr_15_stn\rhs_rwr2_spo15.sqf";
rhs_fnc2_rwr_spo15_eh = compile preprocessFileLineNumbers "\rwr_15_stn\rhs_rwr2_spo15_eh.sqf";

_enum_specification = [
	["Справа снизу", 0],
	["Справа сверху", 1],
	["Слева сверху", 2],
	["Слева снизу", 3]
];
private _cbaListValues = _enum_specification apply { _x select 1 };
private _cbaListNames = _enum_specification apply { _x select 0 };

// rwr_us_pos = 3;
// ["rwr_us_pos", "СПО", "Слева снизу", "СПО", enum_specification] call d_uac_fnc_registerEnumVariable;

["rwr_us_pos", "LIST", "Расположение СПО на экране", "Система предупреждения об облучении", [_cbaListValues, _cbaListNames, 3], false] call CBA_Settings_fnc_init;
