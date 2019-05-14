/*
1g46 simulation for t80u/t90 tanks

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_9S475_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_9S475_Ctrl",_this select 0];

	[] spawn
	{
		disableSerialization;
		private _c = uiNamespace getVariable "RHS_9s475_Ctrl";

		//angle indicator
		private _s = _c displayCtrl 1;
		//current zoom
		private _m = (_c displayCtrl 154);

		//init variables
		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;
		private _lockPos = [0,0,0];
		private _previousMode = "";
		private _currentMode = ctrlText _m;

		//blocking certain options while piloting
		inGameUISetEventHandler ["Action",
		"
			_return=false;
			if ( (_this select 3) in ['LandGearUp','LandGear','EngineOn','EngineOff']) then {
				(vehicle (call rhs_fnc_findPlayer)) vehicleChat 'Hm... I cannot find those knobs here...';
				_return=true;
			};
			_return
		"];
		_blockKey = ([] call BIS_fnc_displayMission) displayAddEventHandler  [   "KeyDown",   "
			private _v = (vehicle (call rhs_fnc_findPlayer));
			if (
					( (_this select 1) in (actionKeys 'LandGear'+actionKeys 'LandGearUp'+actionKeys 'EngineOn'+actionKeys 'EngineOff') ) or
					( !(isEngineOn _v) &&  ( (_this select 1) in (actionKeys 'heliCollectiveRaise') ) )
			)then { _v vehicleChat 'Hm... I cannot find those knobs here...';true;}else{false};
		" ];

		//Missle launcher is avaiable only in missle mode
		/* private _weapons = weapons _v;
		private _missleLauncher ="";
		{if(_x isKindOf ["rhs_weap_9K114_launcher",configFile >> "CfgWeapons"])then{_missleLauncher =_x;_weapons = _weapons - [_x]}}foreach _weapons;
		_v removeWeaponGlobal _missleLauncher; */

		while{not(isNull _m)}do
		{
			sleep 0.01;
			// variable updated per cycle
			_currentMode = ctrlText _m;
			_lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);
			// performe action only on mode change
			if(_currentMode != _previousMode)then{
				switch(_currentMode)do{
					// remove missiles, unhide bank indicator & change animation modyfing gunnerView mem point to primary one
					case "": { //KPS53AV
						_v animate ["viewChange",0,true];
						// {_v removeWeaponGlobal _x}foreach (weapons _v);
						// {_v addWeaponGlobal _x}foreach _weapons;
						_s ctrlSetTextColor [1,1,1,0];
						// fade effect representing switching between two separate sights
						titleCut ["", "black in", 3];
					};
					// remove missiles
					case "9S475_3": {
						// {_v removeWeaponGlobal _x}foreach (weapons _v);
						// _v addWeaponGlobal _missleLauncher;

						_s ctrlSetTextColor [1,1,1,1];
						_v animate ["viewChange",1,true];
						if(_previousMode isEqualTo "")then{
							// fade effect representing switching between two separate sights
							titleCut ["", "black in", 3];
						};
					};
					case "9S475_10": {
						_s ctrlSetTextColor [1,1,1,0];
						//fix for directionStabilization quirk
						_v lockCameraTo [_lockPos,[0]];
						sleep 0.01;
						_v lockCameraTo [objNull,[0]];
					};
				};
				_previousMode = _currentMode;
			};
			// bank indicator anims
			if(_currentMode isEqualTo "9S475_3")then{
				_s ctrlSetAngle [deg(_v animationPhase "mainTurret"),0.5,0.5];
			};
		};
		// readd all weapons for AI
		// {_v removeWeaponGlobal _x}foreach (weapons _v);
		// {_v addWeaponGlobal _x}foreach (_weapons+[_missleLauncher]);

		// deinitialize variables & event handlers
		uiNameSpace setVariable ["RHS_9s475_Ctrl",displayNull];
		([] call BIS_fnc_displayMission) displayRemoveEventHandler ['KeyDown', _blockKey];
		inGameUISetEventHandler ["Action", ""];
	};
};