/*
	car alaram detection script

	i: firedNear EH

	a: reyhard
*/

params["_v","","_d","","","","_a"];

if(
	(locked _v > 1) &&
	{!(_v getVariable ["rds_carAlarm",false])}
)then{
	if(_a isKindOf "ShellCore")then{
		private _hit = ((getNumber (configFile >> "cfgAmmo" >> _a >> "hit")) min 300)/10;
		if(_hit/_d > 0.65)then{
			[_v] spawn rds_fnc_carAlarm;
		};
	};
};