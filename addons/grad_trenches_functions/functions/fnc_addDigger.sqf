/*
    @Authors
        Marc 'Salbei' Heinze
    @Arguments
        - _unit, is the unit that helps digging
		- _trench, the trench that is beeing dug
    @Return Value
        None
*/

#include "script_component.hpp"

params ["_trench", "_unit"];

if ((_trench getVariable [QGVAR(diggerCount), 0]) < 1) exitWith {[_trench, _unit] call FUNC(continueDiggingTrench);};
_trench setVariable [QGVAR(diggerCount), ((_trench getVariable QGVAR(diggerCount))+1), true];
if (_trench getVariable [QGVAR(diggerCount), 0] == 1) then {_trench setVariable [QGVAR(nextDigger), player, true]};

private _type = switch (_trench getVariable [QGVAR(diggingType), nil]) do {
   case "UP" : {true};
   case "Down" : {false};
   default {diag_log format ["GRAD_Trenches: addDigger.sqf: No value for _type, %1!", _type];};
};

private _handle = [{
   params ["_args", "_handle"];
    _args params ["_trench", "_unit", "_type"];

    if (
      (_trench getVariable [QGVAR(nextDigger), player]) == player &&
      ((_trench getVariable [QGVAR(diggerCount), 1]) < 1 ||
      !(_trench getVariable ["ace_trenches_digging", false]))
    ) exitWith {
      [_handle] call CBA_fnc_removePerFrameHandler;
      /*
      _trench setVariable [QGVAR(nextDigger), nil, true];
      if (_type) then {
         [_trench, _unit, true] call FUNC(continueDiggingTrench);
      }else{
         [_trench, _unit, true] call FUNC(removeTrench);
      };
      */
   };

   if (isNil (_trench getVariable [QGVAR(nextDigger), nil])) then {
      _trench setVariable [QGVAR(nextDigger), player, true];
   };
},0.1, [_trench, _unit, _type]] call CBA_fnc_addPerFrameHandler;

// Create progress bar
private _fnc_onFinish = {
    (_this select 0) params ["_unit", "_trench"];
    _trench setVariable [QGVAR(diggerCount), 0,true];

    // Reset animation
    [_unit, "", 1] call ace_common_fnc_doAnimation;
};

private _fnc_onFailure = {
    (_this select 0) params ["_unit", "_trench"];

    _trench setVariable [QGVAR(diggerCount), (((_trench getVariable [QGVAR(diggerCount), 0]) -1) max 0), true];
    if ((_trench getVariable [QGVAR(nextDigger), player]) == player) then {
      _trench setVariable [QGVAR(nextDigger), nil,true];
   };

    // Reset animation
    [_unit, "", 1] call ace_common_fnc_doAnimation;
};
private _fnc_condition = {
   (_this select 0) params ["", "_trench", "", "_handle"];

   if (_trench getVariable [QGVAR(diggerCount), 0] <= 0) exitWith {false};
   if (isNil "_handle") exitWith {false};
   if (GVAR(stopBuildingAtFatigueMax) && (ace_advanced_fatigue_anReserve <= 0)) exitWith {false};
   true
};

[[_unit, _trench, _type, _handle], _fnc_onFinish, _fnc_onFailure, localize "STR_ace_trenches_DiggingTrench", _fnc_condition] call FUNC(progressBar);

[_unit, "AinvPknlMstpSnonWnonDnon_medic4"] call ace_common_fnc_doAnimation;
