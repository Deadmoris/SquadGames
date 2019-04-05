
if(isNull (uiNamespace getVariable ["RHS_1PZ32_Ctrl",displayNull]))then
{

	uiNameSpace setVariable ["RHS_1PZ32_Ctrl",_this select 0];

	[] spawn {
		private["_v","_t"];

		disableSerialization;

		_c = (uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 1);
			_p=call rhs_fnc_findPlayer;
		_v = vehicle _p;

		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);

		while{not(isNull _c)}do{
			waitUntil {sleep 0.01;inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR ((call rhs_fnc_findPlayer)!=gunner _v AND (call rhs_fnc_findPlayer)!=driver _v)};
			_t=(ctrLPosition _c) select 1;
			if(inputAction rhs_key_rng_up_GLB>0 AND _t<=(14 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.002];
			};
			if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>=(-2.95 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select 0,_t-0.002];
			};
			_c ctrlCommit 0.005;
			sleep 0.01;
		};
	};

	[] spawn {
		disableSerialization;
		private["_v","_c","_c2","_c3","_s"];

		_v = vehicle (call rhs_fnc_findPlayer);
		_c=(uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 180);
		_c2=(uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 1);
		_c3=(uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 2);

		_s=true;

		while{not(isNull _c)}do
		{

			_p=(call rhs_fnc_findPlayer);

			if(currentVisionMode _p == 1)then{
				if(_s)then{
					if(_p == gunner _v)then{_c2 ctrlSetText "";_c3 ctrlSetText "";_s=false;};
				};
			}else{
				if(!_s)then{
					if(_p== gunner _v)then{_c2 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_horizontal.paa";_c3 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_vertical.paa";_s=true;};
				};
			};
			sleep 0.1;
		};
		uiNameSpace setVariable ["RHS_1pz32_Ctrl",displayNull];
	};
};