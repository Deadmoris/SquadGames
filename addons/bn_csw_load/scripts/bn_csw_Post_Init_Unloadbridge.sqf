_gun = _this select 1;
_turret_path = [0];
if (count _this > 3) then {_turret_path = _this select 3};
_this remoteExec ["bn_csw_fnc_remoteUnloadID", _gun turretOwner _turret_path,false]; systemchat ("remoteExec owner: " + str (_gun turretOwner _turret_path));