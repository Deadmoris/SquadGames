params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cRHST72FuncLoaded") then
	{
		cRHST72FuncLoaded = true;
		cRHST72AddonName  = "rhsafrf\addons\rhs_c_t72";

		cRHST72NumberPlaces = [9,10,11];			// Places for number
		cRHST72PlnSymPlaces = [12];					// Places for platoon symbol
		cRHST72HnrSymPlaces = [13];					// Places for honor symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

	private _class = typeOf _vehicle;

	//diag_log format ["Init running. Class: %1", _class];

	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_vehicle,
			_cfgParams
		] spawn rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};

	_vehicle lockTurret [[0,1],true];
	//player manned tanks starts with unloaded main gun
	_this spawn {
		params ["_vehicle"];

		sleep 0.01;
		if( isPlayer (gunner _vehicle) )then{
			_vehicle addMagazine ["rhs_mag_3bm9_10",0];
			_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_3bm9_10"];
			_vehicle removeMagazine "rhs_mag_3bm9_10";
		};
	}; 
	
};
