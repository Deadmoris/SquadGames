private ["_phase", "_newPhase", "_gun","_mult","_dir","_milSys","_digits","_el_actual"];
disableSerialization;
//hint str _this;
_gun = _this select 8;

_dir = _this select 7;	// +1/-1
_milSys = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_milSys");
if (_milSys == 0) then {_milSys = 6000};
_mult = 1; // 6400 / _milSys;	// US mils to Russian mils, if necessary

if (_this select 4) then {_mult=_mult*5};	// shift
if (_this select 5) then {_mult=_mult*10};	// ctrl

_display = uiNamespace getVariable ["TU_ARTY_PAG17", displayNull]; 


// hint str (_this);

_phase = uiNamespace getVariable ["tu_arty_elevation_dial",0];
_newPhase = (round(_phase+_dir*_mult) min 1450) max 0;
uiNamespace setVariable ["tu_arty_elevation_dial",_newPhase];

_display = uiNamespace getVariable ["TU_ARTY_PAG17_Display", displayNull];
if (isNull _display) then  {
	_layer = ["TU_ARTY_PAG17"] call BIS_fnc_rscLayer;
	_layer cutRsc ["TU_ARTY_PAG17", "PLAIN", 2, false];
};

_display = uiNamespace getVariable ["TU_ARTY_PAG17_Display", displayNull];
if (!(isNull _display)) then {
	_digits = [_newPhase, 4] call ace_common_fnc_numberToDigits;
	_el_actual = floor ((asin ((_gun weaponDirection (weapons _gun select 0)) select 2)) / 360 * _milSys);
	_val_left = str (_digits select 0) + str (_digits select 1);
	_val_right = str (_digits select 2) + str (_digits select 3);
	(_display displayCtrl 1002) ctrlSetText _val_left;
	(_display displayCtrl 1003) ctrlSetText _val_right;
	(_display displayCtrl 1900) sliderSetRange [-20, 20];
	(_display displayCtrl 1900) sliderSetPosition (_el_actual);
};
playSound (["TU_ARTY_Click1", "TU_ARTY_Click2", "TU_ARTY_Click3"] select floor random 3);
