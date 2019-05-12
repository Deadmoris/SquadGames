tu_atgm_fnc_opt_limitloop = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_limitloop.sqf";
tu_atgm_fnc_opt_limits = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_limits.sqf";
tu_atgm_fnc_mat_turnvecdirup = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_mat_turnvecdirup.sqf";
tu_atgm_fnc_laser_init = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_laser_init.sqf";
tu_atgm_fnc_fired = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Fired.sqf";
tu_atgm_fnc_missile_saclos = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_saclos.sqf";
tu_atgm_fnc_missile_saclos_bits = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_saclos_bits.sqf";
tu_atgm_fnc_opt_predictvect = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_predictvect.sqf";
tu_atgm_fnc_opt_losoffset = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_LOSoffset.sqf";
tu_atgm_fnc_opt_avg_wdir = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_avg_wdir.sqf";
tu_atgm_fnc_towsmoke = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_towsmoke.sqf";
tu_atgm_fnc_missile_saclos2 = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_saclos2.sqf";
tu_atgm_fnc_missile_saclos_bits2 = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_saclos_bits2.sqf";

tu_atgm_fnc_missile_lgb = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_lgb.sqf";
tu_atgm_fnc_missile_lgb_track = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_lgb_track.sqf";

tu_atgm_fnc_Kh29_Lase = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Kh29_Lase.sqf";
tu_atgm_fnc_Kh29_lasepfh = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Kh29_lasePFH.sqf";
tu_atgm_fnc_Kh29_Limits = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Kh29_limits.sqf";
tu_atgm_fnc_Kh29_keyPressed_lase = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Kh29_keypressed_lase.sqf";
tu_atgm_fnc_missile_Kh29 = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_Kh29.sqf";
tu_atgm_fnc_missile_Kh29_track = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_missile_Kh29_track.sqf";

tu_atgm_fnc_fnc_loop = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_loop.sqf";
tu_atgm_fnc_RFInit = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_rfinit.sqf";

tu_atgm_fnc_rfloop = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_rfloop.sqf";
//tu_atgm_fnc_Gunship_keypressed = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_Gunship_keypressed.sqf";
//tu_atgm_fnc_opt_laserloop = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_laserloop.sqf";
//tu_atgm_fnc_opt_laserloop_pfh = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_opt_laserloop_pfh.sqf";


tu_atgm_fnc_setsolution = compile preprocessFileLineNumbers "\tu_atgm\functions\fnc_setsolution.sqf";


//[] call tu_atgm_fnc_Gunship_keypressed;

/*
QGVAR = "tu_atgm_"
FUNC = tu_atgm_fnc_


*/

tu_common_fnc_blaHandler = {
    // All functions get _logic as _this param. Params inside _logic getVariable "params";
    (_this select 0) params ["_logic"];

    if (isNil "_logic") exitWith {
        // Remove handler
        [_logic getVariable "handle"] call CBA_fnc_removePerFrameHandler;
    };

    if (isNull _logic) exitWith {
        // Remove handler
        [_logic getVariable "handle"] call CBA_fnc_removePerFrameHandler;
    };

    // Deserialize
    private (_logic getVariable "private");
    { call _x } forEach (_logic getVariable "deserialize");

    // Check exit condition - Exit if false
    if (_logic call (_logic getVariable "exit_condition")) exitWith {
        // Execute End code
        _logic call (_logic getVariable "end");
        // Remove handler
        [_logic getVariable "handle"] call CBA_fnc_removePerFrameHandler;

        // Bai Bai logic
        deleteVehicle _logic;
    };

    // Check Run Condition - Exit until next loop if false
    if !(_logic call (_logic getVariable "run_condition")) exitWith {};
    // TRACE_1("Executing",_logic);
    // Execute code
    _logic call (_logic getVariable "run");

    // Serialize
    { call _x } forEach (_logic getVariable "serialize");
};


