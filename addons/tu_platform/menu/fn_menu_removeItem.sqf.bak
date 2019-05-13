#include "..\addon.hpp"

if (typeName _this != "STRING") exitWith {
	diag_log "Menu remove item error: Not a string";
};

if (GVAR(menu_items) isEqualTo []) exitWith {
	diag_log "Menu remove item error: Array already is empty!";
};

private _found = false;
private _idx = (count GVAR(menu_items)) - 1;
while {!_found && _idx>=0} do {
	if ((GVAR(menu_items) select _idx) select 0 == _this) then {
		GVAR(menu_items) deleteAt _idx;
		_found = true;
	};
	_idx = _idx - 1;
};

if !(_found) then {
	diag_log format["Menu remove item error: %1 action not found!", _this];
};