/*diag_log "Key down";
diag_log _this;*/

if ((_this select 1) in (actionKeys "GunElevUp")) exitWith {0 = [0,1,2,3,_this select 2,_this select 3,6,1,vehicle player] execVM "\bn_te\pag-17\el_dial_change.sqf"};
if ((_this select 1) in (actionKeys "GunElevDown")) exitWith {0 = [0,1,2,3,_this select 2,_this select 3,6,-1,vehicle player] execVM "\bn_te\pag-17\el_dial_change.sqf"};