tu_common_fnc_addPerFrameHandlerLogic = {
    params ["_function", ["_params", [], [[]]], ["_delay", 0, [0]], ["_start", {}, [{}]], ["_end", {}, [{}]], ["_runCondition", {true}, [{true}]], ["_exitCondition",{false},[{false}]], ["_private", [],[[]]]];

    // Store vars on Logic
    _logic = "Logic" createVehicleLocal [0, 0, 0];
    _logic setVariable ["start", _start];
    _logic setVariable ["run_condition", _runCondition];
    _logic setVariable ["exit_condition", _exitCondition];
    _logic setVariable ["run", _function];
    _logic setVariable ["end", _end];
    _logic setVariable ["params", _params];
    _logic setVariable ["private", _private];

    // Prepare Serialization and Deserialization code
    _serialize = [];
    {
        _serialize pushBack (compile format["_logic setVariable ['%1', if (isNil '%1') then { nil } else { %1 }]", _x]);
    } forEach (_logic getVariable 'private');

    _deSerialize = [];
    {
        _deSerialize pushBack (compile format["%1 = _logic getVariable '%1'", _x]);
    } forEach (_logic getVariable 'private');

    _logic setVariable ["serialize", _serialize];
    _logic setVariable ["deserialize", _deserialize];

    // Run start code
    private (_logic getVariable "private");
    _params call (_logic getVariable "start");

    // Serialize
    { call _x } forEach (_logic getVariable "serialize");

    // Add handler
    _handle = [tu_common_fnc_blaHandler, _delay, [_logic]] call CBA_fnc_addPerFrameHandler;
    _logic setVariable ["handle", _handle];

    _logic; // Returns logic because you can get the handle from it, and much more
};

tu_atgm_presstime_Kh29 = 0;
tu_atgm_Kh29_lasinginprogress = false;

ace_laser_object = objNull;

tu_atgm_fnc_getPosASL = {visiblePositionASL (_this select 0)};

tu_atgm_fnc_dotProduct = {
	private ["_v1","_v2","_ret"];
	_v1 = _this select 0;
	_v2 = _this select 1;
	_ret = 0;
	{
		_ret = _ret + _x*(_v2 select _forEachIndex);
	} forEach _v1;
	_ret
};

tu_atgm_fnc_magnitude = {
	private ["_ret"];
	params["_vx", "_vy", "_vz"];
	_ret = vectorMagnitude [_vx, _vy, _vz];
	_ret
};

tu_atgm_fnc_mat_horizmag = {
	private ["_v", "_m"];

	_v = _this;
	_m = sqrt((_v select 0)*(_v select 0) + (_v select 1)*(_v select 1));
	_m
};

tu_atgm_fnc_mat_getvecdir = {
	private ["_v","_dir"];
	_v = _this select 0;
	_dir = (_v select 0) atan2 (_v select 1);
	if (_dir < 0) then {_dir = _dir + 360};
	_dir
};

tu_atgm_fnc_mat_sub3Dvec = {
	private ["_v1","_v2"];

	_v1 = _this select 0;
	_v2 = _this select 1;

	[
		(_v1 select 0)-(_v2 select 0),
		(_v1 select 1)-(_v2 select 1),
		(_v1 select 2)-(_v2 select 2)
	]
};

tu_atgm_fnc_mat_normalize3d = {
	private ["_ret"];
	params["_vx", "_vy", "_vz"];
	_ret = vectorNormalized [_vx, _vy, _vz];
	_ret
};

tu_atgm_fnc_mat_2vecanglediff = {
	private ["_res","_dir1","_dir2","_diff"];

	params["_vec1", "_vec2"];

	_dir1 = [_vec1] call tu_atgm_fnc_mat_getvecdir;
	_dir2 = [_vec2] call tu_atgm_fnc_mat_getvecdir;
	_res = _dir1 - _dir2;

	if (_res < -180) then {_res = 360 + _res};
	if (_res > 180) then {_res = _res - 360};

	_res
};

tu_atgm_fnc_mat_cos2Dvec = {
	private ["_v","_v1","_a","_b","_a1","_b1","_cos","_d"];

	_v = _this select 0;
	_v1 = _this select 1;

	_a = _v select 0;
	_b = _v select 1;
	_a1 = _v1 select 0;
	_b1 = _v1 select 1;
	_d = sqrt((_a^2 + _b^2)*(_a1^2 + _b1^2));
	if (_d == 0) then {_cos = 0} else {_cos = (_a*_a1 + _b*_b1)/_d};

	_cos
};

tu_atgm_fnc_mat_cos3Dvec = {
	private ["_v","_v1","_a","_b","_c","_a1","_b1","_c1","_cos","_vm","_v1m"];

	_v = _this select 0;
	_v1 = _this select 1;

	_vm = _v call tu_atgm_fnc_magnitude;
	if (_vm == 0) exitwith {2};
	_v1m = _v1 call tu_atgm_fnc_magnitude;
	if (_v1m == 0) exitwith {2};

	_a = _v select 0;
	_b = _v select 1;
	_c = _v select 2;
	_a1 = _v1 select 0;
	_b1 = _v1 select 1;
	_c1 = _v1 select 2;

	_cos = (_a*_a1 + _b*_b1 + _c*_c1)/(_vm*_v1m);

	_cos
};

