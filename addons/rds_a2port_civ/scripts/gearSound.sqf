[_this select 0] spawn {
	params["_v"];

	while{isEngineOn _v}do
	{
		private _g = _v animationPhase "shiftChange1";
		waitUntil {sleep 1;_g != _v animationPhase "shiftChange1" OR (not(isEngineOn _v))};
		if(_v doorPhase "gearbox" == 1)then{_v animateDoor ["gearbox",0]}else{_v animateDoor ["gearbox",1]};
		sleep 2.5;
	};
};