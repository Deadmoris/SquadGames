#include "../addon.hpp"
disableSerialization; 
params ["_compas"];

private _scale = if(ctrlModelScale _compas == GVAR(map_compas_large))then{GVAR(map_compas_small)}else{GVAR(map_compas_large)};
_compas ctrlSetModelScale _scale;
_this call FUNC(checkMapCompasPosition);