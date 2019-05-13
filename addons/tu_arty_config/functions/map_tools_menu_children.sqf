/**
* Add available map tool textures to the menu.
*/
private _available_textures = [] call compile preprocessFileLineNUmbers "\tu_arty\data\mapTools\available_textures.sqf";
private _actions = [];
{
	_x params ["_description","_path"];
	private _childStatement = compile ("TU_ARTY_MAP_TOOLS_TEXTURE = '" + _path + "'");
	private _action = [format ["map_tool_texture:%1",_forEachIndex], _description, "", _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _target]; // New action, its children, and the action's target
} forEach _available_textures;

_actions