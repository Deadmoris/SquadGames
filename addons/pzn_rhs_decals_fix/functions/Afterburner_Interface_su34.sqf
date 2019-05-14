
params ["_player"];

// Exit if player has no interface
if (!hasInterface) exitWith {};

// Exit if interface is already set
if (_player getVariable ["RHS_Afterburner_KeyDown", -1] != -1) exitWith {};

// Wait for interface
waitUntil {(!isNull (findDisplay 46))};

// Key Down
private _keyDown = (findDisplay 46) displayAddEventHandler ["keydown",{
	private _key = _this select 1;
	private _ctrl = _this select 3;
	private _plane = (vehicle (call RHS_fnc_findPlayer));
	if (_key in (actionKeys 'HeliUp') && {!(_plane getVariable ['RHS_Afterburner_On', false])}) then {
		_plane setVariable ['RHS_Afterburner_On', true];
		_plane spawn tu_fnc_Afterburner_Activate;
	};
	false;
}];
_player setVariable ["RHS_Afterburner_KeyDown", _keyDown];

// Key Up
private _keyUp = (findDisplay 46) displayAddEventHandler ["keyup",{
	private _key = _this select 1;
	private _ctrl = _this select 3;
	if (_key in (actionKeys 'HeliUp')) then {
		(vehicle (call RHS_fnc_findPlayer)) setVariable ['RHS_Afterburner_On', false];
	};
	false;
}];
_player setVariable ["RHS_Afterburner_KeyUp", _keyUp];