/*
	BPK-1-42 simulation
	Handles optical devices switching with weaponary changing depe


	script is fired only once & is destroyed together with display
	a: reyhard
*/

if(not( isNull (uiNameSpace getVariable ["RHS_BMP2_Ctrl",displayNull]))) exitWith{};

// remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_bmp2_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_bmp2_eh"];
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_bmp2_eh_up"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_hatch_handler_eh",-1])];
};

uiNameSpace setVariable ["RHS_BMP2_Ctrl",_this select 0];

rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_bmp2_bpk_handler", "onEachFrame", {
	params["_v","_mode_old","_time"];

	// refresh rate 0.01s
	if(time > _time)then{
		_this set [2,time+0.01];

		private _mode = ctrlText (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 154);
		// check if mode was changed
		if(_mode!=_mode_old)then{

			// deinitialization part
			if(  ctrlText ( (uiNamespace getVariable "RHS_BMP2_Ctrl")  displayCtrl 1000) != "RHS_BPK42" )exitWith{
				// remove event handlers & deinitalize variables
				(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_bmp2_eh"];
				(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_bmp2_eh_up"];
				["rhs_bmp2_bpk_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				uiNameSpace setVariable ["RHS_BMP2_Ctrl",displayNull];
				{uiNameSpace setVariable [_x,nil]}foreach ["rhs_bmp2_eh","rhs_bmp2_eh_up"];
				{_x = nil}foreach [rhs_moveReticle];

				// readd weapons for AI
				private _weapons = getArray (configFile >> "cfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret" >> "weapons") - ["rhs_weap_902a"];
				{_v removeWeapon _x}foreach (_weapons - ["rhs_weap_902a"]);
				{_v addWeapon _x}foreach _weapons;

				//systemChat "removing EH";
			};

			private _sight = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 1);
			private _bar = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 2);
			private _v = vehicle (call rhs_fnc_findPlayer);
			_this set [0,_v];
			//systemChat "updating vehicle";

			// weapon handling
			private _weapons = getArray (configFile >> "cfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret" >> "weapons") - ["rhs_weap_902a"];
			private _missleLauncher ="";
			{if(_x isKindOf ["rhs_weap_9m113",configFile >> "CfgWeapons"])then{_missleLauncher =_x;_weapons = _weapons - [_x]}}foreach _weapons;

			switch(_mode)do{
				case "DAY" : {
					{_x ctrlSetTextColor [0.7,0.074,0.02,1]; }foreach [_sight,_bar];
					_v animate ["changeView",0,true];
					if(_v animationSourcePhase "konkurs_hide_source" isEqualTo 0)then{
						{_v removeWeapon _x}foreach (weapons _v - ["rhs_weap_902a"]);
						{_v addWeapon _x}foreach _weapons;
					};
				};
				case "ATGM": {
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
					_v animate ["changeView",1,true];
					if(_v animationSourcePhase "konkurs_hide_source" isEqualTo 0)then{
						{_v removeWeapon _x}foreach (weapons _v - ["rhs_weap_902a"]);
						_v addWeapon _missleLauncher;
					};
				};
				case "AA": {
					{_x ctrlSetTextColor [0.7,0.074,0.02,0]; }foreach [_sight,_bar];
					_v animate ["changeView",1,true];
					if(_v animationSourcePhase "konkurs_hide_source" isEqualTo 0)then{
						{_v removeWeapon _x}foreach (weapons _v - ["rhs_weap_902a"]);
						{_v addWeapon _x}foreach _weapons;
					};
				};
				case "NIGHT" : {
					_v animate ["changeView",0,true];
					if(_v animationSourcePhase "konkurs_hide_source" isEqualTo 0)then{
						{_v removeWeapon _x}foreach (weapons _v - ["rhs_weap_902a"]);
						{_v addWeapon _x}foreach _weapons;
					};
				};
			};
			// fade effect to simulate changing optical devices
			titleCut ["", "black in", 2];
			// update mode param
			_this set [1,_mode];
		};
	};
},["","",time]] call BIS_fnc_addStackedEventHandler;

rhs_moveReticle = {
	// exit if play is not in optic mode
	if(cameraView != "GUNNER")exitWith{};

	params["_dir"];

	disableSerialization;

	private _sight = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 1);
	private _t = (ctrLPosition _sight) select 1;
	private _move = _t+0.003*_dir;
	if( (_move <=(19.86 *   (0.025 * SafezoneH))) && (_move >= (3.66 *   (0.025 * SafezoneH))) )then{
		_sight ctrlSetPosition [(ctrLPosition _sight) select 0,_move];
		_sight ctrlCommit 0.005;
	};
};

_id =  (findDisplay 46) displayAddEventHandler ["KeyDown", {
	private _handle=false;
	// reticle range adjustments
	switch(true) do {
		case (inputAction rhs_key_rng_up_GLB > 0): { [1] call rhs_moveReticle;};
		case (inputAction rhs_key_rng_dwn_GLB > 0): { [-1] call rhs_moveReticle };
	};
	_handle;
}];

_id2 =  (findDisplay 46) displayAddEventHandler ["KeyUp", {


	private _handle=false;

	//if (inputAction "nightvision" > 0)then {
	// reticle illumination handling
	if(((actionKeys "nightVision") select 0) isEqualTo (_this select 1))then{
		disableSerialization;
		private _sight = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 1);
		private _bar = (uiNamespace getVariable "RHS_BMP2_Ctrl" displayCtrl 2);

		if(ctrlText _sight ==  "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\data\rhs_bpk_1_42_sight.paa")then{
			_sight ctrlSetText "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\data\rhs_bpk_1_42_sight_night.paa";
			_bar ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar_night.paa";
		}else{
			_sight ctrlSetText "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\data\rhs_bpk_1_42_sight.paa";
			_bar ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar.paa";
		};
		//systemChat "change";
	};
	_handle;
}];
uiNameSpace setVariable ["rhs_bmp2_eh",_id];
uiNameSpace setVariable ["rhs_bmp2_eh_up",_id2];