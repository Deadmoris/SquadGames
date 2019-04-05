#include "../addon.hpp"
disableSerialization; 
params ["_compas"];
private _pos = ctrlPosition _compas;
_pos params ["_x", "_z", "_y"];
_x = (_x max safeZoneX) min (safeZoneX + safeZoneW);
_y = (_y max safeZoneY) min (safeZoneY + safeZoneH);
_compas ctrlSetPosition [_x, _z, _y];