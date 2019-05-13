if (player getVariable ["bn_stakes_placed",0] > 2) exitWith {};
player addAction ["<t color='#FFFF99'>Поставить вешку</t>", {[] call bn_te_fnc_place_stake;  player removeAction (_this select 2);}];
player addAction ["<t color='#FFFF99'>Поставить вешку</t>", {[] call bn_te_fnc_place_stake;  player removeAction (_this select 2);}];