params ["_unit","_message"];
private _side = side _unit;
private _side_color = "#ffffff";
private _marker_color = "ColorWhite";
switch (_side) do {
	case east: {
		_side_color = "#ff1111";
		_marker_color = "ColorOPFOR"
	};
	case west: {
		_side_color = "#99aaff";
		_marker_color = "ColorBLUFOR"
	};
	case resistance: {
		_side_color = "#11ff11";
		_marker_color = "ColorIndependent"
	};
};
private _unit_name = "";
if (_unit isKindOf "CAManBase") then {
	_unit_name = (roleDescription _unit) + ", " + (groupID (group _unit));
} else {
	_unit_name = typeOf _unit;
	_side_color = "#cccc00";
	_marker_color = "ColorWhite";
};
private _unit_position = getPos _unit;
private _marker = ["bn_mrk_test_"+(str bn_test_suite_free_marker_id), _unit_position select 0, _unit_position select 1, 1, "hd_dot", _marker_color] call bn_test_suite_fnc_marker_icon;
bn_test_suite_free_marker_id = bn_test_suite_free_marker_id + 1;
bn_test_log = bn_test_log + (format ["<font color = '%1'><marker name = '%2'>%3</marker></font>: %4",_side_color, _marker, _unit_name, _message]) + "<br />";
bn_test_log_text = bn_test_log_text + (format ["%1: %2",_unit_name, _message]) + (toString [13,10]);