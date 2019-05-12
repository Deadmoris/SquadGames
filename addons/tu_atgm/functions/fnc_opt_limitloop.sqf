#define __MainTurret configFile >> "CfgVehicles" >> _vType >> "Turrets" >> "MainTurret"
private ["_vehicle","_clear","_vehicle","_vType","_sleep_time"];

if (!isDedicated) then
{
	while {true} do
	{
		if (isNull player) then
		{
			waitUntil {sleep 5; !isNull player};
		};

		_vehicle 	= vehicle player;
		_sleep_time = 5;
		
		if (_vehicle != player) then
		{
			_vType = typeOf _vehicle;
			if (getNumber (__MainTurret >> "tu_atgm_limitsOn") > 0) then
			{
				if ((player in [driver _vehicle, gunner _vehicle]) && {(isNil {_vehicle getVariable "tu_atgm_missile_flying"})}) then
				{
					_sleep_time = 0.125;
					_guidanceDir = [_vehicle, _vType, _vehicle weaponDirection (getText (__MainTurret >> "tu_atgm_tracker")),false,__MainTurret] call tu_atgm_fnc_opt_limits;

					if (_guidanceDir select 1) then
					{
						_vehicle setVariable ["tu_atgm_exceeded",1];
					}
					else
					{
						_vehicle setVariable ["tu_atgm_exceeded",nil];
					};
				};
			};
		};
		
		sleep _sleep_time;
	};
};
