/*
	vehicle lights toggles
	i:
		_v - vehicle
		_m - mode, 0- main lights, 1- cabin lights
	a: reyhard
*/

params["_v","_m"];

if(_m isEqualTo 0)then{
	if(_v animationPhase "longlights_hide" > 0)then{
		_v animate ["longlights_hide",0,true];
		_v animate ["shortlights_hide",1,true];
	}else{
		if(_v animationPhase "lights_hide" > 0)then{
			_v animate ["longlights_hide",1,true];
			_v animate ["lights_hide",0,true];
		}else{
			if(_v animationPhase "cabinlights_hide" == 1)then{
				_v animate ["longlights_hide",1,true];
				_v animate ["shortlights_hide",0,true];
				_v animate ["lights_hide",0,true];
			}else{
				_v animate ["shortlights_hide",0,true];
				_v animate ["lights_hide",1,true];
			};
		};
	};
}else{
	_v animate ["cabinlights_hide",(1-(_v animationPhase "cabinlights_hide")),true];
};