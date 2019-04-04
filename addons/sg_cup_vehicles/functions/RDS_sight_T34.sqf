uiNameSpace setVariable ["RDS_t34_Ctrl",_this select 0];


[] spawn {
	private["_v","_t"];
	disableSerialization;
	_c = (uiNamespace getVariable "RDS_t34_Ctrl" displayCtrl 1);
	_v = vehicle player;
	while{(player==gunner _v OR player==driver _v)}do{
		waitUntil {sleep 0.01;inputAction "ZeroingUp">0 OR inputAction "ZeroingDown">0 OR (player!=gunner _v AND player!=driver _v)};
		_t=(ctrLPosition _c) select 1;
		if(inputAction "ZeroingUp">0 AND _t<=(112.16 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
		};
		if(inputAction "ZeroingDown">0 AND _t>(-15.96 *   (0.025 * SafezoneH)))then{
				_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.003];
		};
		_c ctrlCommit 0.005;
		sleep 0.02;
	};
};