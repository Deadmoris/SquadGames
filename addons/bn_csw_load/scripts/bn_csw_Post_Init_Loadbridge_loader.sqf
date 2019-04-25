
	diag_log str _this;
	_gun = _this select 1;
	_turret_path = [0];
	if (count _this > 5) then {_turret_path = _this select 5};
	_this remoteExec ["bn_csw_fnc_remoteLoadID_loader", (_gun turretOwner _turret_path),false]; systemchat ("remoteExec owner: " + str (_gun turretOwner _turret_path));