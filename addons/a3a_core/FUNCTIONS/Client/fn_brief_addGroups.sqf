private ["_groups", "_group", "_text", "_members", "_marker", "_member", "_weapons", "_equipArray", "_unitSide", "_unitEquip", "_selectedEquip", "_first_weapon", "_weapon_primary", "_weapon_secondary", "_weapon_side", "_desc"];
_groups = _this;
_text = "";
for "_i" from 0 to ((count _groups) - 1) do {
	_group = _groups select _i;
	_members = units _group;
	_marker = str(_group);
	_text = _text + format["<br/><marker name='%1'>%2</marker><br/>", _marker, _group];
	for "_i2" from 0 to ((count _members) - 1) do {
		_member = _members select _i2;

		// Weapons
		_weapons = "";
	/*	_equipArray = _member getVariable ["A3A_EQUIPMENT", ["CSAT", "unarmed"]];
		_unitSide = _equipArray select 0;
		_unitEquip = _equipArray select 1;
		_selectedEquip = _unitEquip call compile preprocessFileLineNumbers format["A3A_EQUIPMENT\equip_%1.sqf", _unitSide];
		_weapon_primary = _selectedEquip select 0;
		_weapon_secondary = _selectedEquip select 5;
		_weapon_side = _selectedEquip select 7;
		if (count _weapon_primary > 0) then {
			_weapons = _weapons + "<br/>- " + getText (configFile >> "CfgWeapons" >> (_weapon_primary select 0) >> "displayName");
		};
		if (count _weapon_secondary > 0) then {
			_weapons = _weapons + "<br/>- " + getText (configFile >> "CfgWeapons" >> (_weapon_secondary select 0) >> "displayName");
		};
		if (count _weapon_side > 0) then {
			_weapons = _weapons + "<br/>- " + getText (configFile >> "CfgWeapons" >> (_weapon_side select 0) >> "displayName");
		};

		_text = _text + format["<font color='#ffff00'>%1</font>%2<br/>", name _member, _weapons];
		*/
        _weapon_primary = primaryWeapon _member;
        _weapon_secondary = secondaryWeapon _member;
        _weapon_side = handgunWeapon _member;
        if (_weapon_side != "") then {
            _weapons = _weapons + " - " + getText (configFile >> "CfgWeapons" >> _weapon_side >> "displayName") + "  ";
        };
        if (_weapon_primary != "") then {
            _weapons = _weapons + " - " + getText (configFile >> "CfgWeapons" >> _weapon_primary >> "displayName") + "  ";
        };
        if (_weapon_secondary != "") then {
            _weapons = _weapons + " - " + getText (configFile >> "CfgWeapons" >> _weapon_secondary >> "displayName");
        };
        //_desc = getText(configFile >> "CfgVehicles" >> typeOf _member >> "displayName");
        _desc = roleDescription _member;
        if (isPlayer _member) then
        {
            _text = _text + format["<font color='#ffff00'>%1</font> - %2<br/><font color='#AAAAAA'>%3</font><br/>", name _member, _desc, _weapons];
        }
        else
        {
            _text = _text + format["<font color='#00ffff'>~%1~</font> - %2<br/><font color='#AAAAAA'>%3</font><br/>", name _member, _desc, _weapons];
		};
	};
};

player createDiaryRecord ["diary", [localize "STR_A3RU_briefUnits", _text]];