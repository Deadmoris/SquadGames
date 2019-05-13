private ["_ok","_pages","_current_page"];
disableSerialization;
_display = uiNamespace getVariable ["TU_ARTY_TAB_Display", displayNull];
_current_page = (uiNamespace getVariable ["TU_ARTY_current_page", 0]) min (count _this);
uiNamespace setVariable ["TU_ARTY_pages",_this];
if (isNull _display) then {
	_ok = createDialog "TU_ARTY_TAB";
	_display = uiNamespace getVariable ["TU_ARTY_TAB_Display", displayNull];
} else {
	_ok = true;
};
if (!_ok) exitWith {hint "Таблицу съели мыши"};

// {_pages = _pages + [parseText (loadFile _x)]} forEach (_this select 0);

_page = parseText (loadFile (_this select _current_page));
(_display displayCtrl 1500) ctrlSetStructuredText (_page);