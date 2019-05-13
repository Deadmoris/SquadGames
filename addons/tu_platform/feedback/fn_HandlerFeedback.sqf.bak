#include "../addon.hpp"
#include "feedback.hpp"

params ["_event", "_args"];
private _return = false;

switch (_event) do
{
    case "init": {
        private _dialog = _args select 0;
        uiNamespace setVariable [QGVAR(FeedbackDialog), _dialog];

        private _admin = localize "STR_TU_NoAdmin";

        if !(isNil QGVAR(GlobalAdmin)) then {
            if(isPlayer ( GVAR(GlobalAdmin) select 0)) then {
                _admin =  GVAR(GlobalAdmin) select 1;
            };
        };

        (_dialog displayCtrl IDC_FEEDBACK_TEXT) ctrlSetText "";
        (_dialog displayCtrl IDC_FEEDBACK_ADMINNAME) ctrlSetText _admin;
    };
    case "close": {
        uiNamespace setVariable [QGVAR(FeedbackDialog), nil];
    };
    case "send": {
        // Send message to admin
        if(isNil QGVAR(GlobalAdmin)) exitWith {
            hint localize "STR_TU_NoAdmin";
        };
        if(!isPlayer (GVAR(GlobalAdmin) select 0)) exitWith {
            hint localize "STR_TU_NoAdmin";
        };

        private _dialog = uiNamespace getVariable QGVAR(FeedbackDialog);
        private _text = ctrlText (_dialog displayCtrl IDC_FEEDBACK_TEXT);

        if(_text != "") then {
            [_text, name player] remoteExec ["tu_platform_fnc_HandlerMessageReceived", GVAR(GlobalAdmin) select 0];
            closeDialog 0;
        }else{
            hint localize "STR_TU_EmptyTextField";
        };

        closeDialog 0;
    };
};
_return
