params["_v","_pos"];


if(_v getVariable ["rds_civ_doors",false])exitWith{
	{_v animateDoor [_x,1]}foreach ["doors_1","doors_2","doors_3"];
};

if(_pos == "cargo")then
{
	if(_v doorPhase "Doors_1" !=0)then
	{
		[_v,"Doors_1",4.5] spawn rds_fnc_doorHandler;
	};
	if(_v doorPhase "Doors_2" !=0)then
	{
		[_v,"Doors_2",4.5] spawn rds_fnc_doorHandler;
	};
	if(_v doorPhase "Doors_3" !=0)then
	{
		[_v,"Doors_3",4.5] spawn rds_fnc_doorHandler;
	};
};