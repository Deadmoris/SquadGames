//script is fired only once & is destroyed together with display

if(isNull (uiNamespace getVariable ["RHS_t55_Ctrl",displayNull]))then
{

	uiNameSpace setVariable ["RHS_t55_Ctrl",_this select 0];
	
	[] spawn {
		private["_v","_t","_c"];
		disableSerialization;
		_c = (uiNamespace getVariable "RHS_t55_Ctrl" displayCtrl 1);
		_v = vehicle ACE_player;
		
		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);

		while{not(isNull _c)}do
		{
			waitUntil {sleep 0.01;inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR (ACE_player!=gunner _v AND ACE_player!=driver _v)};
			_t=(ctrLPosition _c) select 1;
			if(inputAction rhs_key_rng_up_GLB>0 AND _t<=(17.6 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select 0,_t+0.003];
					// hint str _t;
			};
			if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>(-5.52 *   (0.025 * SafezoneH)))then{
					_c ctrlSetPosition [(ctrLPosition _c) select	 0,_t-0.003];
					// hint str _t;
			};
			_c ctrlCommit 0.005;
			sleep 0.02;
		};
	};

	[] spawn {
		disableSerialization;
		private["_v","_c","_c2","_c3"];

		_v = vehicle ACE_player;
		_c=(uiNamespace getVariable "RHS_t55_Ctrl" displayCtrl 180);
		_c2=(uiNamespace getVariable "RHS_t55_Ctrl" displayCtrl 1);
		_c3=(uiNamespace getVariable "RHS_t55_Ctrl" displayCtrl 2);
		private _c2sc = ctrlScale _c2;
		private _c2sc2 = _c2sc / 3.5 * 6.5;
		private _c2p = ctrLPosition _c2;
		private _c2p2 = [3.20 * (0.01875 * Safezoneh),(_c2p select 1) - ((_c2p select 1) / 3.5 * 6.5)];
		private _c3sc = ctrlScale _c3;
		private _c3sc2 = _c3sc / 3.5 * 6.5;
		// hint ("c3sc2: " + str _c3sc2);
		private _c3p = ctrLPosition _c3;
		private _c3p2 = [3.20 * (0.01875 * Safezoneh),(_c3p select 1) - ((_c3p select 1) / 3.5 * 6.5)];
		_normsight = {
			if(ACE_player == gunner _v)then{
				_c2 ctrlSetText "\sg_cup_vehicles\data\t55_ret_w.paa";
				_c3 ctrlSetText "\sg_cup_vehicles\data\t55_mark_w.paa";
				_c2 ctrlSetScale _c2sc;
				_c2 ctrlSetPosition _c2p;
				_c2 ctrlCommit 0.005;
				_c3 ctrlSetScale _c3sc;
				_c3 ctrlSetPosition _c3p;
				_c3 ctrlCommit 0.005;
			};
		};
		private _parse = 0;
		while{not(isNull _c)}do
		{
			waitUntil {sleep 0.1;((parseNumber (ctrlText _c)) != _parse)};
			switch (parseNumber (ctrlText _c)) do {
				case 2.5 : {
					call _normsight;
				};
				case 4.6 : {	
					if(ACE_player == gunner _v)then{
						_c2 ctrlSetScale 1.85714;
						_c2 ctrlSetPosition _c2p2;
						_c2 ctrlCommit 0.005;
						_c3 ctrlSetPosition _c3p2;
						_c3 ctrlSetScale _c3sc2;
						_c3 ctrlCommit 0.005;
					};
				};
				default {
					if(ACE_player == gunner _v)then{
						_c2 ctrlSetText "";
						_c3 ctrlSetText "";
						_c2 ctrlSetScale _c2sc;
						_c2 ctrlSetPosition _c2p;
						_c2 ctrlCommit 0.005;
						_c3 ctrlSetScale _c3sc;
						_c3 ctrlSetPosition _c3p;
						_c3 ctrlCommit 0.005;
					};
				};
			};
			if (ACE_player!=gunner _v AND ACE_player!=driver _v) then {
				call _normsight
			};
			/* 
			hint str _parse;
			waitUntil {sleep 0.1;_parse > 2.5 OR (ACE_player!=gunner _v AND ACE_player!=driver _v)}; */
			_parse = parseNumber (ctrlText _c);
			// hint str _parse;
			
		};
		uiNameSpace setVariable ["RHS_t55_Ctrl",displayNull];
	};

};