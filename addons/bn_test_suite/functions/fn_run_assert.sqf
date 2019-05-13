/* 0 - Array - ��������������� ������, ��������, vehicles ��� playableUnits
1 - String - ������� "��� ������ ����" (�������������, �������� ������ �� ���� � ���������� _u)
2 - String - ���������, ��������� ���� ������� ��������
3 - String - �������������� ��������� (�������������, �������� ������ �� ���� � ���������� _u)
*/
params ["_array","_condition","_fail_message", ["_extra_message", ""]];
private _condition_compiled = compile ("params ['_u']; " + _condition);
private _fm = _fail_message;
{
	if !([_x] call _condition_compiled) then {
		_fm = _fail_message;
		if (_extra_message != "") then {
			_fm = _fm + " (" + (str ([_x] call compile ("params ['_u']; " + _extra_message))) + ")";
		};
		[_x, _fm] call bn_test_suite_fnc_report;
	};
} forEach _array;
