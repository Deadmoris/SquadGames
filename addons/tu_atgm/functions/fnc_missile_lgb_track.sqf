#define MIN_OPT_SPEED 100
private ["_curVelocity", "_tdif", "_totalVelocity", "_headingPitch", "_marker", "_vectorTo", "_polarTo", "_dir",
		 "_amount", "_negative", "_positive", "_offset", "_elevationOffset", "_orientation", "_laserCode", "_targetCode"];

_params = _this select 0;
		 
_bomb 			= _params select 0;
_laserCode 		= _params select 1;
_lastTime 		= _params select 2;
_lastLDSearch 	= _params select 3;
_currentTarget	= _params select 4;

if(!alive _bomb) exitWith {
	[(_this select 1)] call CBA_fnc_removePerFrameHandler;
};

_tdif = (time-_lastTime);
_lastTime = time;

_curVelocity = velocity _bomb;
_totalVelocity = sqrt((_curVelocity select 0)^2 + (_curVelocity select 1)^2 + (_curVelocity select 2)^2);
_headingPitch = _curVelocity call CBA_fnc_vect2polar;

_laserCode = _bomb getVariable "ace_laser_code";
if(isNil "_laserCode") then {
	_laserCode = 1111;
	_bomb setVariable ["ace_laser_code", _laserCode];
};

if(time-_lastLDsearch > 1.5) then {
	_lastLDsearch = time;
	_found = false;
	_results = [_bomb, _laserCode, 30, _curVelocity] call tu_atgm_fnc_findLaserDesignator;
	_found = _results select 0;
	if(_found) then {
		_currentTarget = _results select 1;
	} else {
		_currentTarget = _bomb;
	};
};

_doHandoff = false; 
if(_currentTarget != _bomb) then {
	_doHandoff = [_bomb, _currentTarget, "tu_atgm_fnc_missile_lgb_track", _params, 0, 0.01] call tu_atgm_fnc_handOffGuidance;
};

if(_doHandoff) exitWith {
	[(_this select 1)] call cba_fnc_removePerFrameHandler;
	//[_bomb] call ace_sys_frag_fnc_removeTrack;
	deleteVehicle _bomb;
};

if(_currentTarget != _bomb) then {
	_vectorTo = ([(getPosASL _bomb), ([_currentTarget] call tu_atgm_fnc_getPosASL)] call tu_atgm_fnc_vectorFromXToY);
	
	_polarTo = _vectorTo call CBA_fnc_vect2polar;
	
	_dir = _polarTo select 1;
	
	_dir = _dir - (_headingPitch select 1);
	if (_dir < 0) then {_dir = _dir + 360};
	if (_dir > 360) then {_dir = _dir - 360};
	
	_amount = 0.5*accTime;
	
	_positive = (_amount+(_amount*_tdif));
	_negative = -(_positive);
	
	_offset = 0;
	if(_dir > 180) then {
		_offset = _negative*1;
	} else {
		_offset = _positive*1;
	};
	
	_elevationOffset = 0;
	if((_curVelocity select 2) <= 0) then {
		if((_polarTo select 2) > ((_headingPitch select 2) max -89)) then {
			_elevationOffset = _positive*1;
		} else {
			if((_polarTo select 2) < ((_headingPitch select 2) max -89)) then {
				_elevationOffset = _negative*1;
			};
		};
	};
	_orientation = (velocity _bomb) call tu_atgm_fnc_unitVector;
	_orientation = _orientation call CBA_fnc_vect2polar;
	if(((_orientation select 2) + _elevationOffset) < -89) then {
		_elevationOffset = 0;
		_offset = 0;
	};
	
	_offset = _offset*((((_totalVelocity)/MIN_OPT_SPEED) min 1) max 0);
	_elevationOffset = _elevationOffset*((((_totalVelocity)/MIN_OPT_SPEED) min 1) max 0);
	

	if(_offset != 0 && {_elevationOffset != 0}) then {
		private ["_curPitch", "_newDir", "_curVelocity", "_totalVelocity", "_vec"];
		_curPitch = (_bomb call BIS_fnc_getPitchBank);
		
		_newDir = (getDir _bomb) + _offset;
		if(_newDir < 0) then {
			_newDir = 360 + _newDir;
		};
		if(_newDir >= 360) then {
			_newDir = _newDir mod 360;
		};
		
		_curVelocity = velocity _bomb;
		_totalVelocity = sqrt((_curVelocity select 0)^2 + (_curVelocity select 1)^2 + (_curVelocity select 2)^2);
		
		_vec = [_totalVelocity, _newDir, (_curPitch select 0)] call CBA_fnc_polar2vect;
		
		_bomb setVectorDir _vec;
		
		[_bomb, ((_curPitch select 0) + _elevationOffset), 0] call BIS_fnc_setPitchBank;
	};
};

_params set[2, _lastTime];
_params set[3, _lastLDSearch];
_params set[4, _currentTarget];