/*
	workaround for non working "pedals" animation source
	if thurst bigger than 0 is detected then animate vehicle custom pedal source up to some inifitive value

	i: 	_v - vehicle
		_s - engine state [bool]
	a: reyhard
*/

params["_v","_s"];

// exit if engine is turned off
if(!_s)exitWith{};

//systemChat "init";
while{isEngineOn _v}do{
	if((_v animationPhase "throttle_indicator" > 0) && {speed _v > 0})then{
		_v animateSource ["pedaly",9999999];
		//systemChat format["animoewanie  %1",time];
		waitUntil {((_v animationPhase "throttle_indicator") isEqualTo 0) OR (!isEngineOn _v) OR (speed _v < 0)};
		//systemChat format["stop  %1",time];
		_v animateSource ["pedaly",_v animationSourcePhase "pedaly",true];
	};
	sleep 0.01;
	//hint format["%1",_v animationPhase "throttle_indicator"];
};
//systemChat "koniec";