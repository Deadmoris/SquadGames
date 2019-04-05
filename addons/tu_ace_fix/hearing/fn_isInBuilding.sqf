/*
 * Author: hitman
 * Check if the unit is in a building. Should not return true if the unit is sitting in a bush.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Is the unit in a building? <BOOL>
 *
 * Example:
 * [bob] call ace_hearing_fnc_isInBuilding
 *
 * Public: Yes
 */
#include "\z\ace\addons\hearing\functions\script_component.hpp"

params [["_unit", objNull, [objNull]], ["_dist",10,[0]]];

private _objs = nearestObjects [_unit, ["House", "Building"], _dist * 2];

private _inBB = false;
{ 
  private _bb = boundingBox _x; 
  private _l = _bb select 0;
  private _r = _bb select 1;
  private _mpos = _x worldToModel position _unit;
  if(_l select 0 < _mpos select 0 
  && _l select 1 < _mpos select 1 
  && _l select 2 < _mpos select 2 
  && _r select 0 > _mpos select 0 
  && _r select 1 > _mpos select 1 
  && _r select 2 > _mpos select 2 
  ) exitWith { _inBB = true; _dist = (sizeOf typeOf _x) min _dist;  true };
} forEach (_objs select { sizeOf typeOf _x > _dist});



private _position = eyePos _unit;

private _intersections = 0;

if(_inBB) then {
  if (lineIntersects [_position, _position vectorAdd [0, 0, +_dist]]) then {
    _intersections = _intersections + 1;
  };

  if (lineIntersects [_position, _position vectorAdd [+_dist, 0, 0]]) then {
    _intersections = _intersections + 1;
  };

  if (lineIntersects [_position, _position vectorAdd [-_dist, 0, 0]]) then {
    _intersections = _intersections + 1;
  };

  if (lineIntersects [_position, _position vectorAdd [0, +_dist, 0]]) then {
    _intersections = _intersections + 1;
  };

  if (lineIntersects [_position, _position vectorAdd [0, -_dist, 0]]) then {
    _intersections = _intersections + 1;
  };
};

_intersections > 3
