class CfgPatches {
    class wog3_inventory {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.60;
        requiredAddons[] = {"ace_common", "cba_xeh", "ace_medical"};
        version = "0.0.2";
        versionStr = "0.0.2";
        versionAr[] = {0,0,2};
        author = "Ezhuk";
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class SG_Invetory {
                    displayName = $STR_SG_Inventory;
                    distance = 4;
                    condition = "not alive _target || _target getVariable ['ACE_isUnconscious', False] || player == leader _target";
                    statement = "player action ['Gear', _target] ;_target spawn {sleep 0.5; waitUntil{player distance _this > 4 || isNull findDisplay 602}; if !(isNull findDisplay 602) then {closeDialog 0;};};";
                };
                class SG_JoinInGroup{
                    displayName = $STR_SG_JoinInGroup;
                    distance = 4;
                    condition = "isPlayer _target && alive _target && _target getVariable ['SG_AllowChangeGroup', False] && group player != group _target";
                    statement = "if (count (units group player) < 20) then {[_target] joinSilent (group player);[ format [localize 'STR_SG_joinedInGruop', name _target],true, 2] call ace_common_fnc_displayText;}else{[localize 'STR_SG_MaxGoupSize',true, 2] call ace_common_fnc_displayText;};";
                };
            };
        };
        class ACE_SelfActions {
            class ACE_Equipment {
                class SG_AllowChangeGroup {
                    displayName = $STR_SG_AllowChangeGroup;
                    condition = "not (_target getVariable ['SG_AllowChangeGroup', False])";
                    statement = "player setVariable ['SG_AllowChangeGroup', True, True]; [] spawn {sleep 20; player setVariable ['SG_AllowChangeGroup', False, True];};";
                };
            };
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class wog3_AllowChangeGroup
    {
        clientInit = "if (player getVariable ['SG_AllowChangeGroup', False]) then { player setVariable ['SG_AllowChangeGroup', False, True]; };";
    };
};
