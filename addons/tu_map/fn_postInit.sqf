#define MAP_DISTANCE 2
tu_map_hasMap = {
	{
			private _s = getText(configFile >> "cfgWeapons" >> _x >> "simulation");
			_s == "itemMap" ||  _s == "itemGps"
	} count (assigneditems _this) > 0
};

tu_map_isAlive = {
	(alive _this) and !(_this getVariable ["ACE_isUnconscious", false])
};

tu_map_isTurnedOut = { 
	params ["_unit", "_vehicle"];
	private _config = configFile >> "CfgVehicles" >> typeOf _vehicle;
	private _result = false;

	if (_vehicle == _unit) then {
		_result = true;
	} else {
		if ((driver _vehicle == _unit) && {getNumber(_config >> "forceHideDriver") == 1}) then {
			_result = false;
		} else {
			if ((commander _vehicle == _unit) && {getNumber(_config >> "forceHideCommander") == 1}) then {
				_result = false;
			} else {
				private _animation = animationState _unit;
				private _action;
				private _inAction;
	
				if (_unit == driver _vehicle) then {
						_action = getText (_config >> "driverAction");
						_inAction = getText (_config >> "driverInAction");
				} else {
						private _turretIndex = (assignedVehicleRole _unit) select 1;
				
						private _count = count _turretIndex;
				
						for "_index" from 0 to (_count - 1) do {
								_config = _config >> "Turrets";
								_config = _config select (_turretIndex select _index);
						};
				
						_action = getText (_config >> "gunnerAction");
						_inAction = getText (_config >> "gunnerInAction");					
				};
				
				if (_action == "" || {_inAction == ""} || {_action == _inAction}) then 
				{
					_result = false;
				} else {
					_animation = toArray _animation;
					_animation resize (count toArray _action);
					_animation = toString _animation;
					_result = (_animation == _action);
				};
				
			};		
		};
	};
	_result;
};


if(hasInterface) then {	
	addMissionEventHandler ["Map",{
		params ["_isOpened", "_isForced"];
		if(time > 0 && (player call tu_map_isAlive)) then {
			if (player call tu_map_hasMap) then {
				player setVariable ["tu_view_map", _isOpened, true];
			} else {
				if(_isOpened) then {
					private _v = vehicle player;
					if(_v == player) then { 
						if((cursortarget iskindof "CAManBase")
							and {isPlayer cursortarget} 
							and { cursortarget call tu_map_isAlive } 
							and { cursorTarget call tu_map_hasMap }
							and {(player distance cursortarget) < MAP_DISTANCE}
							and {[cursortarget,player,0] call BIS_fnc_isInFrontOf} 
							and { cursortarget getVariable ["tu_view_map", false] } 
							) then {
								[cursorTarget] spawn {
									params ["_t"];
									player linkitem "ItemMap";
									player setvariable ["tu_view_map_control_state", true, true];
									hint format ["Вы смотрите карту %1", name _t];
									uisleep 0.5;
									waitUntil {
										not (
											visibleMap
											and ((player distance _t) < MAP_DISTANCE)
											and {player call tu_map_isAlive} 
											and { _t call tu_map_isAlive } 
											and { _t call tu_map_hasMap }
											and { _t getVariable ["tu_view_map", false] } 
										);
									};
									player unlinkItem "ItemMap";
									player setvariable ["tu_view_map_control_state", false, true];	
									hint "";									
									if(visibleMap) then { openMap false; };
								};
						};
					} else {
						private _f = false;
						{
							if(player == _x) exitWith {};
							if(_f) exitWith {};

							if( (isPlayer _x)
								and { _x call tu_map_isAlive } 
								and { _x call tu_map_hasMap }
								and { _x getVariable ["tu_view_map", false] } 
								//and { ([player, _v] call tu_map_isTurnedOut) ([_x, _v] call tu_map_isTurnedOut)} 
								) then {
									_f = true;
									[_x] spawn {
										params ["_t"];
										player linkitem "ItemMap";
										player setvariable ["tu_view_map_control_state", true, true];
										hint format ["Вы смотрите карту %1", name _t];
										uisleep 0.5;
										waitUntil {
											not (
												visibleMap
												and (vehicle player == vehicle _t)
												and {player call tu_map_isAlive} 
												and { _t call tu_map_isAlive } 
												and { _t call tu_map_hasMap }
												and { _t getVariable ["tu_view_map", false] } 
											);
										};
										player unlinkItem "ItemMap";
										player setvariable ["tu_view_map_control_state", false, true];		
										hint "";				
										if(visibleMap) then { openMap false; };			
									};									
								}

						} forEach (crew _v);
					};
				};
			}
		};
	}];
};

if(isServer) then {
	addMissionEventHandler ["HandleDisconnect",{
		params ["_disconnectedPlayer"];
		if(_disconnectedPlayer getvariable ["tu_view_map_control_state", false]) then {
			_disconnectedPlayer unlinkItem "ItemMap";			
			_disconnectedPlayer setvariable ["tu_view_map_control_state", false, true];									
		};
		player setVariable ["tu_view_map", false, true];

		nil;
	}];
};