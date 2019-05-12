/*
	SACLOS guidiance

	a: reyhard
*/
params["_u","_w","_m","","_a","","_p","_g"];

_this call rhs_fnc_firedSaclos;

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

//exit if not a player
if( (call rhs_fnc_findPlayer) != _g )exitWith{};
private _v = vehicle ACE_player;

private _v = vehicle (call rhs_fnc_findPlayer);

//read gun beg & end mem points for backup vector creation
private _cfgV = configFile >> "cfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret";
private _gBeg = getText (_cfgV >> "gunBeg");
private _gEnd = getText (_cfgV >> "gunEnd");

//read ammo params
private _cfgA = configFile >> "cfgAmmo" >> _a;
private _maxRange = getNumber (_cfgA >> "maxcontrolrange");
private _maxSpeed = getNumber (_cfgA >> "maxSpeed");
private _guideMode = getText (_cfgA >> "rhs_guideMode");
private _ballisticMode = getNumber (_cfgA >> "rhs_ballisticMode");

//vector from gunner arms, useful while shot is taken from non optic
private _p1 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gEnd));
private _p2 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gBeg));
private _pv = (_p1 vectorAdd ((_p1 vectorFromTo _p2) vectorMultiply 5000));
private _ins = lineIntersectsSurfaces [
				_p1,
				_pv,
				_u,
				objNull,
				true,
				1
			];
private _target_pos = (_ins select 0) select 0;

if(_ins isEqualTo [])then{
	_target_pos = _pv;
};

_helper = objNull;
private _cone = 60;
if(_guideMode == "BEAMRIDER")then{
	_helper = "LaserTargetE" createVehicle [0,0,0];
	_cone = 20;
}else{
	_helper = "Logic" createVehicleLocal [0,0,0];
};
_time = time;
private _pfh = "rhs_pfh_atgm_" + str _p;

// control Time To Target handling
private _ctrl = "";
if(_u isKindOf "rhs_mi28_base")then{
	_ctrl = "RHS_mi28_fcs_Ctrl";
};
if(_u isKindOf "RHS_Ka52_base")then{
	_ctrl = "RHS_Samshin_Ctrl";
};

