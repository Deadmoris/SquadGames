private ["_phase", "_newPhase", "_gun","_dir","_milSys"];
_gun = vehicle player;
_dir = _this select 0;
_phase = _gun animationPhase "OpticLens";
_newPhase = (round(_phase+_dir) min 400) max -400; //todo: read from config
_gun animate ["OpticLens", _newPhase];
_gun setVariable ["OpticLens",_newPhase];
