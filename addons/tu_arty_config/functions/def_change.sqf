private ["_phase", "_newPhase", "_gun","_dir","_milSys"];
_gun = vehicle player;
_dir = _this select 0;
_phase = _gun animationPhase "OpticRevolve";
_newPhase = round(_phase+_dir);
_gun animateSource ["OpticRevolve", _newPhase];
