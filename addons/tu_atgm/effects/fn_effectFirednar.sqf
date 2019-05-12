// hint "effect";
_this call BIS_fnc_effectFiredRocket;
	
if local (_this select 0) exitwith {
	// hint "im local";
	private _ammo = _this select 4;
	private _projectile = _this select 6;
	_mod0 = .01;
	_changeVectordir = (vectorDir _projectile) vectorAdd [(-1 * _mod0 + random (_mod0 * 2)),(-1 * _mod0 + random (_mod0 * 2)),(-1 * _mod0 + random (_mod0 * 2))];
	_changeVectorup = (vectorup _projectile) vectorAdd [(-1 * _mod0 + random (_mod0 * 2)),(-1 * _mod0 + random (_mod0 * 2)),(-1 * _mod0 + random (_mod0 * 2))];
	[_projectile, _changeVectordir, _changeVectorup] call ace_missileguidance_fnc_changeMissileDirection;
}; 