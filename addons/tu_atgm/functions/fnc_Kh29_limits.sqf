#define __array getArray(configFile>>"cfgVehicles">>_vType>>"tu_atgm_limits")

#define __dsp (uiNamespace getVariable "ACE_Kh29Cursor")
#define __ctrl (__dsp displayCtrl 1)
#define __ctrl2 (__dsp displayCtrl 2)
#define __ctrl3 (__dsp displayCtrl 3)

private 
[
	"_vectorDir","_vectorUp",
	"_vectorM","_worldDirM","_worldUpM",
	"_outputMH","_outputMV","_outputM","_output",
	"_limitArray","_limitS","_limitN","_limitW","_limitE",
	"_limitsHR","_limitsVR",
	"_exceeded","_vectorText","_outputText","_tgt","_pos","_vector",
	"_cursorpos","_xoff","_yoff","_w","_h","_p","_k","_dist","_typeoftgt",
	"_tof","_d","_tof1",
	"_prevtime","_prevshaketime","_scale","_txt","_tti","_mis","_tofarray","_dz"
];

params["_vehicle", "_vType"];


_limitArray = __array;
_limitS = _limitArray select 0;
_limitN = _limitArray select 1;
_limitW = _limitArray select 2;
_limitE = _limitArray select 3;

13538 cutRsc ["ACE_Kh29Cursor", "PLAIN",0];

_w = 0.09*safezoneH*0.749351;
_h = 0.09*safezoneH;
_xoff = _w/2;
_yoff = _h/2;
__ctrl ctrlsetposition [-10,-10,_w,_h];
__ctrl ctrlsettextcolor [1,1,0,1];
__ctrl ctrlcommit 0;

_p = ctrlposition __ctrl;
_k = 1.5*0.55/(getresolution select 5);
__ctrl2 ctrlsetposition [(_p select 0),(_p select 1)-0.04*SafezoneH,(_p select 2)/_k,0.03*SafezoneH/_k];
__ctrl2 ctrlsetscale _k;
__ctrl2 ctrlsettextcolor [1,1,0,1];
__ctrl2 ctrlcommit 0;

__ctrl3 ctrlsetposition [(_p select 0),(_p select 1)-0.04*SafezoneH,(_p select 2)/_k,0.03*SafezoneH/_k];
__ctrl3 ctrlsetscale _k;
__ctrl3 ctrlsettextcolor [1,1,0,1];
__ctrl3 ctrlcommit 0;

_tgt = _vehicle getVariable "tu_atgm_laserObject";
_t = getposASL _tgt;
_typeoftgt = typeOf _tgt;
_prevtime = time - 1;
_prevshaketime = time;
_dz = 0.01;
_tof1 = -300;

