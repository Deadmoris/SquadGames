private _keynames = ["headgear",
"uniform",
"vest",
"backpack",
"goggles",
"magazines",
"weapons",
"assignedItems",
"items",
"primaryWeaponItems",
"secondaryWeaponItems",
"handgunItems"];

private _titles = ["Головные уборы",
"Форма",
"Бронежилеты/разгрузки",
"Рюкзаки",
"Намордники",
"Магазины",
"Оружие",
"Предметы в специальных слотах",
"Прочие предметы",
"Обвес основного оружия",
"Обвес гранатомёта",
"Обвес пистолета"];

private _getValues = {
	[headgear _x,
	uniform _x,
	vest _x,
	backpack _x,
	goggles _x,
	magazines _x,
	weapons _x,
	assignedItems _x,
	items _x,
	primaryWeaponItems _x,
	secondaryWeaponItems _x,
	handgunItems _x]
};

// init hashmap to an array of pairs ["key",empty_hashset]
bn_test_suite_all_things = [_keynames apply {
	[_x,[] call CBA_fnc_hashCreate]
}] call CBA_fnc_hashCreate;

bn_test_suite_fnc_update_item = {
	params ["_sectionName","_key","_side"];
	private _section = [bn_test_suite_all_things, _sectionName] call CBA_fnc_hashGet;
	private _side_index = switch (_side) do {
		case east: {0};
		case west: {1};
		case resistance: {2};
		default {3}
	};
	if ([_section, _key] call CBA_fnc_hashHasKey) then {
		private _prev = [_section, _key] call CBA_fnc_hashGet;
		_prev set [_side_index, (_prev select _side_index) + 1];
		//[_section, _key, _prev+1] call CBA_fnc_hashSet;
	} else {
		private _new_array = [0,0,0,0];
		_new_array set [_side_index,1];
		[_section, _key, _new_array] call CBA_fnc_hashSet;
	};
};

bn_test_suite_values = allUnits apply _getValues;
bn_test_suite_anachronism_hash = [] call bn_test_suite_fnc_anachronism;
bn_anachronistic_items = [];


private _is_wrong_date = {
	params ["_classname"];
	private _years = [bn_test_suite_anachronism_hash, _classname] call CBA_fnc_hashGet;
	(date select 0 < _years select 0) || ((_years select 1 > 0) && (date select 0 > (_years select 1)))
};

{
	private _side = side _x;
	private _unit = _x;
	{
		{
			private _section = _keynames select _forEachIndex;
			private _thing = _x;
			if (typeName _x == "ARRAY") then {
				{
					if (_x != "") then {
						[_section, _x, _side] call bn_test_suite_fnc_update_item;
					};
				} forEach _thing;
			} else {
				if (_thing != "") then {
					[_section, _thing, _side] call bn_test_suite_fnc_update_item;
				};
			};
		} forEach _x;
	} forEach ([_x] apply _getValues);
} forEach allUnits;

bn_private_fnc_to_string = {
	private _strings_without_zeros = _value apply {if (_x == 0) then {" "} else {str _x}};
	bn_inventory_temp pushBack (format (['%1 <font color="#ff1111">%2</font> <font color="#99aaff">%3</font> <font color="#11ff11">%4</font> <font color="#ffffff">%5</font> <br />', _key] + _strings_without_zeros));
};

bn_find_anachronisms = {
	if (_key call _is_wrong_date) then {
		private _years = ([bn_test_suite_anachronism_hash, _key] call CBA_fnc_hashGet) apply {if (_x == 0) then {"..."} else {str _x}};
		bn_anachronistic_items pushBack [_key, _years];
	};
};

bn_find_duplicate_radios = {
	if ((_key select [0,3]=="tf_") && (_key != "tf_microdagr") && {{_x > 1} count _value > 0}) then {
		[objNull,"Дублируется рация " + _key + " (" + (str _value) + ")"] call bn_test_suite_fnc_report;
	};
};

bn_inventory_text = "ВООРУЖЕНИЕ И СНАРЯЖЕНИЕ<br />";
{
	bn_inventory_temp = [];
	private _key = _x;
	private _title = _titles select _forEachIndex;
	_things = [bn_test_suite_all_things, _key] call CBA_fnc_hashGet;
	
	bn_inventory_text = bn_inventory_text + '<font color = "#ffffaa">' + _title + "</font><br />";
	[_things, bn_private_fnc_to_string] call CBA_fnc_hashEachPair;
	[_things, bn_find_anachronisms] call CBA_fnc_hashEachPair;
	bn_inventory_temp sort true;
	{	
		bn_inventory_text = bn_inventory_text + _x;
	} forEach bn_inventory_temp;
	bn_inventory_text = bn_inventory_text + "<br />";
	
	if (_x == "assignedItems") then {
		[_things, bn_find_duplicate_radios] call CBA_fnc_hashEachPair;
	};
} forEach _keynames;

if (count bn_anachronistic_items > 0) then {
	bn_anachronism_text = format ["<br />НЕВЕРНЫЙ ВРЕМЕННОЙ ПЕРИОД (год миссии - %1):<br />",date select 0];
	
	{
		bn_anachronism_text = bn_anachronism_text + (format (["%1 (%2 - %3)<br />",_x select 0]+(_x select 1)));
	} forEach bn_anachronistic_items;
};