tu_atgm_fnc_mat_roundnumber = {
	params ["_n", "_c"];

	if (_c == 0) exitWith {_n};
	(_c*round(_n / _c))
};

tu_atgm_fnc_vectorMultiply = {
	private["_v","_scale"];
	_v = +(_this select 0);
	_scale = _this select 1;
	{_v set [_forEachIndex, _x * _scale]} forEach _v;
	_v
};

tu_atgm_fnc_vectorAdd = {
	private["_p1","_p2","_return"];
	_p1 = _this select 0;
	_p2 = _this select 1;
	_return = [];
	{
	  _return set[_forEachIndex, _x + (_p2 select _forEachIndex)];
	} forEach _p1;
	_return
};

tu_atgm_fnc_unitVector = {
	private ["_mag","_ret"];
	_ret = 0;
	{_ret = _ret + _x^2} foreach _this;
	_mag = sqrt _ret;
	_ret = [];
	{
		_ret set [_forEachIndex, _x / _mag];
	} foreach _this;
	_ret
};

tu_atgm_fnc_vectorFromXToY = {
	private["_p1","_p2","_diff","_mag","_ret"];
	_p1 = _this select 0;
	_p2 = _this select 1;
	_diff = [];
	_ret = 0;
	{
		_mn = (_p2 select _forEachIndex) - _x;
		_ret = _ret + _mn^2;
	    _diff set[_forEachIndex, _mn];
	} forEach _p1;
	_mag = sqrt _ret;
	_ret = [];
	{
		_ret set [count _ret, _x / _mag];
	} foreach _diff;
	_ret
};

tu_atgm_fnc_findLaserDesignator = {
	private ["_missile", "_headingPitch", "_found", "_vectorTo", "_polarTo", "_dir", "_vertOk", "_horzOk", "_fov",
			 "_closestDistance", "_pos1", "_pos2", "_disCheck", "_currentTarget", "_potentialTargets", "_offset", "_vector"];
	_missile = _this select 0;
	_laserCode = _this select 1;
	_fov = if (count _this > 2) then {_this select 2} else {75};
	_vector = if (count _this > 3) then {_this select 3} else {vectorDir _missile};
	_offset = if (count _this > 4) then {_this select 4} else {[0,0,0]};
	
	_headingPitch = _vector call CBA_fnc_vect2polar;	
	_currentTarget = nil;
	_found = false;
	if(!(isNil "ACE_LASERTARGET_ARRAY")) then {
		_potentialTargets = [];
		{
			if(!(isNull _x)) then {
				_sensorPos = ATLtoASL(_missile modelToWorld _offset);
				_vectorTo = ([_sensorPos, ([_x] call tu_atgm_fnc_getPosASL)] call tu_atgm_fnc_vectorFromXToY);
				_polarTo = _vectorTo call CBA_fnc_vect2polar;
				_dir = _polarTo select 1;
				_dir = _dir - (_headingPitch select 1);
				if (_dir < 0) then {_dir = _dir + 360};
				if (_dir > 360) then {_dir = _dir - 360};
				_vertOk = false;
				_horzOk = false;
				if(_dir < _fov || {_dir > (360-_fov)}) then {
					_horzOk = true;
				};
				if(abs((abs(_polarTo select 2))-(abs(_headingPitch select 2))) < _fov) then {
					_vertOk = true;
				};
				if(_vertOk && {_horzOk}) then {
					_targetCode = _x getVariable ["ace_laser_code", 1111];
					if(_targetCode == _laserCode) then {
						_potentialTargets set[(count _potentialTargets), _x];
					};
				};
			};
		} forEach ACE_LASERTARGET_ARRAY;
		_closestDistance = 100000;
		{
			_pos1 = (getPosASL _missile);
			_pos2 = ([_x] call tu_atgm_fnc_getPosASL);
			_disCheck = _pos1 distance _pos2;
			if(_disCheck < _closestDistance && {[_pos1, _pos2, _x, _missile] call tu_atgm_fnc_checkLos}) then {
				_found = true;
				_currentTarget = _x;
				_closestDistance = _disCheck;
			};
		} forEach _potentialTargets;
	};
	[_found, _currentTarget]
};

