//if (!isserver) exitwith {};
/////////////// Лоад не цепляет самого юнита. Надо переделать массив чтобы был сам юнит в 1 элементе а массив во в2
//////// по виаклам - надо еще проверять есть ли айкон, чтобы не было невидимых.

diag_log "save Started";


_arraytostring = {
	
	_result = [];
	// if (!isnull _this) then {
	if ((count _this) > 0) then {
		{
		switch (typename _x) do {
			case "STRING" : {
				_result pushback (str _x);
				// player globalchat (str _result);
			};
			case "ARRAY" : {
				_promres = [];
				{
					// systemchat str _x;
					if ((typename _x) == "STRING") then {
						_promres pushback (str _x);
						// player groupchat (str _promres);
					} else {
						if ((typename _x) == "ARRAY") then {
							_2promres = [];
							{
								if ((typename _x) == "STRING") then {
									_2promres pushback (str _x);
									// player groupchat (str _2promres);
								} else {
									_2promres pushback _x;
									// player groupchat (str _2promres);
								};
							} foreach _x;
							_promres pushback _2promres;
							// player groupchat (str _promres);
						} else {
							_promres pushback _x;
							// player groupchat (str _promres);
						};
					};
				} foreach _x;
				_result pushback _promres;
				// player sidechat (str _result);
			};
			default {
				_result pushback _x;
				// player sidechat (str _result);
			};
		};
		
		} foreach _this;
	};
	_result
};
			
"blend_writeFile" callExtension "datemode;true";
"blend_writeFile" callExtension format ["name;C:\save\%1;txt",missionName];
// "blend_writeFile" callExtension "name;C:\MYFILE;txt";
"blend_writefile" callExtension "writeline;----------start---------";
// "blend_writefile" callExtension format["writeline;%1", _var];
sarray = [];
soarray = "";
gnum = 0;
vnum = 0;
inum = -1;
	// inum2 = inum;
_group = 0;
_groups = [];
// _units = allunits + alldead;
//{_x enableSimulation false} foreach _units;
//_units = allunits;
private ["_group"];
/*

-enter- \n
" ""
-onek-"" " 
""-onek- " 
-onek- "
-dobk- ""
' "

*/


_groups = allgroups;

