/*
	car blinkers script hooked to unitInfo UI onLoad handler
	default controls:
		evasiveLeft [Q] - blinker left
		evasiveRight [E] - blinker right
		cycleThrownItems [CTRL+G] - hazard lights

	a: reyhard
*/

if(isNull (uiNamespace getVariable ["RDS_Car_Ctrl",displayNull]) )then
{
	disableSerialization;
	uiNameSpace setVariable ["RDS_Car_Ctrl",_this select 0];

	// fix for some quirky behaviour of arma 3 ui
	// if another vehicle is spawned with same unitInfo type then local variable to handler vanishes, as a new ui detection is working.
	// yet, it doesn't trigger new onLoad EH
	// using uiNamespace variable & pointing directly to control with unique Id it's possible to bypass it
	while{not(isNull ((uiNamespace getVariable "RDS_Car_Ctrl") displayCtrl 54319))}do
	{
		private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
		private _v = vehicle _p;
		if(driver _v isEqualTo _p)then{
			if(inputAction "evasiveLeft" > 0)then{
				if(not(_v getVariable ["rds_blinker_left",false]))then{
					_v setVariable ["rds_blinker_left",true,true];
					_v setVariable ["rds_blinker_right",false,true];
					_v setVariable ["rds_blinker_emr",false,true];
					_v spawn {
						while{_this getVariable "rds_blinker_left"}do
						{
							_this animateDoor ["blinker_L",1];
							sleep 0.4;
							_this animateDoor ["blinker_L",0];
							sleep 0.4;
							if(!alive _this)exitWith{};
						};
					};
				}else{
					_v setVariable ["rds_blinker_left",false,true];
				};
				sleep 0.5;
			};
			if(inputAction "evasiveRight" > 0)then{
				if(not(_v getVariable ["rds_blinker_right",false]))then{
					_v setVariable ["rds_blinker_right",true,true];
					_v setVariable ["rds_blinker_left",false,true];
					_v setVariable ["rds_blinker_emr",false,true];
					_v spawn {
						while{_this getVariable "rds_blinker_right"}do
						{
							_this animateDoor ["blinker_R",1];
							sleep 0.4;
							_this animateDoor ["blinker_R",0];
							sleep 0.4;
							if(!alive _this)exitWith{};
						};
					};
				}else{
					_v setVariable ["rds_blinker_right",false,true];
				};
				sleep 0.5;
			};
			if(inputAction "CycleThrownItems" > 0)then{
				if(not(_v getVariable ["rds_blinker_emr",false]))then{
					_v setVariable ["rds_blinker_emr",true,true];
					_v setVariable ["rds_blinker_right",false,true];
					_v setVariable ["rds_blinker_left",false,true];
					_v spawn {
						while{_this getVariable "rds_blinker_emr"}do
						{
							_this animateDoor ["blinker_R",1];
							_this animateDoor ["blinker_L",1];
							sleep 0.4;
							_this animateDoor ["blinker_R",0];
							_this animateDoor ["blinker_L",0];
							sleep 0.4;
							if(!alive _this)exitWith{};
						};
					};
				}else{
					_v setVariable ["rds_blinker_emr",false,true];
				};
				sleep 0.5;
			};
		};
		sleep 0.01;
	};
	//player globalChat "definitywny koniec";
	uiNameSpace setVariable ["RDS_Car_Ctrl",displayNull];
};