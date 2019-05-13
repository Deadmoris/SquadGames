[] spawn {
	_circle = vehicle player;
	while {((player == (gunner _circle)))} do {
		waitUntil {0.002 < (abs (((_circle modelToWorld (_circle selectionPosition "compass_s")) select 0) - ((_circle modelToWorld (_circle selectionPosition "compass_n")) select 0)))};
		_dir_housing = (_circle modelToWorld (_circle selectionPosition "housing_s")) getDir (_circle modelToWorld (_circle selectionPosition "housing_n"));
		if (_dir_housing > 180) then {_dir_housing = _dir_housing - 360};
		_circle animate ["compass_needle", _dir_housing,1];
	};
};