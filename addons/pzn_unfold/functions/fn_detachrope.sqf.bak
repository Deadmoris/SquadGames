
_v = _this select 0;
_p = _this select 1;
_rv = ropeAttachedTo _v;
if (!isnull _rv) then {
	private _ropes = ropes _rv;
	if (count _ropes < 1) exitwith {hint "Нет троса 2"};
	{
		_rv ropeDetach _x;
		_v ropeDetach _x;
		_helper = _p getVariable "pzn_helper";
		_helper attachTo [_p, [-0.02,0.05,-0.12], "righthandmiddle1"];
		[_helper,[0, -0.20, 0.12]] ropeAttachTo _x;
	} foreach _ropes;
} else {
	private _ropes = ropes _v;
	if (count _ropes < 1) exitwith {hint "Нет троса 1"};
	_v setmass (_v getvariable 'pzn_unfold_initmass');
	{
		_v ropeDetach _x;
		_p ropeDetach _x;
		ropeDestroy _x;
		_helper = _p getVariable "pzn_helper";
		deletevehicle _helper;
		_p setVariable ["pzn_helper", nil, true];
		_p setvariable ["pzn_currentrope",nil,true];
		[_helper,_x,_v] spawn {
			params ["_newNozzle","_rope","_v"];
			waituntil {
				sleep 0.101;
				((isnil "_newNozzle") or {isnull _newNozzle} or {(_newNozzle distance _v) > 15})
			};
			// hint str _rope;
			if (isnil "_newNozzle") exitwith {};
			if (isnil "_rope") exitwith {};
			detach _newNozzle;
			deletevehicle _newNozzle;
			_newNozzle ropeDetach _rope;
		};
	} foreach _ropes;
	
	
};
