//SCRIPT(T55Sight);

/* ----------------------------------------------------------------------------
Function: CUP_fnc_T55Sight
Description:
Change Opitcs Textures and Position in T55

Parameters:
_this select 0: DISPLAY - Display of T55 Vehicle


Returns:
Nil

Examples:
(begin example)
	[DisplayNull] call CUP_fnc_T55Sight;
(end)

See Also:

Author:
RDS edit by joko // Jonas

Peer Reviewed:
nil
---------------------------------------------------------------------------- */
if !(isNil "CUP_TrackedVehicles_T55Sight_ID") then {
	[CUP_TrackedVehicles_T55Sight_ID] call CBA_fnc_removePerFrameHandler;
	CUP_TrackedVehicles_T55Sight_ID = nil;
	CUP_TrackedVehicles_T55Sight_SignMode = false;
};
CUP_TrackedVehicles_T55Sight_ID = [{
	params ["_args", "_idPFH"];
	_args params ["_displ", "_playerVehicle"];
	if (player != gunner _playerVehicle || {player != driver _playerVehicle}) exitWith {
		[_idPFH] call CBA_fnc_removePerFrameHandler;
	};
	disableSerialization;
	private _ctrl = _displ displayCtrl 1;
	private _ctrl2 = _displ displayCtrl 2;
	private _ctrl3 = _displ displayCtrl 180;

	private _t = (ctrLPosition _ctrl) select 1;
	if (inputAction "ZeroingUp" > 0 && _t <= (15.96 * (0.025 * SafezoneH))) then {
			_ctrl ctrlSetPosition [(ctrLPosition _ctrl) select 0, _t + 0.003];
	};
	if (inputAction "ZeroingDown" > 0 && _t > (-0.0455 * (0.025 * SafezoneH))) then {
			_ctrl ctrlSetPosition [(ctrLPosition _ctrl) select 0, _t - 0.003];
	};
	_ctrl ctrlCommit 0.005;
	if (player == gunner _playerVehicle) then {
		switch (parseNumber (ctrlText _c)) do {
			case 7: {
					private _ctrlPos1 = (ctrlPosition _ctrl) select 1;
					if (ctrlText _ctrl  == "") then {
						_ctrl ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_gun_cross.paa";
						_ctrl3 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\sightBar.paa";
					};
					if !(CUP_TrackedVehicles_T55Sight_SignMode) then {
						private _r1 = ((_ctrlPos1 - ((9.035 * (0.025 * SafezoneH)))) * 100 ) / ((17.75 * (0.025 * SafezoneH)) - (9.035 * (0.025 * SafezoneH)));
						private _r = (_r1 * (((14.95 * (0.025 * SafezoneH)) + 0.005 ) / 100)) - 0.005;
						_ctrl ctrlSetPosition [14.95 * (0.01875 * Safezoneh), _r, 25.5 * (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH) ];
						_ctrl3 ctrlSetPosition [10 * (0.01875 * Safezoneh), 4.56 * (0.025 * SafezoneH), 35.5 * (0.01875 * SafezoneH), 25.5 * (0.025 * SafezoneH)];
						CUP_TrackedVehicles_T55Sight_SignMode = true;
						_ctrl ctrlCommit 0;
						_ctrl3 ctrlCommit 0;
					};

			};
			case 3.5: {
				if(ctrlText _ctrl  == "") then {
					_ctrl ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_gun_cross.paa";
					_ctrl3 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\sightBar.paa";
				};
				_ctrlPos1 = (ctrlPosition _ctrl) select 1;
				if (CUP_TrackedVehicles_T55Sight_SignMode) then {
					private _r1 = ((_ctrlPos1 + 0.005)* 100) / ((14.95 * (0.025 * SafezoneH)) + 0.005);
					private _r = (_r1 * ((17.75 * (0.025 * SafezoneH)) - (9.0355 * (0.025 * SafezoneH))) / 100) + ((9.0355 * (0.025 * SafezoneH)));
					_ctrl ctrlSetPosition [20.22 * (0.01875 * Safezoneh), _r, 14 * (0.01875 * SafezoneH),14 * (0.025 * SafezoneH)];
					_ctrl3 ctrlSetPosition [20.45 * (0.01875 * Safezoneh), 12.1555* (0.025 * SafezoneH),12.75 * (0.01875 * SafezoneH), 12.75 * (0.025 * SafezoneH)];
					_CUP_TrackedVehicles_T55Sight_SignModeb = false;
					_ctrl ctrlCommit 0;
					_ctrl3 ctrlCommit 0;
				};
			};

			default {
					if ((ctrlText _ctrl) != "") then {
						_ctrl ctrlSetText "";
						_ctrl3 ctrlSetText "";
					};
			};
		};
	};

}, 0.01, [_this select 0, vehicle player]] call CBA_fnc_addPerFrameHandler;

