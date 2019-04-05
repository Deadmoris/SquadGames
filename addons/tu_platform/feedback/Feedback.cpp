#include "feedback.hpp"

class GVAR(FeedbackDialog) {
    movingEnable = 1;
    idd = IDD_FEEDBACK;
    onLoad = "['init',_this] call tu_platform_fnc_HandlerFeedback";
    onUnload = "['close',_this] call tu_platform_fnc_HandlerFeedback";
    class controlsBackground {
        class Background: RscText {
            colorBackground[] = {0, 0, 0, 0.75};
            idc = -1;
            x = 0.0;
            y = 0.35;
            w = 0.6;
            h = 0.33;
            style = 16; //ST_MULTI
            lineSpacing = 1;
            text = $STR_TU_Flood_Warning;
        };
        class BackgroundHead: RscText {
            colorBackground[] = {   "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                                    "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                                    "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                                    0.9
                                };
            idc = IDD_FEEDBACK_HEAD;
            x = 0.00;
            y = 0.305;
            w = 0.6;
            h = 0.04;
            text = $STR_TU_FeedBack;
        };
    };
    class controls {
        class Text : RscEdit{
            idc = IDC_FEEDBACK_TEXT;
            x = 0.05;
            y = 0.63;
            w = 0.5;
            h = 0.05;
            text = "";
        };
        class Admin : RscText{
            idc = IDC_FEEDBACK_ADMIN;
            x = 0.05;
            y = 0.53;
            w = 0.5;
            h = 0.04;
            text = $STR_TU_GameAdmin;
        };
        class Admin_Name : RscText{
            idc = IDC_FEEDBACK_ADMINNAME;
            x = 0.1;
            y = 0.57;
            w = 0.4;
            h = 0.04;
            text = "";
            colorText[] = {0.85,0.57,0.11,1};
        };
        class Button_Send : RscButton {
            idc = IDC_FEEDBACK_SEND;
            x = 0.0;
            w = 0.16;
            y = 0.685;
            text = $STR_TU_Send;
            action = "['send',_this] call tu_platform_fnc_HandlerFeedback";
        };

        class Button_Close : RscButton {
            idc = IDC_FEEDBACK_CLOSE;
            x = 0.44;
            w = 0.16;
            y = 0.685;
            text = $STR_TU_Close;
            action = "closeDialog 0;";
        };
    };
};


class GVAR(BroadcastDialog) {
    movingEnable = 1;
    idd = IDD_BROADCAST;
    onLoad = "['init',_this] call tu_platform_fnc_HandlerBroadcast";
    onUnload = "['close',_this] call tu_platform_fnc_HandlerBroadcast";
    class controlsBackground {
        class Background: RscText {
            colorBackground[] = {0, 0, 0, 0.75};
            idc = -1;
            x = 0.0;
            y = 0.35;
            w = 0.6;
            h = 0.18;
        };
        class BackgroundHead: RscText {
            colorBackground[] = {   "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                                    "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                                    "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                                    0.9
                                };
            idc = IDD_BROADCAST_HEAD;
            x = 0.00;
            y = 0.305;
            w = 0.6;
            h = 0.04;
            text = $STR_TU_Broadcast;
        };
    };
    class controls {
        class Text : RscEdit{
            idc = IDC_BROADCAST_TEXT;
            x = 0.05;
            y = 0.46;
            w = 0.5;
            h = 0.05;
            text = "";
        };
        class Button_Send : RscButton {
            idc = IDC_BROADCAST_SEND;
            x = 0.0;
            w = 0.16;
            y = 0.535;
            text = $STR_TU_Send;
            action = "['send',_this] call tu_platform_fnc_HandlerBroadcast";
        };

        class Button_Close : RscButton {
            idc = IDC_BROADCAST_CLOSE;
            x = 0.44;
            w = 0.16;
            y = 0.535;
            text = $STR_TU_Close;
            action = "closeDialog 0;";
        };
    };
};
