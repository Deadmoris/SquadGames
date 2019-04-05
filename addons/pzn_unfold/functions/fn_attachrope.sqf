	_v = _this select 0;
	_p = _this select 1;
	// hint str _this;
	if (count (ropes _v) > 0) exitwith {hint "Трос уже прицепили"};
	// if !('pzn_rope' in (items _p)) exitwith {hint "где трос?"};
	// _p removeitem 'pzn_rope';
	_p action ["SwitchWeapon", _p, _p, 999];



				private _newNozzle = "Sign_sphere10cm_EP1" createVehicle position _p;
				_newNozzle attachTo [_p, [-0.02,0.05,-0.12], "righthandmiddle1"];
				_newNozzle hideobjectglobal true;
				_p setVariable ["pzn_helper", _newNozzle, true];
	_rope = ropeCreate [_v, [0,2.6,-0.8], _newNozzle, [0, -0.20, 0.12], 20];
	_p setvariable ["pzn_currentrope",_rope, true];
	
	[_newNozzle,_rope,_v] spawn {
		params ["_newNozzle","_rope","_v"];
		waituntil {
			sleep 0.101;
				((isnil "_newNozzle") or {isnull _newNozzle} or {(_newNozzle distance _v) > 21})
		};
		// hint str _rope;
			if (isnil "_newNozzle") exitwith {};
			if (isnil "_rope") exitwith {};
		detach _newNozzle;
		deletevehicle _newNozzle;
		_newNozzle ropeDetach _rope;
	};