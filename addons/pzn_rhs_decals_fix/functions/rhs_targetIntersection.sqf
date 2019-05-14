/* 
Name:        fn_targetIntersection.sqf 

Args:       [vector3d] 0 Shooter velocity  
            [vector3d] 1 Shooter position  
            [vector3d] 2 Target velocity  
            [vector3d] 3 Target position  
            [scalar] 4 Muzzle velocity (of intercepting projectile) 
             
Returns:    [scalar] 0 Time to intercept point 
            [vector3d] 1 Intercept position 
*/ 
/* 
private ["_tPos", "_pos", "_vel", "_a", "_b", "_c", "_time"]; 

// Target position 
_tPos = _this select 3; 

// Relative position & velocity 
_pos = _tPos vectorDiff (_this select 1); 
_vel = (_this select 2) vectorDiff (_this select 0); 

// Function components 
_a = (2 * (_vel vectorDotProduct _pos)); 
_b = _pos vectorDotProduct _pos; 
_c = (_a^2) - (4 * ((_vel vectorDotProduct  _vel) - ((_this select 4)^2)) * _b); 

// No solution possible, return -1 time with 0 position 
if (_c <= 0) exitWith { [-1, [0,0,0]] }; 

// Calculate time to intercept 
_time = 2 * _b / (sqrt(_c) - _a); 

// Return array with time and aim position 
[_time, _tPos vectorAdd (_vel vectorMultiply _time)];   */