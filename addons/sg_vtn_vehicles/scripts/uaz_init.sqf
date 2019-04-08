vtn_uaz_doors_manager = compile preprocessFile "\sg_vtn_vehicles\scripts\doors.sqf";
vtn_uaz_doors_preload = compile preprocessFile "\sg_vtn_vehicles\scripts\preload.sqf";

if ((count (crew (_this select 0))) > 0) then 
{
	{
		[(_this select 0),_x] spawn vtn_uaz_doors_preload;
		
	}ForEach (crew (_this select 0));
};

(_this select 0) addEventHandler ["GetIn", {_this spawn vtn_uaz_doors_manager;}];