if !(isNil {_v getVariable "tu_atgm_exceeded"}) exitWith{deleteVehicle _helper; deleteVehicle _p;};
// top down attack detonation handler
if(_ballisticMode isEqualTo 2)then{
	private _pfhTop = "rhs_pfh_atgm_top_" + str _p;

	[_pfhTop, "onEachFrame", {
		params["_p","_v","_u","_helper","_target_pos","_pfh","_pfhTop"];
		//
		private _m_pos = getPosASLVisual _p;

		if(cameraView isEqualTo "GUNNER")then{
			private _p1 = AGLToASL positionCameraToWorld [0,0,0];
			private _p2 = AGLToASL positionCameraToWorld [0,0,(_p1 distance (screenToWorld [0.5,0.5]))+5];
			private _ins = lineIntersectsSurfaces [
				_p1,
				_p2,
				_u,
				objNull,
				true,
				1
			];
			_target_pos = (_ins select 0) select 0;
			//in case there is no intersection (i.e. while looking into sky) we take camera pos extended to infinity or aimpos of  (probably) air vehicle
			if(_ins isEqualTo [])then{
				if(isnull cursorObject)then{
					_target_pos = _p2;
				}else{
					_target_pos = (aimPos cursorObject);
				};
			};
			_this set [4,_target_pos];
		};

		// detonate when above the target
		if((_p distance2d _target_pos < 1.0) OR ((abs((_p getRelDir _target_pos)-180)<90) && _p distance2d _target_pos < 9.0))exitWith{
			// added slight to modifier to point of target
			private _vec = _m_pos vectorFromTo (_target_pos vectorAdd [0,0,-15]);
			private _vecUp = _vec vectorCrossProduct [-(_vec select 1), (_vec select 0), 0];
			_p setVectorDirAndUp [_vec,_vecUp];
			_p setVelocity (_vec vectorMultiply 6666);

			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			[_pfhTop, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			deleteVehicle _helper;
		};

		if(!alive _p)exitWith{
			[_pfhTop, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	}, [_p,_v,_u,_helper,_target_pos,_pfh,_pfhTop]] call BIS_fnc_addStackedEventHandler;
};

[_pfh, "onEachFrame", {
	params["_t","_p","_v","_u","_helper","_target_pos","_ballisticMode","_maxRange","_maxSpeed","_ctrl","_pfh","_cone"];

	if ((time - _t) >= 0.02) then {
		if((!alive _p) OR (_p distance _v > _maxRange) OR !(isNil {_v getVariable "tu_atgm_exceeded"}))exitWith{
			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			deleteVehicle _helper;
			if(_ctrl != "")then{((uiNamespace getVariable _ctrl) displayCtrl 601) ctrlSetText ""};
		};
		_this set [0, time];
		private _m_pos = getPosASLVisual _p;

		//detailed target acquisition while in optics mode
		if(cameraView isEqualTo "GUNNER")then{
			private _p1 = AGLToASL positionCameraToWorld [0,0,0];
			private _p2 = AGLToASL positionCameraToWorld [0,0,(_p1 distance (screenToWorld [0.5,0.5]))+5];
			private _ins = lineIntersectsSurfaces [
				_p1,
				_p2,
				_u,
				objNull,
				true,
				1
			];
			_target_pos = (_ins select 0) select 0;
			//in case there is no intersection (i.e. while looking into sky) we take camera pos extended to infinity or aimpos of  (probably) air vehicle
			if(_ins isEqualTo [])then{
				if(isnull cursorObject)then{
					_target_pos = _p2;
				}else{
					_target_pos = (aimPos cursorObject);
				};
			};
			_this set [5,_target_pos];

			private _dist = _p distance _target_pos;
			private _timeToTarget = ceil(_dist/550);

			if(_ctrl != "")then{ ((uiNamespace getVariable _ctrl) displayCtrl 601) ctrlSetText format["%1с",_timeToTarget]};
		};
		_helper setPosASL _target_pos;


		// top down attack
		if(_ballisticMode isEqualTo 2)then{
			_target_pos=_target_pos vectorAdd [0,0,2.25];	//fly over the target
		};

		// do nothing if angle to target is greater than 90 degrees. tracking might be resumed though
		if(abs((_p getRelDir _target_pos)-180)<90 )exitWith{};

		// designate target ~5 maters above target point when distance is greater than 200m
		if(_ballisticMode isEqualTo 1)then{
			if(_p distance2d _target_pos > 200)then{_target_pos=_target_pos vectorAdd [0,0,5];};
		};

		//normalized vector between missile & target
		//missile vector
		private _vecOld = vectorDir _p;
		private _vecUpOld = vectorUp _p;

		//required vector to target
		private _vec = _m_pos vectorFromTo _target_pos;
		private _vecUp = _vec vectorCrossProduct [-(_vec select 1), (_vec select 0), 0];

		//difference between new & old vectors
		//from that we calculate maximum & minimum values that can be applied to correct missile path
		//_adj param can be somehow treated as a cfgAmmo Maneuverability param
		_vec = _vec vectorDiff _vecOld;
		_vecUp = _vecUp vectorDiff _vecUpOld;
		private _adj=0.007;
		private _stability = 0.018;

		_vec = _vecOld vectorAdd [
				-_adj max (_adj min (_vec select 0))+random [-_stability,0,_stability],
				-_adj max (_adj min (_vec select 1))+random [-_stability,0,_stability],
				-_adj max (_adj min (_vec select 2))+random [-_stability,0,_stability]
			];
		_vecUp= _vecUpOld vectorAdd [
				-_adj max (_adj min (_vecUp select 0))+random [-_stability,0,_stability],
				-_adj max (_adj min (_vecUp select 1))+random [-_stability,0,_stability],
				-_adj max (_adj min (_vecUp select 2))+random [-_stability,0,_stability]
			];
		//changing missile vector
		_p setVectorDirAndUp [_vec,_vecUp];
		_p setVelocity (_vec vectorMultiply ((vectorMagnitude (velocity _p)) min _maxSpeed));

	};

}, [time,_p,_v,_u,_helper,_target_pos,_ballisticMode,_maxRange, _maxSpeed,_ctrl,_pfh,_cone]] call BIS_fnc_addStackedEventHandler;