// _gitems = count _groups;
_gitems = {(count units _x) > 0} count _groups;
pzn_dta = "";
"blend_writefile" callExtension "writeline;class groups {";
"blend_writefile" callExtension format["writeline;items = %1;",_gitems];
// pzn_dta = (pzn_dta + format ["class groups {-enter-items = %1;-enter-",_gitems]);
for "_i" from 0 to ((count _groups) - 1) do {
	_group = _groups select _i;
	_data = [];
	_units = units _group;
	
			inum2 = -1;
	//_items2 = {lifestate _x == "ALIVE"} count _units;
	// _items = {_x iskindof "man"} count _units;
	_items = count _units;
	// hint str _Items;
	//_items = count _units;
	if (_items > 0) then {
		//_data set [count _data, _units
		for "_i2" from 0 to (_items - 1) do {
			_unit = _units select _i2;
			// systemchat str _unit;
			_dammage = getdammage _unit;
			_health = (1 - _dammage);
			if (_unit iskindof "man") then {
				// pzn_dta = (pzn_dta + format ["class Item%1 -enter-{-enter-",gnum]);
				//if (_dammage > .8) then {
					private ["_backpackcode","_weapons","_weaponcode"];
					inum = inum + 1;
					inum2 = inum2 + 1;
					_positionx = (getpos _unit) select 0;
					_positionz = (getposasl _unit) select 2;
					_positiony = (getpos _unit) select 1;
					_azimut = getdir _unit;
					_class = str (typeof _unit);
					_rank = str (rank _unit);
					/*for "_i3" from 1 to 600 do {
					_weapons = _weapons - [format ["ItemRadio_%1",_i3]];
					};
					_weapons = _weapons + ["ItemRadio"];*/
					_Uniform = str (str (uniform _unit));
					_vest = str (str (vest _unit));
					_headgear = str (str (headgear _unit));
					_goggles = str (str (goggles _unit));
					_magazines = [];
					 // {_magazines pushback [str (_x select 0),(_x select 1)];} foreach (magazinesAmmo _unit);
					_magazines = (magazinesAmmo _unit) call _arraytostring;
					
					_primaryw = primaryweapon _unit;
					_secondaryw = secondaryweapon _unit;
					_handgunW = handgunWeapon _unit;
					_primaryweapon = str (str _primaryw);
					if ((gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsOptic" >> "item") != "") or {gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsAcc" >> "item") != ""} or {gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsMuzzle" >> "item") != ""}) then {
						_primaryweapon = str (str configname (inheritsFrom (configFile >> "Cfgweapons" >> _primaryw)));
					};
					_secondaryweapon = str (str _secondaryw);
					if ((gettext (configFile >> "Cfgweapons" >> _secondaryw >> "LinkedItems" >> "LinkedItemsOptic" >> "item") != "") or {gettext (configFile >> "Cfgweapons" >> _secondaryw >> "LinkedItems" >> "LinkedItemsAcc" >> "item") != ""} or {gettext (configFile >> "Cfgweapons" >> _secondaryw >> "LinkedItems" >> "LinkedItemsMuzzle" >> "item") != ""}) then {
						_secondaryweapon = str (str configname (inheritsFrom (configFile >> "Cfgweapons" >> _secondaryw)));
					};
						_handgunWeapon = str (str _handgunW);
					if ((gettext (configFile >> "Cfgweapons" >> _handgunW >> "LinkedItems" >> "LinkedItemsOptic" >> "item") != "") or {gettext (configFile >> "Cfgweapons" >> _handgunW >> "LinkedItems" >> "LinkedItemsAcc" >> "item") != ""} or {gettext (configFile >> "Cfgweapons" >> _handgunW >> "LinkedItems" >> "LinkedItemsMuzzle" >> "item") != ""}) then {
						_handgunWeapon = str (str (str configname (inheritsFrom (configFile >> "Cfgweapons" >> _handgunW))));
					};
					
				
					_weaponsi =(weaponsItems _unit) call _arraytostring;
					/* _weaponsi = [];
					 {
						_podm = [];
						{
						// hint str _x;
							if ((typename _x) != "string") then {
								_podm pushback [str (_x select 0),(_x select 1)];
							} else {
								_podm pushback str _x;
							};		
						} foreach _x;
						_weaponsi pushback _podm;
					} foreach (weaponsItems _unit); */
					_backo = backpackContainer _unit;
					_backwitems = [];
					_backobj = str (str (typeof _backo));
					if (!isnull _backo) then {
						_backwitems = (weaponsItemsCargo _backo) call _arraytostring;
					};
					// _uitems = str (str (items _unit));
					_uitems = [];
					 {_uitems pushback str _x;} foreach (items _unit);
					// _uaitems = str (str (assigneditems _unit));
					_uaitems = [];
					 {_uaitems pushback str _x;} foreach (assigneditems _unit);
					_hitpart = [];
					if (_health > 0.1) then {
						 {
							_dam = _unit getHitPointDamage _x;
							if (_dam > 0) then {
								_hitpart pushback [str _x,_dam];
							};
						} foreach ["HitHead","HitBody","HitHands","HitLegs"];
					};
					_arraycode = format [ "[this,[%1,%2,%3,%4,%5,%6,%7,%8,%9,%10,%11,%12,%13,%14]]",_Uniform,_vest,_headgear,_goggles,_magazines,_primaryweapon,_secondaryweapon,_handgunWeapon,_weaponsi,_backobj,_backwitems,_uitems,_uaitems,_hitpart];
					//_backcont = getMagazineCargo (unitbackpack _unit);
					//_backwcont = backpackItems _unit;
					
				/*if (!isnull _backobj) then {_backpackcode = format ["this addbackpack ""%1""; clearMagazineCargo backpackContainer this; _cargo = [%2,%3,%4,(unitbackpack this)] execvm -dobk-fillcargo.sqf-dobk-",typeof (unitbackpack _unit),_backcont,_backwcont,_backbcont]};
					_woundcode = "";
					if (_dammage > 0) then {_woundcode = format ["[this, %1] call ace_sys_wounds_fnc_addDamage;",_dammage];};
					_ace_back = _unit getvariable ["ACE_weapononback","-dobk--dobk-"];
					_ace_ruck = _unit getvariable ["ACE_RuckMagContents",[]];*/
					_pname = (_unit getvariable ["PlayerName",[(name _unit)]]) select 0;
					// _sname = roleDescription  _unit;
					// if (_sname == "") then {_sname = getText(configFile >> "cfgVehicles" >> (typeof _unit) >> "displayname")};
					_sname = getText(configFile >> "cfgVehicles" >> (typeof _unit) >> "displayname");
					_name = ( _sname + "(" + _pname + ")");
					//_side = (side _unit);
					_side = switch (getnumber (configFile >> "CfgVehicles" >> typeOf _unit >> "side")) do {
						case 0 : {east};
						case 1 : {west};
						case 2 : {resistance};
						default {civilian};
					};
					// if (lifestate _unit == "alive") then {
					if (_i2 == 0) then {
						"blend_writefile" callExtension format["writeline;class Item%1 {",gnum];
						// "blend_writefile" callExtension "writeline;";
						"blend_writefile" callExtension format["writeline;side = ""%1"";",_side];
						"blend_writefile" callExtension "writeline;class Vehicles {";
						// "blend_writefile" callExtension "writeline;{";
						"blend_writefile" callExtension format["writeline;items = %1;",_items];
					};
						"blend_writefile" callExtension format["writeline;class Item%1 {",inum2];
						// "blend_writefile" callExtension "writeline;{";
						
						"blend_writefile" callExtension format["writeline;position[] = {%1,%2,%3};",_positionx,_positionz,_positiony];
						"blend_writefile" callExtension format["writeline;azimut = %1;",_azimut];
						"blend_writefile" callExtension "writeline;special = ""none"";";
						"blend_writefile" callExtension format["writeline;id = %1;",inum];
						"blend_writefile" callExtension format["writeline;side = ""%1"";",_side];
						"blend_writefile" callExtension format["writeline;vehicle = %1;",_class];
						
						if (_unit == leader _unit) then {
							"blend_writefile" callExtension "writeline;leader = 1;";
						};
						"blend_writefile" callExtension format["writeline;rank = %1;",_rank];
						if (_health > 0.1) then {
							"blend_writefile" callExtension "writeline;player = ""play cdg"";";
							"blend_writefile" callExtension format["writeline;init= ""_load = %1 execvm """"load.sqf"""";"";", _arraycode];
						} else {
							"blend_writefile" callExtension format["writeline;init= ""_load = %1 execvm """"loaddead.sqf"""";"";", _arraycode];
						};
						// "blend_writefile" callExtension format["writeline;init= ""%1 execvm """"load.sqf"""";[this] call compile preprocessFileLineNumbers """"a3ru_scripts\a3ru_unitInit.sqf"""";""", _arraycode];
						"blend_writefile" callExtension format["writeline;description = ""%1"";",_name];
						"blend_writefile" callExtension format["writeline;health = %1;",_health];
						"blend_writefile" callExtension "writeline;};  //end of membah";
						// "blend_writefile" callExtension format["writeline;side = '%1'; -enter-class Vehicles -enter-{ -enter-items = %2;-enter-class Item%3 -enter-{ -enter-position[] = {%4,%5,%6};-enter- azimut = %7;-enter- special = 'none';-enter-id = %2;-enter- side = '%8';-enter- vehicle = %9; -enter-player = 'play cdg';-enter- leader = 1;rank = %10;-enter-init= -onek-%11 execvm ""load.sqf"";[this] call compile preprocessFileLineNumbers ""a3ru_scripts\a3ru_unitInit.sqf"";-onek-; description = -onek-%12-onek-;health = %13;-enter-};  //end of membah-enter-",_side,1,0,_positionx,_positionz,_positiony,_azimut,_side,_class,_rank,_arraycode,_name,_health,inum];
					// pzn_dta = (pzn_dta + format ["side = '%1'; -enter-class Vehicles -enter-{ -enter-items = %2;-enter-class Item%3 -enter-{ -enter-position[] = {%4,%5,%6};-enter- azimut = %7;-enter- special = 'none';-enter-id = %2;-enter- side = '%8';-enter- vehicle = %9; -enter-player = 'play cdg';-enter- leader = 1;rank = %10;-enter-init= -onek-%11 execvm ""load.sqf"";[this] call compile preprocessFileLineNumbers ""a3ru_scripts\a3ru_unitInit.sqf"";-onek-; description = -onek-%12-onek-;health = %13;-enter-};  //end of membah-enter-",_side,1,0,_positionx,_positionz,_positiony,_azimut,_side,_class,_rank,_arraycode,_name,_health,inum]);
					// } else { 
					// pzn_dta = (pzn_dta + format ["side = '%1'; -enter-class Vehicles -enter-{ -enter-items = %2;-enter-class Item%3 -enter-{ -enter-position[] = {%4,%5,%6};-enter- azimut = %7;-enter- special = 'none';-enter-id = %3;-enter- side = '%8';-enter- vehicle = %9; -enter- leader = 1;rank = %10;-enter-init= -onek-%11 execvm ""load.sqf""; -onek-; description = -onek-%12-onek-;health = %13;-enter-};  //end of membah-enter-",_side,1,0,_positionx,_positionz,_positiony,_azimut,_side,_class,_rank,_arraycode,_name,_health,inum]);
					// };
					// hint str pzn_dta;
					if (_i2 == (_items - 1)) then {
						// "blend_writefile" callExtension "writeline;};";
						"blend_writefile" callExtension "writeline;};}; //end of group";
						gnum = gnum + 1;
						// pzn_dta = (pzn_dta + "-enter-}; //end of group-enter-");
					};
					//_data set [_i2,[getPlayerUID _unit,weapons _unit, magazines _unit, getdammage _unit, _unit getvariable ["ACE_RuckMagContents",[]];];];
					
					// inum = _i2;
				};
			};
			//_unit getvariable ["ACE_weapononback",-dobk-];
			//_unit getvariable ["ACE_weapononback",-dobk-];
		};
	/* if (inum > inum2) then {
		pzn_dta = (pzn_dta + "-enter-};-enter-}; //end of group-enter-");
		gnum = gnum + 1;
	}; */
	//};
};
						"blend_writefile" callExtension "writeline;}; //end of all groups";
		// pzn_dta = (pzn_dta + "-enter-};-enter-}; //end of group-enter-");
