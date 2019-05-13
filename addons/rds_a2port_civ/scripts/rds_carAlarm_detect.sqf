/*
	car alaram script

	i: eh hit & epeContactStart

	a: reyhard
*/

params["_v"];

if(
	(locked _v > 1) &&
	{!(_v getVariable ["rds_carAlarm",false])}
)then{
	[_v] spawn rds_fnc_carAlarm;
};
