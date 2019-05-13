a3a_var_cli_killedAllies = [];
a3a_var_cli_killedEnemies = [];


a3a_fnc_cli_onPVKilled = {
	params ["_victim", "_killer" ];	

	if (!(isNull _killer) && !(isNull _victim)) then {
		if (_killer isEqualTo player) then {
			private _victimName = _victim call ace_common_fnc_getName;
			
			private _ally = [];
			private _enemy = [];
			/// VICTIM-KILLER SIDE RELATIONS
			if ((side (group _victim)) isEqualTo (side (group _killer))) then {
				a3a_var_cli_killedAllies pushBackUnique _victimName
			} else {
				a3a_var_cli_killedEnemies pushBackUnique _victimName
			};
		};
	};
};

"A3A_var_onPVKilled" addPublicVariableEventHandler { (_this select 1) call a3a_fnc_cli_onPVKilled };

A3A_fnc_cli_onKilled = {
	params ["_victim", "_killer", "_instigator" ];	

	private _realKiller = _instigator;
	if(isNull _realKiller) then {
		_realKiller = _killer;
	};

	if( (isNull _realKiller) or { _realKiller isEqualTo _victim } ) then {
		private _damageList = _victim getVariable ["A3A_damage_list", []];
		
		for "_i" from (count _damageList - 1) to 0 step -1 do {
			(_damageList select _i) params ["_t", "_d"];

			if(time - _t > 60) exitWith {};
			if(!isNull _d && !(_d isEqualTo _victim)) exitWith { _realKiller = _d; };
		}
	};

	
	if (!(isNull _realKiller) && !(isNull _victim)) then {
		diag_log format["[KILLED EH] Victim: %1 Killer: %2",
			_victim call ace_common_fnc_getName,
			_realKiller call ace_common_fnc_getName
		];
		if !(_realKiller isEqualTo _victim) then {
			A3A_var_onPVKilled = [_victim, _realKiller];
			publicVariable "A3A_var_onPVKilled";
		};
		_killerName = _realKiller call ace_common_fnc_getName;
		_killerSide = _realKiller getVariable ["A3A_PlayerSide", sideLogic];

		a3a_var_cli_myKiller = _killerName;
		WMT_Local_Killer = [_killerName, _killerSide];
	};
};

A3A_fnc_cli_handleDamage = {
	params ["_unit", "_selection", "_damage", "_shooter", "_projectile", "_hitPointIndex","_instigator","_hitPoint"];
	if(_selection == "") then { 
		private _damager = _instigator;
		if(isNull _damager) then {
			_damager = _shooter;
		};
		private _damageList = _unit getVariable ["A3A_damage_list", []];
		_damageList pushBack [time, _damager];
		_unit setVariable ["A3A_damage_list", _damageList];
	};
};

player addEventHandler ["HandleDamage", A3A_fnc_cli_handleDamage];
player addEventHandler ["Killed", { _this call A3A_fnc_cli_onKilled }];