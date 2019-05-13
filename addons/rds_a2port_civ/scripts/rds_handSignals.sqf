/*
	bike hand signals script hooked to unitInfo UI onLoad handler
	default controls:
		evasiveLeft [Q] - hand left
		evasiveRight [E] - hand right

	a: reyhard
*/

if(isNull (uiNamespace getVariable ["RDS_Bike_Ctrl",displayNull]) )then
{
	disableSerialization;
	uiNameSpace setVariable ["RDS_Bike_Ctrl",_this select 0];

	private _getAnim = {
		_anim = getText (configFile >> "cfgVehicles" >> typeof _this >> "DriverAction");
		_anim
	};

	// fix for some quirky behaviour of arma 3 ui
	// if another vehicle is spawned with same unitInfo type then local variable to handler vanishes, as a new ui detection is working.
	// yet, it doesn't trigger new onLoad EH
	// using uiNamespace variable & pointing directly to control with unique Id it's possible to bypass it
	while{not(isNull ((uiNamespace getVariable "RDS_Bike_Ctrl") displayCtrl 54329))}do
	{
		private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];
		private _v = vehicle _p;
		if(driver _v isEqualTo _p)then{
			if(inputAction "evasiveLeft" > 0)then{
				if(not(_v getVariable ["rds_blinker_left",false]))then{
					_v setVariable ["rds_blinker_left",true,true];
					_v setVariable ["rds_blinker_right",false,true];
					_p playMove format["%1_Left",_v call _getAnim];
				}else{
					_v setVariable ["rds_blinker_left",false,true];
					_p playMove (_v call _getAnim);
				};
				sleep 0.5;
			};
			if(inputAction "evasiveRight" > 0)then{
				if(not(_v getVariable ["rds_blinker_right",false]))then{
					_v setVariable ["rds_blinker_right",true,true];
					_v setVariable ["rds_blinker_left",false,true];
					_p playMove format["%1_Right",_v call _getAnim];
				}else{
					_v setVariable ["rds_blinker_right",false,true];
					_p playMove (_v call _getAnim);
				};
				sleep 0.5;
			};
		};
		sleep 0.01;
	};
	//player globalChat "definitywny koniec";
	uiNameSpace setVariable ["RDS_Bike_Ctrl",displayNull];
};