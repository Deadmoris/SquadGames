
private ["_disper","_crutch","_local","_gun","_shell","_vel","_speed","_newDir","_newDisperse","_selectedWeapon","_disperseDegrees","_extraDispersionW"];

_gun = _this select 0;
_selectedWeapon = (weapons _gun) select 0;
_local = (_gun turretLocal [0]);
_shell = _this select 6; // 5 >> 6 (firedbis)
_extraDispersionW = deg (getNumber (configFile >> "CfgWeapons" >> _selectedWeapon >> "tu_arty_extra_dispersion_w")); 
_crutch = ((_gun isKindOf "rhs_D30_base")||(_gun isKindOf "RHS_M119_base"));
_disper = (_crutch || (_extraDispersionW > 0));

if (_shell isKindOf "BulletBase") exitWith {};

if (_disper) then {
	_vel = velocity _shell;
	_newDisperse = _gun getVariable ["tu_arty_disperse", [0,0]];

	if (_crutch) then {
		_speed = vectorMagnitude _vel;
		//летит хрен знает куда т.к анимация и орудие не связанны
		_newDir = (_gun weaponDirection _selectedWeapon) vectorMultiply _speed;
		_shell setVelocity _newDir;
	};

	[_shell,_newDisperse #0,_newDisperse #1, 0] call ace_common_fnc_changeProjectileDirection;

	if (_local) then {
		_newDisperse = [((random _extraDispersionW) * 2) - _extraDispersionW, 0];

		if (_crutch) then {
			_disperseDegrees = deg (getNumber (configFile >> "CfgWeapons" >> _selectedWeapon >> "dispersion"));
			_newDisperse = [((random [_disperseDegrees * 4, 0, _disperseDegrees * 4]) * (random 2 - 1)) + _newDisperse #0, (random [_disperseDegrees*4, 0,_disperseDegrees * 4]) * (random 2 - 1)];
		};
		
		_gun setVariable ["tu_arty_disperse", _newDisperse, true];
	};
};

if (_local) then {
	[_shell] call tu_arty_fnc_add_observable;
};

_this call tu_arty_fnc_air_friction;