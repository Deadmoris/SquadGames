/*
*  разрыв дымовых снарядов и мин.
*/

params["_v","_posV"];

if(!(_v isKindOf "bn_82mm_smoke")) exitWith {};

private ["_vel","_num","_elev","_row","_angle","_vS","_smokeg"];
_posV set [2,(_posV select 2) + 0.5]; 
_vel = getNumber (configFile >> "CfgAmmo" >> _v >> "tu_arty_smokeVelocity");
_num = getArray (configFile >> "CfgAmmo" >> _v >> "tu_arty_smokeCount");
_row = count _num;
_delev = 45 / (_row-1);

//авторасчет равномерного броска
if (_row > 0) then {
    for "_r" from 0 to (_row - 1) do { 
        _angle = (360 / (_num select _r));
        _elev = 45 + (_delev * _r);
        _vS = [0, cos _elev, sin _elev] vectorMultiply _vel;
        _vS = [_vS, random 180] call BIS_fnc_rotateVector2D;

        if ((_num select _r) > 0) then {
            for "_i" from 0 to ((_num select _r)-1) do { 
                _vS = [ _vS, _angle] call BIS_fnc_rotateVector2D;
                _smokeg = "tu_arty_SmokeShell" createVehicle [0,0,0];
                _smokeg setPosASL _posV;
                _smokeg setVelocity _vS;
                _posV set [2,(_posV select 2) + 0.3]; 
            };
        };
    };
};