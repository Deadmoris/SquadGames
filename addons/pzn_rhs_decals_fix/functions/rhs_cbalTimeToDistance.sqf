/*
	Name: 		RHS_fnc_cbalTimeToDistance
	
	Desc:		Get the time it will take for a projectile to travel a distance (returns -1 if not possible)
	
	Param(s):	0 - Ammo class
				1 - Muzzle/Weapon normalized vector
				2 - Muzzle velocity in meters per second
				3 - Distance in meters
	
	Returns:	(scalar) time
	
	Author:		Jiaan "Bakerman"
*/
/* 
private ["_a","_v","_d","_m","_tt","_ss","_af","_hv","_vv","_hd","_vd","_t"];

// Input
_a = _this select 0; 		// Ammo class string
_v = _this select 1; 		// Muzzle normalized vector
_m = _this select 2; 		// Muzzle velocity
_d = _this select 3; 		// Distance scalar

// Get ammo values
_tt = getNumber(configFile >> "cfgAmmo" >> _a >> "timeToLive");
_ss = getNumber(configFile >> "cfgAmmo" >> _a >> "simulationStep");
_af = getNumber(configFile >> "cfgAmmo" >> _a >> "airFriction");

// Get horizontal and vertical velocity
_hv = sqrt((_v select 0)^2 + (_v select 1)^2) * _m;
_vv = abs(_v select 2) * _m;

// Return -1 if solution is not possible
if (_d / sqrt(_hv^2+_vv^2) >= _tt) exitWith {-1};

// Variables
_hd = 0;
_vd = 0;
_t = 0;

// Do ballistics calculation
for "_i" from 0 to _tt step _ss do {
	// Horizontal velocity
	_hv = _hv + (_hv ^ 2 * _af) * _ss;
	// Vertical velocity
	_vv = _vv + (_vv ^ 2 * _af - 9.8016) * _ss;
	// Horizontal + vertical distances
	_hd = _hd + _hv * _ss;
	_vd = _vd + _vv * _ss;
	// Exit if distance is reached
	if (sqrt(_hd^2+_vd^2) >= _d) exitWith {};
	// Add step to time
	_t = _t + _ss;
};

// Return time
_t; */