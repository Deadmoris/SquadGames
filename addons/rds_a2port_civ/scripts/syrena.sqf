/*
	siren handler
	i:
		_v - vehicle
		_m - mode, used for VG/Eden handling

	a: reyhard
*/


params["_v",["_m",-1]];

if(is3DEN)exitWith{};

if(_m>0)then{
	switch(_m)do{
		case 0: {_v setVariable ["rds_siren",true,true]};
		case 1: {_v setVariable ["rds_siren",false,true]};
	};
};


if(_v getVariable ["rds_siren",false])exitWith{
	_v setVariable ["rds_siren",false,true];
	if(_v animationPhase "lights_hide" > 0 )then{_v setPilotLight false;_v animate ["lights_hide",0,true];_v animate ["longlights_hide",1,true];};
	_v animate ["majak_hide",1];

};

_v setVariable ["rds_siren",true,true];

if(!(isLightOn _v))then{
	_v animate ["lights_hide",1,true];
	_v animate ["longlights_hide",0,true];
	sleep 0.1;
};

_v setPilotLight true;
_v animate ["majak_hide",0];


while{_v getVariable "rds_siren" AND (alive _v)}do{
	if(_v getVariable ["rds_siren_sound",true])then{playSound3D ["rds_a2port_civ\scripts\police_siren.ogg", _v, false, getPosASL _v, 1, 1, 400]};
	sleep 2.521;
};
