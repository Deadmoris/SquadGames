private["_handle"];
params["_vehicle", "_projectile", "_isPlayer", "_laserCode"];

if !(_isPlayer) exitWith {};
_handle = [tu_atgm_fnc_missile_lgb_track, 0.01, [_projectile, _laserCode, time, 0, _bomb]] call cba_fnc_addPerFrameHandler;
_handle