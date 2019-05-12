private ["_v","_particle","_vector","_ejectWorldPos","_ejectWorldDir","_shposmem1","_shposmem2"];

if ((_this select 4) isKindOf 'M_Titan_AT') then {
	_v = _this select 0;

	// _V animateDoor ["recoil_source",1,true];
	// _V animateDoor ["recoil_source",0];
};
if ((_this select 4) isKindOf 'ShellBase') then {
	_v = _this select 0;

	// _V animateDoor ["recoil_source",1,true];
	// _V animateDoor ["recoil_source",0];
	sleep 0.1;
	//5 minutes timeout - in case vehicle is destroyed or whatever
	_timeOut=time+300;

	private _magAnim= "reload_handler";

	waitUntil { (( (_v animationPhase _magAnim)< 0.98) OR ( time>_timeOut) ) };

	if(time>_timeOut)exitWith{hint "timeout"};

	if((_v animationPhase "reload_handler") isEqualTo 0)then{
		_magAnim ="reload_handler_magazine";
	};
	waitUntil {(_v animationPhase _magAnim)< 0.87};
	if(!alive _v)exitWith{};
	//hint format["%1 %2",_v animationPhase _magAnim,_magAnim];
	//autoloader sets gun at angle of 3 degrees
	//source: http://fofanov.armor.kiev.ua/Tanks/EQP/al-72.html
	_v animate ["RHS_T72_autoloader",-(_v animationPhase "maingun")+0.05];

	waitUntil {(_v animationPhase _magAnim)< 0.37};
	if(!alive _v)exitWith{};
	_p3d = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_125mm";

	_shposmem1 = _v selectionPosition ["ejector_pos", "memory"];
	_shposmem2 = _v selectionPosition ["ejector_dir", "memory"];

	_ejectWorldPos = _v modelToWorldVisual _shposmem1;
	_ejectWorldDir = _v modelToWorldVisual _shposmem2;

	_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*29, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*29, 4+random 1];

	_particle = "#particlesource" createVehicleLocal _ejectWorldPos;
	_particle setParticleClass "RHS_tank_Catridge";
	_particle setParticleParams
	[
		[_p3d, 1, 0, 1], //shape name
		"", //animation name
	 	"SpaceObject", //type
	  	1, 42.5, //timer period & life time
	   [0, 0, 0], //position
	   _vector, //moveVelocity
	   1, 6, 1, 0, //roation velocity, weight, volume, rubbing
	   [1, 1], //size
	   [[0.9,0.9,0.9,1]], //color
	   [1000], //animationPhase (animation speed in config)
	   0.01, //randomdirection period
	   0.05, //random direction intensity
	    "", //onTimer
	    "", //befor destory
	    _ejectWorldDir, //object
	    0, //angle
	    true, //on surface
	    0.3 //bounce on surface
	];
	_particle setDropInterval 60;
	waitUntil {(_v animationPhase _magAnim)< 0.09};

	_v animate ["RHS_T72_autoloader",0];
	deleteVehicle _particle;

};