if (is3DEN) exitwith {};
waituntil {(time > 0)};

if (alive (_this select 0)) then
{
	if ((_this select 0) iskindof "CaManBase") then 
	{
		(_this select 0) addEventHandler ["Reloaded",
		{
			if (local (_this select 0)) then 
			{
				if ((_this select 1) == (primaryweapon (_this select 0))) then 
				{
					_boltaction_type = (getnumber(configfile >> "cfgweapons" >> (_this select 1) >> "vtn_boltaction"));
					if (_boltaction_type == 2) then 
					{
						_this call vtn_primaryweapon_pumpaction;
					}
					else
					{
						_this call Fn_Client_ChangeMagazine;
					};
				};
				
				if ((_this select 1) == (secondaryweapon (_this select 0))) then 
				{
					_this call Fn_Client_ChangeMagazine;
				};
			};
		}];
	
		(_this select 0) addMPEventHandler ["MPRespawn",
		{
			if (local (_this select 0)) then 
			{
				[(_this select 0)] spawn 
				{
					[[(_this select 0)],"X_Respawn",true,true] call BIS_fnc_MP;
				};
			};
		}];
	
		(_this select 0) addEventHandler ["WeaponAssembled",
		{
			_this call vtn_staticweapon_assemble;
		}];
	
		(_this select 0) addEventHandler ["GetOutMan",
		{
			_this call vtn_staticweapon_getout;
		}];
	
		(_this select 0) addEventHandler ["GetInMan",
		{
			_this call vtn_vehicle_actions_set;
		}];
	}
	else
	{
		[objnull,0,(_this select 0),[0]] spawn vtn_vehicle_actions_set;
	};

	if (local (_this select 0)) then 
	{
		if (isplayer (_this select 0)) then 
		{
			vtn_inventory_operations_allowed = true;
			
			vtn_weaponcontrol_magazine = ((weaponstate (_this select 0)) select 3);
			vtn_weaponcontrol_allmagazines = (magazines (_this select 0));
			vtn_weaponcontrol_currentthrowable = currentthrowable (_this select 0);
						
			[] spawn vtn_weaponcontrol_statusmanager;
		};
	};
};