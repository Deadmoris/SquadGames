#define __cfg getNumber (_turret >> "tu_atgm_limitsOn")

#define __launcharray_ok isArray (_turret >> "tu_atgm_limits")
#define __trackarray_ok isArray (_turret >> "tu_atgm_tracklimits")

#define __launcharray getArray (_turret >> "tu_atgm_limits")
#define __trackarray getArray (_turret >> "tu_atgm_tracklimits")

private
[
	"_startVectors",
	"_vectorDir","_vectorUp",
	"_vectorWM","_worldDirM","_worldUpM",
	"_outputMH","_outputMV","_outputM","_output",
	"_limitArray","_limitS","_limitN","_limitW","_limitE",
	"_limitsHR","_limitsVR",
	"_exceeded","_vectorText","_outputText"
];

params ["_vehicle", "_vType", "_vector", "_track", "_turret"];

_vectorDir = vectorDir _vehicle;
_vectorUp = vectorUp _vehicle;

_vectorWM = [_vector, _vectorDir, _vectorUp] call tu_atgm_fnc_mat_turnvecdirup;

_vectorWMH = (_vectorWM select 0) atan2 (_vectorWM select 1);
_vectorWMV = (_vectorWM select 2) atan2 1;

_exceeded = false;

if ((!_track && {__launcharray_ok}) || {(_track && {__trackarray_ok})}) then {
	if (_track) then {
		_startVectors = _this select 5;
		_startVectorDir = _startVectors select 0;
		_startVectorUp = _startVectors select 1;

		_limitArray = __trackarray;
		_limitT = _limitArray select 0;
		_limitB = _limitArray select 1;

		_vectorDirVsOldDir = abs(acos([_vectorDir,_startVectorDir] call tu_atgm_fnc_dotProduct));
		_vectorUpVsOldUp = abs(acos([_vectorUp,_startVectorUp] call tu_atgm_fnc_dotProduct));

		if ((_vectorDirVsOldDir > _limitT) || {(_vectorUpVsOldUp > _limitB)}) then {
			_exceeded = true;
		};

	} else {
		_limitArray = __launcharray;
		_limitT = _limitArray select 0;
		_limitB = _limitArray select 1;

		_vectorVsVectorDir = abs(acos([_vector,_vectorDir] call tu_atgm_fnc_dotProduct));
		_vectorUpVsWorldUp = abs(acos([_vectorUp,[0,0,1]] call tu_atgm_fnc_dotProduct));

		if ((_vectorVsVectorDir > _limitT) || (_vectorUpVsWorldUp > _limitB)) then {
			_exceeded = true;
		};

	};
};

[_vector,_exceeded," "," "]
