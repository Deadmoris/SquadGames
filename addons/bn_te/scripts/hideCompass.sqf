

[_this select 0] spawn {

	private _items = ["ItemGPS","BWA3_ItemNaviPad","ItemMicroDAGR","ItemAndroid","ItemcTab","C_UavTerminal","I_UavTerminal","O_UavTerminal","B_UavTerminal"];
	private _assignedItems = [];
	while {player in (_this select 0)} do {
		_assignedItems = assignedItems player;
		
		if (player in ((fullCrew [(_this select 0), 'gunner', true]) select 0)) then {	
			if ("ItemCompass" in _assignedItems) then {player unassignItem "ItemCompass";};		
			{
				if (_x in _assignedItems) exitWith {player unassignItem _x;};
			} forEach _items;		
		}else{
			if (!("ItemCompass" in _assignedItems) && ("ItemCompass" in (items player))) then {player assignItem "ItemCompass";};
			{
				if (!(_x in _assignedItems) && (_x in (items player))) exitWith {player assignItem _x;};
			} forEach _items;
		};
		sleep 1;
	};
	_assignedItems = assignedItems player;
	if (!("ItemCompass" in _assignedItems) && ("ItemCompass" in (items player))) then {player assignItem "ItemCompass";};
	{
		if (!(_x in _assignedItems) && (_x in (items player))) exitWith {player assignItem _x;};
	} forEach _items;
};
