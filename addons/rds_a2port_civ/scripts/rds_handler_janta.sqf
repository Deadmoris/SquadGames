/*
pso1 illumination handler

a: reyhard
*/

private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];

//systemChat "init";
_p removeHandgunItem "rds_acc_switch";
//exit if handler is already running
if(not( isNull (uiNameSpace getVariable ["rds_janta_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rds_handler_janta",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rds_handler_janta"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rds_handler_janta",-1])];
};

uiNameSpace setVariable ["rds_janta_ctrl",_this select 0];
//systemChat "adding EH";

_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {

	//remove EH
	if( isNull ( (uiNamespace getVariable "rds_janta_ctrl") displayCtrl 9978) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rds_handler_janta"];
		uiNameSpace setVariable ["rds_handler_janta",nil];
		uiNameSpace setVariable ["rds_janta_ctrl",displayNull];

		//systemChat "removing EH";
	};

	private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
	// exit if in vehicle
	if( not( isNull objectParent _p))exitWith{};
	//proper key detected
	if(inputAction "headlights" > 0)then{
		if(( (handgunItems _p) select 1) isEqualTo "")then{
			_p addHandgunItem "rds_acc_switch";
			playSound3D ["rds_a2port_civ\items\sounds\switch_on.wss", player, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), 0.9, 1, 20];		}else{
			_p removeHandgunItem "rds_acc_switch";
			playSound3D ["rds_a2port_civ\items\sounds\switch_off.wss", player, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), 0.9, 1, 20];
		};
		//systemChat "key detected";
	};
}];

uiNameSpace setVariable ["rds_handler_janta",_id];
