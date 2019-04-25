_gun = _this select 1;
_this remoteExec ["bn_csw_fnc_atgm_unload2", _gun turretOwner [0],false]; systemchat ("remoteExec owner: " + str (_gun turretOwner [0]));