_aav = _this select 0;

if !(isServer) exitWith {};

/* CBA script, doesn't seem to work
_TurnOutFFV = [{
    params ["_args", "_idPFH"];
    _args params ["_aav"];
    if (isNull _aav || alive _aav) exitWith {
        [_idPFH] call CBA_fnc_removePerFrameHandler;
    };
    
    if (isTurnedOut (_aav turretUnit [2]) || isTurnedOut (_aav turretUnit [3]) || isTurnedOut (_aav turretUnit [4])) then {
        if (_aav animationPhase "CargoHatch_Right" < 1) then {
            _aav animate ["CargoHatch_Right",1];
        };
    } else {
        if ((_aav animationPhase "CargoHatch_Right") > 0) then {
            _aav animate ["CargoHatch_Right", 0];
        };
    };
}, 0.5, _this select 0] call CBA_fnc_addPerFrameHandler;
*/
while {alive _aav} do
{
	sleep 1;
	
	if (isTurnedOut (_aav turretUnit [2]) || isTurnedOut (_aav turretUnit [3]) || isTurnedOut (_aav turretUnit [4])) then {
        if (_aav animationPhase "CargoHatch_Right" < 1) then {
            _aav animate ["CargoHatch_Right",1];
        };
    } else {
        if ((_aav animationPhase "CargoHatch_Right") > 0) then {
            _aav animate ["CargoHatch_Right", 0];
        };
    };
	if (isTurnedOut (_aav turretUnit [5]) || isTurnedOut (_aav turretUnit [6]) || isTurnedOut (_aav turretUnit [7])) then {
        if (_aav animationPhase "CargoHatch_Left" < 1) then {
            _aav animate ["CargoHatch_Left",1];
        };
    } else {
        if ((_aav animationPhase "CargoHatch_Left") > 0) then {
            _aav animate ["CargoHatch_Left", 0];
        };
    };
};