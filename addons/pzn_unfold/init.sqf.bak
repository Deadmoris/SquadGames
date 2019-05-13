player addbackpack "B_Carryall_ocamo";
player additem "ACE_Tripod";
player addaction ["func","func.sqf"];
call compile preprocessfilelinenumbers "func.sqf";

pzn_towaction = ['pzn_attachrope','Зацепить тросс (тягач)','',{_this call pzn_attachrope_func},{true}] call ace_interact_menu_fnc_createAction;
pzn_detachropeself = ['pzn_detachropeself','Свернуть тросс','',{_this call pzn_detachropeself_func},{true}] call ace_interact_menu_fnc_createAction;

// [t1, 1, ["ACE_SelfActions"], pzn_towaction] call ace_interact_menu_fnc_addActionToObject;


pzn_untowaction = ['pzn_detachrope','Убрать тросс','',{_this call pzn_detachrope_func},{true}] call ace_interact_menu_fnc_createAction;
// ["LandVehicle", 0, ["ACE_MainActions"], pzn_untowaction, {'ACE_Tripod' in (items player)}] call ace_interact_menu_fnc_addActionToClass;


pzn_attachropeto_action = ['pzn_attachropeto','Зацепить тросс','',{_this call pzn_attachropeto_func},{true}] call ace_interact_menu_fnc_createAction;

{
	[_x, 0, ["ACE_MainActions"], pzn_towaction] call ace_interact_menu_fnc_addActionToObject;
	[_x, 0, ["ACE_MainActions"], pzn_attachropeto_action] call ace_interact_menu_fnc_addActionToObject;
	[_x, 0, ["ACE_MainActions"], pzn_untowaction] call ace_interact_menu_fnc_addActionToObject;
} foreach [t1,t2];
[player, 1, ["ACE_SelfActions"], pzn_detachropeself] call ace_interact_menu_fnc_addActionToObject;
/* 
pzn_attachrope_func = {
	hint str _this;
	if !('ACE_Tripod' in (items player)) exitwith {hint "где тросс?"};
	player removeitem 'ACE_Tripod';
	player action ["SwitchWeapon", player, player, 999];
	_rope = ropeCreate [_this select 0, [0,2.3,-0.5], _this select 1, "righthand", 10];
	
	
	
	
	// player setvariable ["pzn_rope_obj",_this];
	


};

pzn_detachrope_func = {
	_v = _this select 0;
	_p = _this select 1;
	_ropes = count (ropes _v);
	if (_ropes < 1) exitwith {hint "Нет тросса"};
	{
		if (_p canadd 'ACE_Tripod') then {
		} else {
			if (isnull (_p getvariable ["pzn_myropesholder",objnull])) then {
				_holder = 'GroundWeaponHolder' createVehicle (getPos _p);
				_p setvariable ["pzn_myropesholder",_holder];
			};
			(_p getvariable "pzn_myropesholder") additemcargo ['ACE_Tripod',1];
		};
		
		_v ropeDetach _x;
		_p ropeDetach _x;
		// ropeDestroy _x;
	} foreach _ropes;
}; */

// player setvariable ["pzn_rope_obj",_this];



// myaction = ['TestAction 2','Test 2','',{hint 'test 2';},{true}] call ace_interact_menu_fnc_createAction;
// [player, 1, ["ACE_SelfActions", "TestAction 1"], myaction] call ace_interact_menu_fnc_addActionToObject;