tu_atgm_fnc_checkLos = {
	private ["_pos1", "_pos2", "_spacing", "_vectorTo", "_x", "_y", "_z", "_distance", "_count", "_return", "_alt", "_pos", "_designator", "_seeker"];
	_pos1 = _this select 0;
	_pos2 = _this select 1;
	_designator = _this select 2;
	_seeker = _this select 3;
	_spacing = 100;
	if((count _this) > 4) then {
		_spacing = _this select 4;
	};
	
	_return = true;
	_vectorTo = [_pos2, _pos1] call tu_atgm_fnc_vectorFromXToY;
	
	_x = (_vectorTo select 0)*0.25;
	_y = (_vectorTo select 1)*0.25;
	_z = (_vectorTo select 2)*0.25;
	
	_pos2 = [(_pos2 select 0) + _x, (_pos2 select 1) + _y, (_pos2 select 2) + _z];
	
	if(terrainIntersect [_pos2, _pos1]) then {
		_return = false;
	} else {
		if(lineIntersects [_pos2, _pos1]) then {
			_return = false;
		};
	};
	_return;
};

tu_atgm_fnc_handOffGuidance = {
	private ["_missile", "_laserObject", "_function", "_params", "_missileIndex", "_timing", "_return",
			"_owner", "_pos", "_velocity", "_vectorDir", "_vectorUp", "_laserCode", "_typeOf", "_handOffParams"];
	_missile 		= _this select 0;
	_laserObject 	= _this select 1;
	_function 		= _this select 2;
	_params 		= _this select 3;
	_missileIndex	= _this select 4;
	_timing			= _this select 5;
	_return = false;
	_owner = _laserObject getVariable "ace_RF_owner";
	if(!isNil "_owner" && {_owner != player}) then {
		_pos = getPosASL _missile;
		_velocity = velocity _missile;
		_vectorDir = vectorDir _missile;
		_vectorUp = vectorUp _missile;
		_laserCode = _missile getVariable ["ace_laser_code", 1111];
		_typeOf = typeOf _missile;
		_handOffParams = [
							_owner,
							_pos,
							_velocity,
							_vectorDir,
							_vectorUp,
							_laserCode,
							_typeOf,
							_function,
							_params,
							_missileIndex,
							_timing
						];
		_return = true;
		/*****************
		["ace_guidancehandoff", _handOffParams] call ACE_fnc_receiverOnlyEvent;
		*****************/
	};
	_return
};

tu_atgm_mat_applyRotation = {
	private[
		"_v",
		"_r",
		"_r0",
		"_r1",
		"_r2",
		"_newVector"
	];

	params["_v", "_r"];

	_r0 = _r select 0;
	_r1 = _r select 1;
	_r2 = _r select 2;

	_newVector = [
		(_v select 0)*(_r0 select 0) + (_v select 1)*(_r1 select 0) + (_v select 2)*(_r2 select 0),
		(_v select 0)*(_r0 select 1) + (_v select 1)*(_r1 select 1) + (_v select 2)*(_r2 select 1),
		(_v select 0)*(_r0 select 2) + (_v select 1)*(_r1 select 2) + (_v select 2)*(_r2 select 2)
	];

	_newVector
};

tu_atgm_mat_buildRotationMatrix = {
	private [
		"_ct",
		"_cr",
		"_cp",
		"_st",
		"_sr",
		"_sp",
		"_rotation"
	];

	params["_x", "_y", "_z"];

	_ct = cos(_x);
	_cr = cos(_y);
	_cp = cos(_z);
	_st = sin(_x);
	_sr = sin(_y);
	_sp = sin(_z);

	_rotation = [
		[_cp*_cr, -1*_sp*_ct + _cp*_sr*_st, _sp*_st + _cp*_sr*_ct],
		[_sp*_cr, _cp*_ct + _sp*_sr*_st, -1*_cp*_st + _sp*_sr*_ct],
		[-1*_sr, _cr*_st, _cr*_ct]
	];

	_rotation
};

tu_atgm_fnc_hasPR = {
	_tracker = getText (configFile >> "CfgVehicles" >> typeOf(vehicle player) >> "Turrets" >> "MainTurret" >> "tu_atgm_tracker");
	((cameraView == 'GUNNER') && (isNil {vehicle player getVariable 'tu_atgm_exceeded'}) && (currentWeapon vehicle player == _tracker))
};

[] call tu_atgm_fnc_missile_saclos_bits;

tu_atgm_fnc_global_towsmoke = {
	params["_mis", "_ammotype"];
	[_mis, _ammotype] spawn tu_atgm_fnc_towsmoke;
};
