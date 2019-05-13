private _unit = _this select 0;
private _milSys = getNumber (configFile >> "CfgVehicles" >> typeOf _unit >> "bn_arty_milSys");
if (_milSys == 0) then {_milSys = 6000};
private _display = uiNamespace getVariable ["TU_ARTY_Display", displayNull];
if ((isNull _display) || (_unit != (vehicle player))) exitWith {
	//hint (str ["PF exit condition met",isNull _display,(_unit != (vehicle player))]);
	[tu_arty_dials_handle] call CBA_fnc_removePerFrameHandler;
};

private _def = (_unit animationPhase "OpticRevolve");// * _milSys/6400;
// US mils to Russian mils
_def = round (_def + _milSys/2) % _milSys;
if (_def<0) then {_def=_def+_milSys};

// bubble level
private _el = floor ((asin ((_unit weaponDirection (weapons _unit select 0)) select 2)) / 360 * _milSys); // прицел фактический, игроку неизвестен
private _el_dial = (_unit animationPhase "OpticElevate"); // прицел, установленный на барабанчике/ручке
private _delta_el = _el_dial - _el; // отклонение продольного уровня фактическое
private _digits = 0;
if ((_milSys == 6400)||(_unit isKindOf "rhs_D30_base")) then {
	_digits = [_el_dial, 4] call ACE_common_fnc_numberToDigits;
} else {
	_digits = [1000-(_el_dial-_milSys/8), 4] call ACE_common_fnc_numberToDigits; // прицел 10-00 соответствует возвышению ствола 45 градусов - rtfm
};
private _val_left = str (_digits select 0) + str (_digits select 1);
private _val_right = str (_digits select 2) + str (_digits select 3);

//поперечный уровень
private _levelRightPos = _unit modelToWorldWorld (_unit selectionPosition "level_right");
private _levelLeftPos = _unit modelToWorldWorld (_unit selectionPosition "level_left");
private _levelLength = _levelRightPos distance _levelLeftPos;
private _swing = ((_levelRightPos select 2)-(_levelLeftPos select 2)) / _levelLength * 5000;

(_display displayCtrl 1002) ctrlSetText _val_left;
(_display displayCtrl 1003) ctrlSetText _val_right;

(_display displayCtrl 1900) sliderSetRange [-20, 20];
(_display displayCtrl 1901) sliderSetRange [-20, 20];

//if (abs _delta_el >= 20) then {
(_display displayCtrl 1900) sliderSetPosition _delta_el; //} else {(_display displayCtrl 1900) sliderSetPosition ((_delta_el * 2) min 20) max -20;};
(_display displayCtrl 1901) sliderSetPosition _swing; //} else {(_display displayCtrl 1901) sliderSetPosition ((_swing * 2) min 20) max -20;};
	
// deflection dial
_digits = [_def, 4] call ACE_common_fnc_numberToDigits;
_val_left = str (_digits select 0) + str (_digits select 1);
_val_right = str (_digits select 2) + str (_digits select 3);
(_display displayCtrl 1001) ctrlSetText _val_left;
(_display displayCtrl 1000) ctrlSetText _val_right;

_val_left = str(_unit getVariable ["OpticLens",0]);
(_display displayCtrl 1004) ctrlSetText _val_left;