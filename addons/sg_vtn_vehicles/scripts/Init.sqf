private ["_n","_state"];

if (alive _this) then 
{
	_vehicle = _this;
	_vehicletype = (typeOf _this);
	
	if (
		
		(_vehicletype in ["B_Soldier_VR_F","O_Soldier_VR_F","I_Soldier_VR_F","C_Soldier_VR_F"])
		and((getText(missionConfigFile >> "author")) == "Bohemia Interactive")
		and((toLower(missionname))!="arsenal")
		and((toLower(worldname))=="vr")
				
	   ) exitWith {};
	
	if (isClass(configFile >> "CfgVehicles" >> (_vehicletype) >> "VTN_EEH_INIT")) then 
	{
		_n = 0;
		_state = 0;
			
		_maxN = (count(configFile >> "CfgVehicles" >> (_vehicletype) >> "VTN_EEH_INIT"));
		While {(_n < _maxN)} do 
		{
			if (isText(((configFile >> "CfgVehicles" >> (_vehicletype) >> "VTN_EEH_INIT")select _n))) then 
			{
				_scriptline = (getText(((configFile >> "CfgVehicles" >> (_vehicletype) >> "VTN_EEH_INIT")select _n)));
				_n = _n + 1;
				
				[_vehicle] spawn (compile _scriptline);
			}
			else
			{
				_state = 1;
			};
		};
	};

};