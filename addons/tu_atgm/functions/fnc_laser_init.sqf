private ["_defaultCode", "_temp"];

_defaultCode = 1111;
params["_laserTarget"];

#define __TRACKINTERVAL 0.2

if (local _laserTarget) then {
	ace_laser_object = _laserTarget;
	_laserTarget setVariable ["ace_pos", getPosASL _laserTarget, true];
	_laserTarget spawn {
		if (isDedicated) then {
			while {alive _this} do {
				_pos = getPosASL _this;

				if (str(_pos) != str(_this getVariable "ace_pos")) then {
					_this setVariable ["ace_pos", _pos, true];
				};


				sleep __TRACKINTERVAL;
			};
		} else {
			_handle = [
				{
					_pos = getPosASL _laserTarget;

					if (str(_pos) != str(_laserTarget getVariable "ace_pos")) then {
						_laserTarget setVariable ["ace_pos", _pos, true];
					};
				},
				[_this],
				__TRACKINTERVAL,
				{
					_laserTarget = _this select 0;
				},
				{
				},
				{
					true
				},
				{isNull _laserTarget},
				[
					"_laserTarget"
				]
			] call tu_common_fnc_addPerFrameHandlerLogic;

			_handle;
		};
	};
};

if (isNil "ACE_LASERTARGET_ARRAY_INITIALIZED") then {
        ACE_LASERTARGET_ARRAY_INITIALIZED = true;
        ACE_LASERTARGET_ARRAY = [];
};

_laserTarget setVariable ["ace_laser_code", _defaultCode, false];

_temp = +ACE_LASERTARGET_ARRAY;
ACE_LASERTARGET_ARRAY = [_laserTarget];
{
    if (!(isNull _x)) then {
		ACE_LASERTARGET_ARRAY set [count ACE_LASERTARGET_ARRAY, _x];
	};
} forEach _temp;
