/* 
private ["_display"];

_display = _this select 0;

if !(profileNamespace getVariable ["RHS_welcomeShown", false]) then {
	_display createDisplay "rhs_rscWelcomeScreen";
	diag_log "niby uruchamia sie";
	profileNamespace setVariable ["RHS_welcomeShown", true];
	saveProfileNamespace;
};

["onLoad",_this,"RscDisplayMain","GUI"] call compile preprocessFileLineNumbers "A3\ui_f\scripts\initDisplay.sqf";
 */