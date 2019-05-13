//Example: [vehicles, "(alive _u)", "not alive!"] call bn_unit_test; 
bn_test_suite_excluded_pistols = ["rhs_weap_rsp30_red","rhs_weap_rsp30_green"];
bn_test_suite_dlc_dictionary = [[275700, "Zeus"], [249860, "Soundtrack"], [304400, "DLC Bundle"], [249861, "Maps"], [249862, "Tactical Guide"], [288520, "Karts"], [304380, "Helicopters"], [332350, "Marksmen"], [395180, "Apex"]];
bn_addonsDictionaryKeys = []; 
bn_addonsDictionaryValues = [];
bn_addonList = ["Mark","Heli","Kart"];
if (worldName != 'Tanoa') then {bn_addonList pushBack "Expansion"};

{
	_dlcname = _x; 
	_configs = "true" configClasses (configFile >> "CfgMods" >> _dlcname >> "Assets"); 
	_cArray = _configs apply {configName _x}; // спасибо товарищам бисам за новые ёмкие команды
	{
		_ref = (getArray (configFile >> "CfgMods" >> _dlcname >> "Assets" >> _x >> "reference")); 
		if (count _ref > 0) then {
			bn_addonsDictionaryKeys pushBack (_ref select 1);
			bn_addonsDictionaryValues pushBack _dlcname;
		}
	} forEach _cArray;
} forEach bn_addonList;

[vehicles, "!('FirstAidKit' in (itemCargo _u))", "ванильный медкит в багажнике."] call bn_test_suite_fnc_assert;
[playableUnits select {_x == leader (group _x)}, 'count (_u call TFAR_fnc_backpackLR) > 0', "командир отделения без ДВшки."] call bn_test_suite_fnc_assert;
[playableUnits, '{(_x call TFAR_fnc_isRadio) || (_x == "ItemRadio")} count ((items _u) + (assignedItems _u)) > 0', "нет рации"] call bn_test_suite_fnc_assert;
[vehicles, "private _nearby = (_u nearEntities ['CAManBase', 100]); (count _nearby < 1) || !(_u call TFAR_fnc_hasVehicleRadio) || {(_u getVariable ['TF_RadioType','']) == ([side _u, 0] call TFAR_fnc_getSideRadio)} || {(_u call TFAR_fnc_getVehicleSide) == (side ((_nearby) select 0))}", "встроенная рация не соответствует стороне ближайшего юнита."] call bn_test_suite_fnc_assert;

[playableUnits select {side _x == west},"((getNumber (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_hasLRradio')) == 0) || {(getText (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_encryptionCode')) == 'tf_west_radio_code';}", "ДВ не той стороны", "backpack _u"] call bn_test_suite_fnc_assert;
[playableUnits select {side _x == east},"((getNumber (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_hasLRradio')) == 0) || {(getText (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_encryptionCode')) == 'tf_east_radio_code';}", "ДВ не той стороны", "backpack _u"] call bn_test_suite_fnc_assert;
[playableUnits select {side _x == resistance},"((getNumber (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_hasLRradio')) == 0) || {(getText (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_encryptionCode')) == 'tf_guer_radio_code';}", "ДВ не той стороны", "backpack _u"] call bn_test_suite_fnc_assert;

