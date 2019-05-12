params["_v","_a","_f"];

if(driver _v != (call rhs_fnc_findPlayer))exitWith{};

// Исключаем пуски с нерадарной техники и пуски нерадарных ракет
if !(getNumber (configFile >> "cfgVehicles" >> typeOf _f >> "radarType") == 4) exitWith{};
if !(getNumber (configFile >> "cfgAmmo" >> _a >> "weaponLockSystem") == 8) exitWith{};

private _h = [];

_d = _v getRelDir _f;
if( (_d>0 AND _d < 5) or (_d>355 AND _d <360) )then{_h pushback "12";};
if( (_d>5 AND _d < 20)  )then{_h pushback "12";};
if( (_d>20 AND _d < 40)  )then{_h pushback "3";};
if( (_d>40 AND _d < 75)  )then{_h pushback "3";};
if( (_d>75 AND _d < 110)  )then{_h pushback "3";};
if( (_d>110 AND _d < 180)  )then{_h pushback "6";};
if( (_d>180 AND _d < 260)  )then{_h pushback "6";};
if( (_d>260 AND _d < 290)  )then{_h pushback "9";};
if( (_d>290 AND _d < 310)  )then{_h pushback "9";};
if( (_d>310 AND _d < 340)  )then{_h pushback "12";};
if( (_d>340 AND _d < 355)  )then{_h pushback "12";};

if((getPosATL _v select 2) > (getPosATL _f select 2))then{_h pushback "L";}else{_h pushback "H";};

_v setVariable ["rhs_rwr_incomingMissile",true];
_v animateSource ["rwr_lights_lock",0,true];
_v animateSource ["rwr_lights_lock",1];

private _missile = nearestObject [_f, _a];
if (isNull _missile) exitWith {};
private _missileArray = (_v getVariable ["rhs_rwr_detectedMissiles",[]]);
_missileArray pushback _missile;
_v setVariable ["rhs_rwr_detectedMissiles",_missileArray];

[_missile,_v] spawn {
	params["_missile","_v"];
	waitUntil {!alive _missile};
	private _missileArray = (_v getVariable ["rhs_rwr_detectedMissiles",[]]);
	_missileArray = _missileArray - [_missile];
	_v setVariable ["rhs_rwr_detectedMissiles",_missileArray];
};