/*
	car alaram script
	a: reyhard
*/

params["_v"];

private _i = 0;
private _i2 = time+2;
private _delete= false;
private _agent = objNull;

// set global variable
_v setVariable ["RDS_CarAlarm",true,true];

// create invisible ai unit if there is no driver
if(isnull (driver _v ))then{

	_agent = createAgent ["VirtualMan_F", [0,0,0], [], 0, "FORM"];
	_agent setBehaviour "careless";
	_agent moveInDriver _v;
	_delete = true;

};

_v say3D "AlarmCar";

While {_i < 42} Do {
	If (time >= _i2) Then {_v say3D "AlarmCar";_i2=time+2};

	(driver _v) setBehaviour "Careless";
	(driver _v) action ["lightOn", _v];
	_v animateDoor ["blinker_R",1];
	_v animateDoor ["blinker_L",1];
	sleep 0.5;
	(driver _v) setBehaviour "Combat";
	(driver _v) action ["lightOff", _v];
	_v animateDoor ["blinker_R",0];
	_v animateDoor ["blinker_L",0];
	sleep 0.5;

	// exit if vehicle is destroyed
	if(!alive _v)exitWith{};
	_i = _i + 1;
};

if(_delete)then{deleteVehicle _agent};
_v setVariable ["RDS_CarAlarm",false,true];