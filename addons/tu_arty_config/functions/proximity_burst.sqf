/*
* Воздушный разрыв миномётных мин.
*/
params ['_shell','_author','_typeOfShell'];
private _typeOfShellPrx = "bn_60mm_proximity_burst";
//hint _typeOfShell;
switch (true) do {
    case (_typeOfShell == "bn_60mm_frag_prx"): {_typeOfShellPrx = "bn_60mm_proximity_burst"};
    case (_typeOfShell == "bn_81mm_frag_prx"): {_typeOfShellPrx = "bn_81mm_proximity_burst"};
    default { hint "default" };
};
private _blast = createVehicle [_typeOfShellPrx, position _shell, [], 0, "NONE"]; 
[_author, _typeOfShellPrx, _blast] call ace_frag_fnc_addPfhRound;
deleteVehicle _shell;