/*
[] spawn {
	disableSerialization;

	private _v = vehicle player;
	private _c = (uiNamespace getVariable "CUP_t55_Ctrl" displayCtrl 180);
	private _c2 = (uiNamespace getVariable "CUP_t55_Ctrl" displayCtrl 1);
	private _c3 = (uiNamespace getVariable "CUP_t55_Ctrl" displayCtrl 2);

	private _b = true;
	while {(player == gunner _v || player == driver _v)} do {
		private _h = parseNumber (ctrlText _c);
		waitUntil {sleep 0.1; (parseNumber (ctrlText _c))!=_h};
		if (player == gunner _v) then {
			switch (parseNumber (ctrlText _c)) do {
				case 7: {
						_c1 = (ctrlPosition _c2) select 1;
						if (ctrlText _c2  == "") then {
							_c2 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_gun_cross.paa";
							_c3 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\sightBar.paa";
						};
						if (!(_b)) then {
							_r1 = ((_c1 - ((9.035 * (0.025 * SafezoneH)))) * 100 ) / ((17.75 * (0.025 * SafezoneH)) - (9.035 * (0.025 * SafezoneH)));
							_r = (_r1 * (((14.95 * (0.025 * SafezoneH)) + 0.005 ) / 100)) - 0.005;
							_c2 ctrlSetPosition [14.95 * (0.01875 * Safezoneh), _r, 25.5 * (0.01875 * SafezoneH),25.5 *   (0.025 * SafezoneH) ];
							_c3 ctrlSetPosition [10 * (0.01875 * Safezoneh), 4.56 * (0.025 * SafezoneH), 35.5 * (0.01875 * SafezoneH), 25.5 * (0.025 * SafezoneH)];
							_b = true;
							_c2 ctrlCommit 0;
							_c3 ctrlCommit 0;
						};

				};
				case 3.5: {
					if(ctrlText _c2  == "") then {
						_c2 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_gun_cross.paa";
						_c3 ctrlSetText "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\sightBar.paa";
					};
					_c1 = (ctrlPosition _c2) select 1;
					if (_b) then {
						_r1 = ((_c1 + 0.005)* 100) / ((14.95 * (0.025 * SafezoneH)) + 0.005);
						_r = (_r1 * ((17.75 * (0.025 * SafezoneH)) - (9.0355 * (0.025 * SafezoneH))) / 100) + ((9.0355 * (0.025 * SafezoneH)));
						_c2 ctrlSetPosition [20.22 * (0.01875 * Safezoneh), _r, 14 * (0.01875 * SafezoneH),14 * (0.025 * SafezoneH)];
						_c3 ctrlSetPosition [20.45 * (0.01875 * Safezoneh), 12.1555* (0.025 * SafezoneH),12.75 * (0.01875 * SafezoneH), 12.75 * (0.025 * SafezoneH)];
						_b = false;
						_c2 ctrlCommit 0;
						_c3 ctrlCommit 0;
					};
				};

				default {
						if ((ctrlText _c2) != "") then {
							_c2 ctrlSetText "";
							_c3 ctrlSetText "";
						};
				};
			};
		};
	};
};
*/