// pzn_dta = (format ["------start------class groups {-enter-items = %1;-enter-",gnum] + pzn_dta + "-enter-}; //end of all groups-enter-");


// _badclasses = ["ACE_Grenade_Geometry","ACE_JerryCan_15","rhs_cargo_btr60","ACE_WoundingLitter_Morphine","rhs_cargo_btr70ace","rhs_cargo_bmp2","ACE_WoundingLitter_Traumabandage","ACE_WoundingLitter_Bandage","ACE_ACE_WoundingLitterMedkit","ACE_ACE_WoundingLitterTourniquet","ACE_VIP_STROBE_OBJECT","rhs_cargo_t72","ACE_WoundingLitter_Epinephrine"];
_badclasses = [];
_avehicles = vehicles;
_dta = "";
_vitems = count _avehicles;
// hint str _vitems;
if ( _vitems > 0) then {
	"blend_writefile" callExtension "writeline;class Vehicles {";
	"blend_writefile" callExtension format ["writeline;items = %1;",_vitems];
//for "_i" from 0 to (_vitems - 1) do {
	{		
			private ["_acedam","_veh"];
			"blend_writefile" callExtension format ["writeline;class Item%1 {",vnum];
	//_group = _groups select _i;
	_data = [];
		_veh = _x;
		_dammage = 1 - (getdammage _veh);
		//if (_dammage >= .9) exitwith {hint "not alive"}; 
		//if (_dammage < .1) exitwith {hint "dammaged"}; 
		if (!(typeof _veh in _badclasses)) then {
			private ["_Hitpoint","_hitpart","_hitpoints","_hpname","_tarr","_mtarr","_wtarr","_cmagazines","_nmagazines","_ccmagazines"];
			// _dta = (_dta + format ["class Item%1 -enter-{-enter-",vnum]);
			vnum = vnum + 1;
			inum = inum + 1;
			_positionx = (getpos _veh) select 0;
			_positionz = (getposasl _veh) select 2;
			_positiony = (getpos _veh) select 1;
			"blend_writefile" callExtension format ["writeline;position[] = {%1,%2,%3};",_positionx,_positionz,_positiony];
			_azimut = getdir _veh;
			"blend_writefile" callExtension format ["writeline;azimut = %1;",_azimut];
			"blend_writefile" callExtension "writeline;special = ""none"";";
			"blend_writefile" callExtension format ["writeline;id = %1;",inum];
			"blend_writefile" callExtension "writeline;side = ""empty"";";
			_class = str (typeof _veh);
			if ((getnumber(configFile >> "cfgVehicles" >> (typeof _veh) >> "scope") < 2) or {getText(configFile >> "cfgVehicles" >> (typeof _veh) >> "icon") == ""}) then {
				"blend_writefile" callExtension "writeline;vehicle= ""HeliHEmpty"";";
				"blend_writefile" callExtension format ["writeline;text= %1;",_class];
			} else {
				"blend_writefile" callExtension format ["writeline;vehicle= %1;",_class];
			};
			
			if (_dammage > .1) then { 
				// _dmagazines = [];
				private _dmagazines = magazinesAmmoCargo _veh;
				private _nmagazines = [];
				private _cmagazines = [];
				private _ccmagazines = [];
				{
					_nmclass = _x select 0;
					_nmcount = _x select 1;
					if (_nmcount != getnumber (configFile >> "Cfgmagazines" >> _nmclass >> "count")) then {
						_nmagazines pushback [str _nmclass,_nmcount];
					} else {
						_find = _ccmagazines find _nmclass;
						// systemchat str _find;
						if (_find < 0) then {
							_cmagazines pushback [str _nmclass,1];
							_ccmagazines pushback _nmclass;
							// systemchat str _ccmagazines;
						} else {
							_num = ((_cmagazines select _find) select 1) + 1;
							_cmagazines set [_find,[str _nmclass,_num]];
						};
					};
				} foreach _dmagazines;
				
				_amagazines = [_nmagazines,_cmagazines];
				
				
				_tarr = [];
				_mtarr = [];
				_wtarr = [];
				{
					_i = _forEachIndex;
					_ax = _x;
					_tarr pushback _x;
					_wtarr pushback ((_veh weaponsTurret _x) call _arraytostring);
					_mt = _veh magazinesTurret _x;
					{
						_mtarr pushback [str _x,_veh magazineTurretAmmo [_x,_ax]];
					} foreach _mt;
				} foreach (allturrets _veh);
				//hint str _magazines;
				//_cargomagazines = magazinesAmmoCargo _veh;
				// _cargoweapons = (weaponsItemsCargo _veh) call _arraytostring;
				_cargoweapons = [];
				_cargow = [];
				_cargow = weaponsItemsCargo _veh;
				{
					_primaryw = _x select 0;
					if ((gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsOptic" >> "item") != "") or (gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsAcc" >> "item") != "") or {gettext (configFile >> "Cfgweapons" >> _primaryw >> "LinkedItems" >> "LinkedItemsMuzzle" >> "item") != ""}) then {
						_cargoweapons set [_foreachindex, [str (str configname (inheritsFrom (configFile >> "Cfgweapons" >> _primaryw))),_x select 1,_x select 2,_x select 3,_x select 4]];
					} else {
						_cargoweapons set [_foreachindex, _x];
					};
				} foreach _cargow;
				_cargoweapons = _cargoweapons call _arraytostring;
				_cargobacks = (getbackpackCargo _veh) call _arraytostring;
				_ccitems = [];
				_ccitems = (itemCargo _veh);
				_citems = [];
				_c1items = [];
				{
					
					_find = _c1items find _x;
					// systemchat str _find;
					if (_find < 0) then {
						_citems pushback [str _x,1];
						_c1items pushback _x;
						// systemchat str _ccmagazines;
					} else {
						_num = ((_citems select _find) select 1) + 1;
						_citems set [_find,[str _x,_num]];
					};
				} foreach _ccitems;
				_hitpart = [];
				_vehCfg = configFile >> "CfgVehicles" >> (typeof _veh);
				_hitPointsVeh = _vehCfg >> "HitPoints";
				_hitPointsturVeh = _vehCfg >> "Turrets" >> "MainTurret" >> "HitPoints";
				_hitpoints = [];
				for "_i" from 0 to ((count _hitPointsVeh)-1) do {
					_hpname = configName (_hitPointsVeh select _i);
					_hitpoints pushback _hpname;
				};
				for "_i" from 0 to ((count _hitPointsturVeh)-1) do {
					_hpname = configName (_hitPointsturVeh select _i);
					_hitpoints pushback _hpname;
				};
				// systemchat str _hitpoints;
				
				 {
					private _hdamage = _veh getHitPointDamage _x;
					if (_hdamage > 0) then {
						_hitpart pushback [str _x,_hdamage];
					};
				}
				foreach _hitpoints;
				//["",_magazines,_tarr,_mtarr,_wtarr,_cargomagazines,_cargoweapons,_cargobacks];
				
				//_name = (name _veh);
				//_side = (side _veh);
				"blend_writefile" callExtension format ["writeline;init= ""_vload = [this,[%1,%2,%3,%4,%5,%6,%7,%8]] execvm """"vload.sqf"""";"";",_tarr,_mtarr,_wtarr,_amagazines,_cargoweapons,_cargobacks,_hitpart,_citems];
			} else {
				"blend_writefile" callExtension "writeline;fuel = 0;";
				"blend_writefile" callExtension "writeline;ammo = 0;";
			};
			"blend_writefile" callExtension format ["writeline;health = %1;",_dammage];
			"blend_writefile" callExtension "writeline;};  //end of veh";
			// _dta = (_dta + format ["init= -onek-[this,[%7,%8,%9,%10,%11,%12,%13]] execvm ""vload.sqf"";-onek-; health = %14;-enter-};  //end of veh-enter-",_positionx,_positionz,_positiony,_azimut,inum,_class,_tarr,_mtarr,_wtarr,_amagazines,_cargoweapons,_cargobacks,_hitpart,_dammage]);
		};
	} foreach _avehicles;
	
	// pzn_dta = (pzn_dta + format ["class Vehicles {-enter-items = %1;-enter-",vnum] + _dta +  "-enter-}; //end of vehs-enter-");
	"blend_writefile" callExtension "writeline;}; //end of all vehs";
};
"blend_writefile" callExtension "writeline;----------end---------";

//sleep 1;
// titletext ["done","plain"];
diag_log "save done";
// a3a_var_endMission = _this;
// publicVariable "a3a_var_endMission";