while {!isNil {_vehicle getVariable "tu_atgm_tracking"} && {alive _tgt} && {alive _vehicle}} do {

	_tgt = _vehicle getVariable "tu_atgm_laserObject";

	if (time - _prevshaketime > 5) then //need to move target at least once every 10 sec or it is deleted by the engine
	{
		_prevshaketime = time;
		_t = getposASL _tgt;
		_tgt setposASL [_t select 0,_t select 1,(_t select 2)+_dz];
		_dz = -_dz;
	};
	if (time - _prevtime > 0.5) then //limits calculation
	{
		_t = getposASL _tgt;
		_prevtime = time;

		_vectorDir = vectorDir _vehicle;
		_vectorUp = vectorUp _vehicle;
		_pos = getposASL _vehicle;

		//vec from aircraft nose to target, magnitude 1
		_vector = [-(_pos select 0)-4*(_vectordir select 0)+(_t select 0),-(_pos select 1)-4*(_vectordir select 1)+(_t select 1),-(_pos select 2)-4*(_vectordir select 2)+(_t select 2)] call tu_atgm_fnc_unitVector;
		_vectorM = [_vector, _vectorDir, _vectorUp] call tu_atgm_fnc_mat_turnvecdirup;

		_output = _vector;

		_vectorMH = (_vectorM select 0) atan2 (_vectorM select 1);
		_vectorMV = (_vectorM select 2) atan2 1;

		_outputMH = (_vectorMH max _limitW) min _limitE;
		_outputMV = (_vectorMV max _limitS) min _limitN;

		if (_outputMH != _vectorMH || {_outputMV != _vectorMV}) then
		{	// Limitation box is always vertical ATM.  I guess that elipse would be correct but even more restrictive.
			_R = [0,_outputMV,_outputMH] call tu_atgm_mat_buildRotationMatrix;
			_output = [_vectorDir, _R] call tu_atgm_mat_applyRotation;
			_vehicle setVariable ["tu_atgm_tracking",nil];
		};

		_vectorText = format ["%1°H %2°V",round (_vectorMH), round (_vectorMV)];
		_outputText = format ["%1°H %2°V",round (_outputMH), round (_outputMV)];

		//[_output,_exceeded,_outputText,_vectorText]
		hintSilent format ["Отклонение: %1",_outputText];
	};
	_p = getposATL _tgt;
	if (surfaceisWater [_p select 0,_p select 1]) then {_p = getposASL _tgt};
	_p = worldtoscreen _p;
	if (count _p == 2 && {player in _vehicle}) then //maintaining cursor on target
	{
		_scale = 0.1*round(1.8/((call cba_fnc_getfov) select 0));
		
		__ctrl ctrlsetposition [(_p select 0)-_xoff*_scale,(_p select 1)-_yoff*_scale];
		__ctrl ctrlsetscale _scale;
		__ctrl ctrlcommit 0;

		__ctrl2 ctrlsetposition [(_p select 0)-_xoff*_scale,(_p select 1)-_yoff*_scale-0.02*SafezoneH*_scale];
		_txt = (0.1*round((_tgt distance _vehicle)/100));
		_txt = if (_txt mod 1 == 0) then {(str _txt) + ".0"} else {str _txt};
		__ctrl2 ctrlsettext _txt;
		__ctrl2 ctrlsetscale _scale*_k;
		__ctrl2 ctrlcommit 0;

		_mis = _vehicle getVariable "tu_atgm_curmis";
		if !(isNil "_mis") then  // time till impact
		{
			if !(isNull _mis) then
			{
				_dist = _tgt distance _mis;
				//_spd = ((velocity _mis) call ACE_fnc_magnitude) max 450;
				_d = round ((_vehicle getVariable "tu_atgm_launchpos") distance (getpos _mis));
				_tof = 0.1 max (0.1*round (10*(time-(_vehicle getVariable "tu_atgm_launchtime"))));
				_spd = (_d/_tof) max 420;
				_tti = 0.1*round(10*_dist/_spd);
				_txt = if (_tti mod 1 == 0) then {str _tti + ".0s"} else {str _tti + "s"};
				__ctrl3 ctrlsetposition [(_p select 0)-_xoff*_scale,(_p select 1)+ _yoff*_scale -0.01*SafezoneH*_scale ];
				__ctrl3 ctrlsettext _txt;
				__ctrl3 ctrlsetscale _scale*_k;
				__ctrl3 ctrlcommit 0;
			} else
			{
				_vehicle setVariable ["tu_atgm_curmis",nil];
				_vehicle setVariable ["tu_atgm_launchtime",nil];
				__ctrl3 ctrlsettext "";
				__ctrl3 ctrlcommit 0;
			};
		};
	} else
	{
		__ctrl ctrlsetposition [-10,-10];
		__ctrl ctrlcommit 0;
		__ctrl2 ctrlsetposition [-10,-10];
		__ctrl2 ctrlcommit 0;
		__ctrl3 ctrlsetposition [-10,-10];
		__ctrl3 ctrlcommit 0;
	};
	sleep 0.01;
};
hintSilent "ЛЦУ отключен";

deletevehicle _tgt;
_vehicle setVariable ["tu_atgm_laserObject",nil];
_vehicle setVariable ["tu_atgm_tracking",nil];
if !(isNil {(_vehicle getVariable "tu_atgm_Kh29_feh")}) then {
	_vehicle removeEventhandler ["fired",_vehicle getVariable "tu_atgm_Kh29_feh"];
	_vehicle setVariable ["tu_atgm_Kh29_feh",nil];
};
13538 cutRsc ["Default", "PLAIN",0];