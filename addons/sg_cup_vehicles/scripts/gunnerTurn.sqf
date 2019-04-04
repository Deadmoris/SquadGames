_suv = _this select 0;
_gunner = gunner _suv;
_mode = _this select 1;

if(_mode == "turnIn") then
{

	[-2,{_this switchMove "CUP_ArmoredSUV_GunnerTurnIn_PMC";},_gunner] call CBA_Fnc_GlobalExecute;

	_suv setVariable ["CUP_M134_Ammo",(_suv ammo (currentMuzzle _gunner)),true];
	_suv setVariable ["CUP_M134_Magazines",magazines _suv,true];
	
	_suv animate ["HideGun_01",1];
	_suv setVehicleAmmoDef 0;
	sleep 0.3;
	_suv animate ["HideGun_02",1];
	sleep 0.1;
	_suv animate ["HideGun_03",1];
	sleep 0.3;
	_suv animate ["HideGun_04",1];
	sleep 0.3;
	_suv animate ["CloseCover1",1];
	_suv animate ["CloseCover2",1];
	sleep 0.7;

} else { 

	[-2,{_this switchMove "CUP_ArmoredSUV_GunnerTurnOut_PMC";},_gunner] call CBA_Fnc_GlobalExecute;

	sleep 0.2;

	_suv animate ["CloseCover1",0];
	_suv animate ["CloseCover2",0];

	_suv animate ["HideGun_04",0];
	sleep 0.1;
	_suv animate ["HideGun_03",0];
	sleep 0.1;
	_suv animate ["HideGun_02",0];
	sleep 0.3;
	_suv animate ["HideGun_01",0];	
	sleep 0.3;

	_ammo = ((_suv getVariable ["CUP_M134_Ammo",0]) / 2000);
	_suv setVehicleAmmoDef _ammo; // miracle command
	_suv selectweapon "CUP_Vlmg_M134_veh";
	_mags = (_suv getVariable ["CUP_M134_Magazines",[]]);
	
	if(count _mags > 0) then 
	{
		_mags resize (count _mags - 1);
		{
				_suv addmagazine _x;
		} foreach _mags;
	};


};