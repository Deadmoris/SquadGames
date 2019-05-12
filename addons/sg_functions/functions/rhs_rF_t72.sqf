uiNameSpace setVariable ["RHS_t72_Ctrl",_this select 0];

//WIDOKI
[] spawn {
	private["_v","_f","_k","_c"];
	private _p=call rhs_fnc_findPlayer;
	_v = vehicle _p;
	disableSerialization;

	_c=uiNamespace getVariable "RHS_t72_Ctrl" displayCtrl 258;
	_z=(uiNamespace getVariable "RHS_t72_Ctrl" displayCtrl 180);
	//loader switch
	_loaderSwitch = (uiNamespace getVariable "RHS_t72_Ctrl" displayCtrl 312);
/* 
	//next ammo
	rhs_loadType=_v getVariable ["rhs_loadType",1];
	_load=true;

	_v1=[[0,1],([-67,-97,-125,-155] select rhs_loadType)] call BIS_fnc_rotateVector2D;
	_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];

	rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);

	//blocking manual reload for player
	inGameUISetEventHandler ["Action", "(_this + ['RHS_t72_Ctrl',0]) call rhs_fnc_autoloader_ui_eh;"];
 */
	_mags = [_v] call rhs_fnc_ammoIndexing;


	_f=parseNumber (ctrlText _z);
	while{ACE_player==gunner _v OR ACE_player==driver _v}do
	{
		if(_f!=(parseNumber (ctrlText _z)))then
		{
			if(ACE_player==gunner _v)then{
				if(parseNumber (ctrlText _z)==9 AND _v animationPhase "sightHide" !=0)then
				{
					_v animate ["sightHide",0,true];_c ctrlSetText "\rhsafrf\addons\rhs_t72\data\RF\TPD_K1_lasermark_6x.paa";
				}else{
					if(_v animationPhase "sightHide" ==0 AND parseNumber (ctrlText _z)!=9)then{_v animate ["sightHide",0.6,true];_c ctrlSetText "";};
				};
			};
			_f=parseNumber (ctrlText _z);
		};

		//autoloader ammo switch
		// [_loaderSwitch,0] call rhs_fnc_ammoSwitch;


		// autoloader
		/* if( ((_v animationPhase "reload_handler" != 0) OR (_v animationPhase "reload_handler_magazine" != 0) OR (_v doorPhase "recoil_source" !=0) )  AND {_load})then
		{
			_load=false;
			//autoloader
			[rhs_loadType,_v,_mags,0] spawn rhs_fnc_autoloader;
		}else{
			if(not(_load) AND {(_v animationPhase "reload_handler" == 0) AND (_v animationPhase "reload_handler_magazine" == 0)  AND (_v doorPhase "recoil_source" ==0)} AND {(currentWeapon _v) == (_mags select 0)} )then
			{
				_load=true;
			};
		}; */
		sleep 0.001;
	};
	inGameUISetEventHandler ["Action", ""];
	//saving settings, useful when changing between seats
	{
		_v setVariable [_x select 0,_x select 1];
	}foreach [
		["rhs_loadType",rhs_loadType]
	];
};

//FCS
[] spawn {
	private["_v","_t"];
	_v = vehicle ACE_player;
	disableSerialization;


	rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
	rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
	rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);

	while{(ACE_player==gunner _v OR ACE_player==driver _v)}do{

		waitUntil {sleep 0.05;inputAction rhs_key_lase_tgt_GLB > 0 OR inputAction rhs_key_rng_up_GLB>0 OR inputAction rhs_key_rng_dwn_GLB>0 OR (ACE_player!=gunner _v AND ACE_player!=driver _v)};

		if(ACE_player!=gunner _v AND ACE_player!=driver _v)exitWith{};
		if(ACE_player != driver _v)then{
			if(inputAction rhs_key_lase_tgt_GLB >0)then{
			//komputer balistyczny
				_t=parseNumber ctrlText (uiNamespace getVariable "RHS_t72_Ctrl" displayCtrl 151);
				//_t=ACE_player distance (laserTarget _v);
				if(_t>400 AND _t<4000-(990*(fog+rain)/2) )then{
					[_t] call RHS_fnc_rF_t72_Animate;
				}else{if(cameraView=="gunner")then{playSound ["RHS_Error",true]};sleep 2};
				// Call laser target function
				[_v, _t] call RHS_fnc_laserTarget;
			}else{
				//ręczna korekta
				_t=(_v animationPhase "PrimarySight_range");
				if(inputAction rhs_key_rng_up_GLB>0 AND _t<=4000)then{
					_t=_t+25;
					[_t] call RHS_fnc_rF_t72_Animate;
				};
				if(inputAction rhs_key_rng_dwn_GLB>0 AND _t>=25)then{
					_t=_t-25;
					[_t] call RHS_fnc_rF_t72_Animate;
				};
			};
		};
		sleep 0.1;
	};
};