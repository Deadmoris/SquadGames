_vec = _this select 0;

if(getNumber(configFile >> "CfgVehicles" >> typeOf _vec >> "type_rwr") == 1) then {
	_this spawn rwr_15_stn_fnc_rwr;
} else {
	_this spawn rwr_15_stn_fnc_rwr_us;
};