[vehicles, "private _nearby = (_u nearEntities ['CAManBase', 100]); _backpacks = backpackCargo _u; (count _nearby < 1) || {{
		private _mismatch = false;
		if ((getNumber (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_hasLRradio')) != 0) then {
			_backpack_code = (getText (configFile >> 'cfgVehicles' >> (backpack _u) >> 'tf_encryptionCode'));
			{
				_x params ['_side','_code'];
				if (((side (_nearby select 0)) == _side) && (_backpack_code != _code)) exitWith {
					_mismatch = true;
				};
			} forEach [[west, 'tf_west_radio_code'],[east, 'tf_east_radio_code'],[resistance, 'tf_guer_radio_code']];
		};
		_mismatch
	} count _backpacks < 1}", "в багаже есть рация, не соответствующая стороне ближайшего юнита."] call bn_test_suite_fnc_assert;

[playableUnits, "(primaryWeapon _u) != ''", "Нет основного оружия"] call bn_test_suite_fnc_assert;
[playableUnits, "_appropriate_magazines = getArray (configFile >> 'cfgWeapons' >> (primaryWeapon _u) >> 'magazines'); (count _appropriate_magazines == 0) || (({_x in _appropriate_magazines} count (magazines _u)) > 1);","нет или мало боеприпасов к основному оружию", "primaryWeapon _u"] call bn_test_suite_fnc_assert; //
[playableUnits, "_appropriate_magazines = getArray (configFile >> 'cfgWeapons' >> (secondaryWeapon _u) >> 'magazines'); private _disposable = getNumber (configFile >> 'cfgWeapons' >> (secondaryWeapon _u) >> 'rhs_disposable'); (_disposable == 1) || (count _appropriate_magazines == 0) || (({_x in _appropriate_magazines} count (magazines _u)) > 0);","нет боеприпасов к гранатомёту", "secondaryWeapon _u"] call bn_test_suite_fnc_assert; //
[playableUnits, "_appropriate_magazines = getArray (configFile >> 'cfgWeapons' >> (handgunWeapon _u) >> 'magazines'); private _disposable = getNumber (configFile >> 'cfgWeapons' >> (handgunWeapon _u) >> 'rhs_disposable'); ((handgunWeapon _u) in bn_test_suite_excluded_pistols) || (_disposable == 1) || (count _appropriate_magazines == 0) || (({_x in _appropriate_magazines} count (magazines _u)) > 0);","нет боеприпасов к пистолету", "handgunWeapon _u"] call bn_test_suite_fnc_assert;
[playableUnits, "(uniform _u) != '';", "нет формы"] call bn_test_suite_fnc_assert;
[playableUnits, "(vest _u) != '';", "нет разгрузки/жилета"] call bn_test_suite_fnc_assert;
[vehicles select {_x isKindOf "Tank_F"}, "('ToolKit' in (itemCargo _u)) && ((count (backpackCargo _u)) >= 0);", "нет ремонтного набора и/или рюкзака для его переноски"] call bn_test_suite_fnc_assert;
[vehicles select {_x isKindOf "Tank_F"}, "'ACE_Track' in (_u getVariable 'ace_cargo_loaded');", "нет запасной гусеницы"] call bn_test_suite_fnc_assert;

[playableUnits, "{_x in ['ACE_fieldDressing','ACE_elasticBandage','ACE_packingBandage','ACE_tourniquet','ACE_quikclot','ACE_morphine']} count (items _u) > 3", "нет или мало медикаментов"] call bn_test_suite_fnc_assert;
[playableUnits select {[_x] call ace_medical_fnc_isMedic}, "{_x in ['ACE_fieldDressing','ACE_elasticBandage','ACE_packingBandage','ACE_tourniquet','ACE_quikclot','ACE_morphine']} count (items _u) > 30", "мало медикаментов у медика"] call bn_test_suite_fnc_assert;
[playableUnits select {[_x] call ace_medical_fnc_isMedic}, "{_x == 'ACE_surgicalKit'} count (items _u) > 0", "у медика нет хирургического набора"] call bn_test_suite_fnc_assert;

[playableUnits, "!(({(_x select 0) in ['rhs_rpg7_PG7VL_mag','rhs_rpg7_PG7VR_mag']} count (magazinesAmmoFull _u) > 0) && {'rhs_acc_pgo7v' in secondaryWeaponItems _u})", "Прицел rhs_acc_pgo7v не имеет сетки для выстрелов rhs_rpg7_PG7VL_mag / rhs_rpg7_PG7VR_mag"] call bn_test_suite_fnc_assert;
[playableUnits, "!(({(_x select 0) == 'rhs_rpg7_PG7VR_mag'} count (magazinesAmmoFull _u) > 0) && {('rhs_acc_pgo7v2' in secondaryWeaponItems _u) || ('rhs_acc_pgo7v' in secondaryWeaponItems _u)})", "Прицел rhs_acc_pgo7v / v2 не имеет сетки для выстрелов rhs_rpg7_PG7VR_mag"] call bn_test_suite_fnc_assert;
[playableUnits, "!(({(_x select 0) == 'rhs_rpg7_PG7V_mag'} count (magazinesAmmoFull _u) > 0) && {('rhs_acc_pgo7v2' in secondaryWeaponItems _u) || ('rhs_acc_pgo7v3' in secondaryWeaponItems _u)})", "Старые выстрелы rhs_rpg7_PG7V_mag, новый прицел rhs_acc_pgo7v2 / v3"] call bn_test_suite_fnc_assert;
[playableUnits, "!((primaryWeapon _u) isKindOf 'rhs_weap_ak74m') || ((primaryWeapon _u) isKindOf 'rhs_weap_akm') || (({_x isKindOf 'rhs_silencer_base'} count (primaryWeaponItems _u)) >0)", "нет ДТК для АК"] call bn_test_suite_fnc_assert;


[[objNull],"getTerrainGrid <= 4", "TerrainGrid = " + str (getTerrainGrid)] call bn_test_suite_fnc_assert;
[[objNull],"(channelEnabled 3) select 0", "Не включён чат!"] call bn_test_suite_fnc_assert;
[[objNull],"(east countSide playableUnits == 0) || {{(side _x == east) && ([_x] call ace_medical_fnc_isMedic)} count playableUnits > 0}", "у красных нет медиков!"] call bn_test_suite_fnc_assert;
[[objNull],"(west countSide playableUnits == 0) || {{(side _x == west) && ([_x] call ace_medical_fnc_isMedic)} count playableUnits > 0}", "у синих нет медиков!"] call bn_test_suite_fnc_assert;
[[objNull],"(resistance countSide playableUnits == 0) || {{(side _x == resistance) && ([_x] call ace_medical_fnc_isMedic)} count playableUnits > 0}", "у зелёных нет медиков!"] call bn_test_suite_fnc_assert;

[[objNull],"{_x call ace_medical_fnc_isMedicalVehicle} count vehicles >= 2", "На миссии менее 2 единиц медицинского транспорта."] call bn_test_suite_fnc_assert;

[allMissionObjects "All","private _dlc = getObjectDLC _u; (isNil '_dlc') || {(_dlc == 395180) && (worldName == 'Tanoa')}", "относится к дополнению", "private _dlcid = (getObjectDLC _u); ((bn_test_suite_dlc_dictionary select {_x select 0 == _dlcid}) select 0) select 1"] call bn_test_suite_fnc_assert; //больше селектов богу селектов
[vehicles, "diag_log ((itemCargo _u) + (weaponCargo _u) + (magazineCargo _u) + (backpackCargo _u)); ({_x in bn_addonsDictionaryKeys} count ([] + (itemCargo _u) + (weaponCargo _u) + (magazineCargo _u) + (backpackCargo _u))) < 1", "в багаже предметы из DLC", "([] + ((itemCargo _u) + (weaponCargo _u) + (magazineCargo _u) + (backpackCargo _u)) select {_x in bn_addonsDictionaryKeys}) apply {[_x, bn_addonsDictionaryValues select (bn_addonsDictionaryKeys find _x)]}"] call bn_test_suite_fnc_assert;

[playableUnits, "{_x in bn_addonsDictionaryKeys} count ([uniform _u, vest _u, headgear _u, goggles _u, hmd _u] + (weapons _u) + (items _u) + (primaryWeaponItems _u) + (secondaryWeaponItems _u) + (handgunItems _u) + (assignedItems _u)) < 1", "у игрока предметы из DLC", "([uniform _u, vest _u, headgear _u, goggles _u, hmd _u] + (weapons _u) + (items _u) + (primaryWeaponItems _u) + (secondaryWeaponItems _u) + (handgunItems _u) + (assignedItems _u)) apply {[_x, bn_addonsDictionaryValues select (bn_addonsDictionaryKeys find _x)]}"] call bn_test_suite_fnc_assert;

[vehicles,"!(_u call ace_medical_fnc_isMedicalVehicle)", "(info) является мед. транспортом."] call bn_test_suite_fnc_assert;
//[allMissionObjects,"!(_u call ace_medical_fnc_isMedicalFacility)", "(info) является госпиталем."] call bn_test_suite_fnc_assert;

[vehicles,"(getNumber (configFile >> 'cfgVehicles' >> (typeOf _u) >> 'scope')) > 0", "скрытый или устаревший класс", "typeOf _u"] call bn_test_suite_fnc_assert;

[[objNull],"(getMissionConfigValue 'enableDebugConsole') == 0", "(info) ДЕБАГ-КОНСОЛЬ ВКЛЮЧЕНА", "if ((getMissionConfigValue 'enableDebugConsole') == 1) then {'только для админа'} else {'ДЛЯ ВСЕХ!!!'};"] call bn_test_suite_fnc_assert;

[[objNull],"missionNamespace getVariable ['tu_decoration_disable_vehicle_logo',true]", "(info) Рисование логотипа на технике разрешено"] call bn_test_suite_fnc_assert;
[[objNull],"!(missionNamespace getVariable ['tu_decoration_disable_vehicle_logo',true])", "(info) Рисование логотипа на технике отключено"] call bn_test_suite_fnc_assert;
[[objNull],"(missionNamespace getVariable ['tu_decoration_disable_insignia',false]) || !(isClass (missionConfigFile >> 'CfgUnitInsignia'))", "(info) Отрядные нашивки отключены"] call bn_test_suite_fnc_assert;
[[objNull],"!((missionNamespace getVariable ['tu_decoration_disable_insignia',false]) || !(isClass (missionConfigFile >> 'CfgUnitInsignia')))", "(info) Отрядные нашивки включены"] call bn_test_suite_fnc_assert;
[[objNull],"{_x isKindOf 'rhs_D30_base'} count vehicles < 1", "(info) Буксирование гаубиц", "if (missionNamespace getVariable ['TU_ARTY_DISABLE_TOWING',false]) then {'отключено'} else {'разрешено'}"] call bn_test_suite_fnc_assert;
[[objNull],"{_x isKindOf 'air'} count vehicles < 1", "(info) Усложнённая лётная модель", "if (difficultyEnabledRTD) then {'включена принудительно'} else {'на выбор лётчика либо отключена'}"] call bn_test_suite_fnc_assert;

[[objNull],"(missionNamespace getVariable ['SerP_RFRetreat',-1]) < 0", "(info - СерП) Завершение по потерям: ", "format ['%1 потеряли %2 процентов, а %3 превосходят их в %4 раз(а)',SerP_sideREDFOR, 100-SerP_RFRetreat*100, SerP_sideBLUEFOR, SerP_domiMult]"] call bn_test_suite_fnc_assert;
[[objNull],"(missionNamespace getVariable ['SerP_RFRetreat',-1]) < 0", "(info - СерП) Завершение по потерям: ", "format ['%1 потеряли %2 процентов, а %3 превосходят их в %4 раз(а)',SerP_sideBLUEFOR, 100-SerP_BFRetreat*100, SerP_sideREDFOR, SerP_domiMult]"] call bn_test_suite_fnc_assert;

