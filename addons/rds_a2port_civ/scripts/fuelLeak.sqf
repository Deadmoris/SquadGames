/*
	simple fuel leak script upon damage
	i: Dammaged EH

	a: reyhard
*/

params["_v","_selection","_f"];

if(!local _v)exitWith{};
if(_selection == "palivo")then{
	[_v,_f] spawn {
		params["_v","_f"];
		private _d =_v getHitPointDamage "HITfuel";
		while{_d<=_v getHitPointDamage "HITfuel" && (alive _v)}do{
			_v setFuel ((fuel _v) - (_f/350));		sleep 0.5;
		};
	};
};