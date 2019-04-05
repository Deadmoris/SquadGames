#include "../addon.hpp"
#define SYNCINTERVAL 10
#define TICKINTERVAL 0.5

params ["_duration",["_callback", {}, [{}]]];

if(isNil QGVAR(freezeTimeDuration)) then {
	GVAR(freezeTimeDuration) = _duration;
};
if(isNil QGVAR(freezeTimeElapsed)) then {
	GVAR(freezeTimeElapsed) = 0;
};
if(isNil QGVAR(freezeTime)) then {
	GVAR(freezeTime) = true;
};

if(isServer) then {
	publicVariable QGVAR(freezeTime);
	publicVariable QGVAR(freezeTimeElapsed);
	publicVariable QGVAR(freezeTimeDuration);
};

private _lastTick = diag_tickTime;
private _lastSync = diag_tickTime;
private _elapsed = GVAR(freezeTimeElapsed);

while { GVAR(freezeTime) && GVAR(freezeTimeElapsed) <= GVAR(freezeTimeDuration) } do {
	private _t = diag_tickTime;
	private _delta = _t - _lastTick;

	if(!GVAR(pauseMission)) then {
		GVAR(freezeTimeElapsed) = GVAR(freezeTimeElapsed) + _delta;

		if((_t - _lastSync) > SYNCINTERVAL) then {
			if(isServer) then {
				publicVariable QGVAR(freezeTimeElapsed);
				publicVariable QGVAR(freezeTimeDuration);
			};
			_lastSync = _t;							
		};

		[GVAR(freezeTimeElapsed) min  GVAR(freezeTimeDuration) , GVAR(freezeTimeDuration)] call _callback;
	};
	_lastTick = _t;
	uiSleep TICKINTERVAL;
};

if(isServer) then {
	GVAR(freezeTime) = false;
	publicVariable QGVAR(freezeTime);
};

