
params ["_plane"];

private ["_MaxIntensity","_Boost","_Intensity","_looptime","_maxspeed","_fueldrag"];

_MaxIntensity = 1;
_Intensity = 0.5;
_Boost = 0.6;
_fueldrag = 3500;
_looptime = 0.1;
_maxspeed = 1550;

while {(alive _plane) && {_plane getVariable ["RHS_Afterburner_On", false]}} do {

	if (_plane animationPhase "afterburner_l_hide" == 0 && {speed _plane > 40}) then 
	{

		_plane animateSource ["afterburner_source",1]; 
		sleep 0.5;

		while {_plane getVariable "RHS_Afterburner_On"} do {
			if (((getPos _plane) select 2)<5) then {_Boost = 0.2;} else {_Boost = 0.6;};
			if (_Intensity < _MaxIntensity) then {_Intensity = _Intensity + 0.4*(35*_looptime)};
			if ((speed _plane) < _maxspeed) then {
				_plane setVelocity [(velocity _plane select 0)+((vectorDir _plane) select 0)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 1)+((vectordir _plane) select 1)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _plane select 2)+((vectordir _plane) select 2)*((_Boost*_Intensity/2)*(15*_looptime))]
			};
			if (fuel _plane > 0) then {_plane setFuel ((fuel _plane)-((1/_fueldrag)*(3*_looptime)))};	
			sleep 0.1;
		};
		_plane animateSource ["afterburner_source",0]; 
		sleep 0.5;
		
	};
	
	if (isNull _plane) then {
		// Remove key events
		_player = call RHS_fnc_findPlayer;
		if (hasInterface) then {
			(findDisplay 46) displayRemoveEventHandler ["keydown", _player getVariable ["RHS_Afterburner_KeyDown", -1]];
			(findDisplay 46) displayRemoveEventHandler ["keyup", _player getVariable ["RHS_Afterburner_KeyUp", -1]];
		};
		_player setVariable ["RHS_Afterburner_KeyDown", -1];
		_player setVariable ["RHS_Afterburner_KeyUp", -1];	
	};
	sleep 0.1;
};