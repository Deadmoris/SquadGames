
params ["_plane"];


if(!hasInterface)exitWith{};

// Get player
waitUntil {(!isNull (call RHS_fnc_findPlayer))};
private _player = call RHS_fnc_findPlayer;

// Default afterburner to off
_plane setVariable ['RHS_Afterburner_On', false];

// Action On
_plane addAction ["Afterburner - On", {
	params ["_target"];
	if (isEngineOn _target) then {
		_target setVariable ['RHS_Afterburner_On', true];
		_target spawn tu_fnc_Afterburner_Activate;
	};
}, nil, 0, false, true, "", "(!(_target getVariable ['RHS_Afterburner_On', false]) && {vehicle _this == _target})"];

// Action Off
_plane addAction ["Afterburner - Off", {
	params ["_target"];
	_target setVariable ['RHS_Afterburner_On', false];
}, nil, 0, false, true, "", "(_target getVariable ['RHS_Afterburner_On', false] && {vehicle _this == _target})"];

// Event GetIn
_plane addEventHandler ["GetIn", {
	params ["_plane","","_player"];

	// Start interface
	_player spawn tu_fnc_Afterburner_Interface;
}];

// Event GetOut
_plane addEventHandler ["GetOut", {
	params ["_plane","","_player"];
	// Remove key events
	if (hasInterface) then {
		(findDisplay 46) displayRemoveEventHandler ["keydown", _player getVariable ["RHS_Afterburner_KeyDown", -1]];
		(findDisplay 46) displayRemoveEventHandler ["keyup", _player getVariable ["RHS_Afterburner_KeyUp", -1]];
	};
	_player setVariable ["RHS_Afterburner_KeyDown", -1];
	_player setVariable ["RHS_Afterburner_KeyUp", -1];
}];

// Start interface is player is already in plane
if (vehicle _player == _plane) then {
	_player spawn tu_fnc_Afterburner_Interface;
};