#include "..\addon.hpp"

if (typeName _this != "ARRAY") exitWith {
	diag_log "Menu add item error: Not array";
};
if (count _this < 4 || count _this > 5) exitWith {
	diag_log format["Menu add item error: Too much or not enough parameters (%1)", _this];
};

GVAR(menu_items) pushBack _this;
