/*
pso1 illumination handler

a: reyhard
*/

private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];

rhs_key_wpn_int_glb = (profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]);

//systemChat "init";
_p removeHandgunItem "rds_acc_switch";
//exit if handler is already running
if(not( isNull (uiNameSpace getVariable ["rds_lts1_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rds_handler_lts1",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rds_handler_lts1"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rds_handler_lts1",-1])];
};

uiNameSpace setVariable ["rds_lts1_ctrl",_this select 0];
//systemChat "adding EH";

_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {

	//remove EH
	if( isNull ( (uiNamespace getVariable "rds_lts1_ctrl") displayCtrl 9977) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rds_handler_lts1"];
		uiNameSpace setVariable ["rds_handler_lts1",nil];
		uiNameSpace setVariable ["rds_lts1_ctrl",displayNull];

		//systemChat "removing EH";
	};

	private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
	// exit if in vehicle
	if( not( isNull objectParent _p))exitWith{};
	//proper key detected
	// light on/off
	if(inputAction "headlights" > 0)then{
		if(( (handgunItems _p) select 1) isEqualTo "")then{
			_p addHandgunItem "rds_acc_switch";
			playSound3D ["rds_a2port_civ\items\sounds\switch_on.wss", player, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), 0.9, 1, 20];
		}else{
			_p removeHandgunItem "rds_acc_switch";
			playSound3D ["rds_a2port_civ\items\sounds\switch_off.wss", player, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), 0.9, 1, 20];
		};
		//systemChat "key detected";
	};
	// switch light mode
	if(inputAction rhs_key_wpn_int_glb > 0)then{
		//systemChat "key detected";

		private _wf = getText (configFile >> "cfgWeapons" >> (handgunWeapon _p) >> "rds_next_flashlight_mode");
		_p addWeapon _wf;
		_p selectWeapon _wf;
	};
}];

uiNameSpace setVariable ["rds_handler_lts1",_id];
