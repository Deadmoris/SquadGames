#include "../addon.hpp"
#include "feedback.hpp"

params ["_event", "_args"];
private _return = false;

switch (_event) do
{
    case "init": {
        private _dialog = _args select 0;
        uiNamespace setVariable [QGVAR(BradcastDialog), _dialog];

        (_dialog displayCtrl IDC_BROADCAST_TEXT) ctrlSetText "";
    };
    case "close": {
        uiNamespace setVariable [QGVAR(BradcastDialog), nil];
    };
    case "send": {
        private _dialog = uiNamespace getVariable QGVAR(BradcastDialog);
        private _text = ctrlText (_dialog displayCtrl IDC_BROADCAST_TEXT);

        if(_text != "") then {
            [_text, name player] remoteExec ["tu_platform_fnc_HandlerMessageReceived"];
            closeDialog 0;
        }else{
            hint localize "STR_TU_EmptyTextField";
        };

        closeDialog 0;
    };
};
_return
