#include "..\addon.hpp"
if (!dialog) then {
	private _controls = [1702, 1703, 1704, 1705, 1706, 1707, 1708, 1709, 1710];
	createDialog QGVAR(POPUP_UI);
	private _display = uiNamespace getVariable QGVAR(POPUP_UI);
	private _selectedCtrl = 0;
	
	{ ctrlShow [_x, false] } forEach _controls;
	if (count GVAR(menu_items) == 0) then {
		ctrlShow [1702, true];
		ctrlEnable [1702, false];
		ctrlSetText [1702, "No actions"];
	} else {
		{
			if (_selectedCtrl > 8) exitWith {};

			_x params [ "_UI_text", "_UI_args", "_UI_func", "_UI_requ", "_UI_enab"];

			private _ctrl = _controls select _selectedCtrl;
			
			if (call _UI_requ) then {
				_selectedCtrl = _selectedCtrl + 1;
				ctrlShow [_ctrl, true];
				ctrlSetText [_ctrl, _UI_text];
				if(!isNil { _UI_enab } && { !(call _UI_enab )}) then {
					ctrlEnable [_ctrl, false];						
				};
				buttonSetAction [_ctrl, format["closeDialog 0; ((tu_platform_menu_items select %1) select 1) spawn ((tu_platform_menu_items select %1) select 2);", _forEachIndex]];
			};
		} forEach GVAR(menu_items);
	};
} else {
	closeDialog 0;
};