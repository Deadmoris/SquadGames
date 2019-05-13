disableSerialization;
private ["_weapDirrection","_gunner","_typeTigr","_gun","_t","_milSys","_rounding","_showT","_showCharge","_gunDir","_barrelDir","_layer","_display","_ctrlT","_ctrlE","_ctrlCharge","_ctrlBubble","_charge", "_el_style","_el_actual","_draw3dhandle","_handlers","_keyDownHandle"];
	
_gun = vehicle player;
diag_log "Entering TE mode";
diag_log _this;
_aiming_circle_mode = false;
if (_gun isKindOf "bn_ace2_aiming_circle_NATO") then {
	//_gun = _this select 0;
	_aiming_circle_mode = true;
};
_t = 0;

_milSys = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_milSys");
_rounding = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_rounding_T");
_showT = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_show_traverse");
_showCharge = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_show_firemode");
_showDeflection = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_show_deflection");
_showAzimuth = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_show_azimuth");
_el_style = getNumber (configFile >> "CfgVehicles" >> typeOf _gun >> "bn_arty_elevation_style");

if (_milSys==0) then {_milSys=6400};
if (_rounding==0) then {_rounding=1};
if (_showDeflection==1) then {
	_handlers = [_gun] call bn_te_fnc_cam_create;
	_draw3DHandle = _handlers select 0;
	_keyDownHandle = _handlers select 1;
};

_gunDir = 0;
_barrelDir = 0;
_layer = ["BN_TE"] call BIS_fnc_rscLayer;
_layer cutRsc ["BN_TE", "PLAIN", 0, false];
_camViewChanged = false;
_typeTigr = _gun isKindOf "rhs_tigr_sts_vdv";

if(_typeTigr)then{
	_gunner = player in ((fullCrew [_gun, 'gunner', true]) select 1);
}else{
	_gunner = false;
};

while {((_gunner) || (player == (gunner _gun))) && {_display = uiNamespace getVariable ["BN_TE_Display", displayNull]; !(isNull _display)}} do {
/* 	_display = uiNamespace getVariable ["BN_TE_Display", displayNull];
	if !(isNull _display) then { */
	scopeName "bn_te_loop1";
	if(_typeTigr)then{
		_gunner = player in ((fullCrew [_gun, 'gunner', true]) select 1);
		if (!_gunner) then {breakOut "bn_te_loop1"};
	};
		_ctrlT = _display displayCtrl 955001;
		_ctrlE = _display displayCtrl 955002;
		_ctrlCharge = _display displayCtrl 955004;
		_ctrlBubble = _display displayCtrl 955005;
		_ctrlDeflection = _display displayCtrl 955008;
		_ctrlGunSight = _display displayCtrl 955009;
		_ctrlGunSightReticle = _display displayCtrl 955010;
		_ctrlGunSightReticleFullScreen = _display displayCtrl 955011;
		_ctrlGunSightShadeLeft = _display displayCtrl 955012;
		_ctrlGunSightShadeRight = _display displayCtrl 955013;
		_camViewChanged = uiNamespace getVariable ["BN_TE_CamViewChanged", false];
		
		if (_showT == 1) then {
			_gunDir = (vectorDir _gun select 0) atan2 (vectorDir _gun select 1);
			if (_gunDir < 0) then {_gunDir=_gunDir+360};
			_barrelDir = ((_gun weaponDirection (weapons _gun select 0)) select 0) atan2 ((_gun weaponDirection (weapons _gun select 0)) select 1);
			if (_barrelDir < 0) then {_barrelDir=_barrelDir+360};
			// доворот
			_t = floor ((((_barrelDir - _gunDir) + 180) % 360 - 180) / 360 * (_milSys/_rounding))*_rounding;
			_sign = "";
			if (_t>0) then {_sign = "+"};
			_ctrlT ctrlSetText ("Доворот " + _sign + str (_t)); //!
		} else {
			if (_showAzimuth == 1) then {
				_t =  (_milSys-(floor((_gun getVariable ["bn_sight_orientation",0])*_milSys/360) mod _milSys)) mod _milSys;
				_ctrlT ctrlSetText ("Азимут " + str (_t));
			};
			if (_showAzimuth == 2) then {
				_t =  (floor ((((_gun weaponDirection (weapons _gun select 0)) select 0) atan2 ((_gun weaponDirection (weapons _gun select 0)) select 1)) * _milSys / 360) + _milSys) % _milSys;
				_ctrlT ctrlSetText ("Азимут " + str (_t));
			};
			if (_showAzimuth == 0) then {
				_ctrlT ctrlShow false;
			};
		};	
		if (_el_style == 0) then {
			_e = floor ((asin ((_gun weaponDirection (weapons _gun select 0)) select 2)) / 360 * _milSys); // прицел
			_ctrlE ctrlSetText ("Прицел " + str (_e));
			_ctrlBubble ctrlShow false;
		};
		if (_el_style == 0) then {
			_e = floor ((asin ((_gun weaponDirection (weapons _gun select 0)) select 2)) / 360 * _milSys); // прицел
			_ctrlE ctrlSetText ("Прицел " + str (_e));
			_ctrlBubble ctrlShow false;
		} else {
			if (_el_style == 2) then { 

				if (_aiming_circle_mode) then { 
					_azimuth = _gun animationPhase "MainTurret";
					_deflection = (_gun animationPhase "OpticRevolve") % _milSys;
					_azimuth = floor(_azimuth / pi * (_milSys/-2));
					if (_azimuth < 0) then {_azimuth = _milSys+_azimuth;};
					_deflection = _milSys - _azimuth + _deflection;
					if (_deflection < 0) then {_deflection = _deflection + _milSys;};
					if (_deflection > _milSys) then {_deflection = _deflection - _milSys;};
					_ctrlT ctrlShow true;
					_ctrlE ctrlShow true;
					_ctrlT ctrlSetText ("Буссоль " + str (_azimuth));
					_ctrlE ctrlSetText ("Угломер " + str (_deflection));	
					
				} else {// дальность для m224 плита m8 (через аппроксимацию)
				
					_e = asin ((_gun weaponDirection (weapons _gun select 0)) select 2);
					_e = (_e max 45) min 82;
					_e0 = floor ((0.00198689195200074*(_e^3))-(0.571896140674652*(_e^2))+(39.979440992698*_e)-415.146849617362); 
					_e1 = floor ((0.00470526384401637*(_e^3))-(1.4864119355916*(_e^2))+(104.693792551755*_e)-821.76074694097);
					_ctrlT ctrlShow true;			
					_ctrlT ctrlSetText (format ["Заряд0 %1м", _e0]);
					_ctrlE ctrlSetText (format ["Заряд1 %1м", _e1]);
					
				};		
				_ctrlBubble ctrlShow false;
				
			} else {
				if (_el_style == -1) then {
					_ctrlBubble ctrlShow false;
					_ctrlE ctrlShow false;
				} else {
					_e = _gun getVariable ["tu_arty_elevation_dial",0];
					if(_typeTigr)then{
						_weapDirrection = (_gun modelToWorld (_gun selectionPosition "weapon_ags_end")) vectorDiff (_gun modelToWorld (_gun selectionPosition "weapon_ags_start")); //weaponDirection не определяет
					}else{
						_weapDirrection = (_gun weaponDirection (weapons _gun select 0));
					};
						
					_el_actual = floor ((asin (_weapDirrection select 2)) / 360 * _milSys);
					_ctrlE ctrlSetText ("Прицел " + str (_e));
					_ctrlBubble sliderSetRange [-20, 20];
					_ctrlBubble sliderSetPosition (_el_actual);
				};
			};
		};
		
		if (_showCharge == 1) then {	// заряд
			_charge = currentWeaponMode gunner _gun;
			_ctrlCharge ctrlSetText (getText (configFile >> "CfgWeapons" >> (weapons _gun select 0) >> _charge >> "displayName"));
		} else {_ctrlCharge ctrlShow false};
		
		if (_showDeflection == 1) then {	// угломер
			if (_camViewChanged) then {
				_camView = uiNamespace getVariable ["BN_TE_CamView", 0];
				_tu_arty_gun_sight_cam = uiNamespace getVariable "tu_arty_gun_sight_cam";
				if (_camView == 0) then
				{
					_tu_arty_gun_sight_cam cameraEffect ["internal", "BACK"];
					_ctrlGunSight ctrlShow false; 
					_ctrlGunSightReticle ctrlShow false;
					_ctrlGunSightReticleFullScreen ctrlShow true;
					_ctrlGunSightShadeLeft ctrlShow true; 
					_ctrlGunSightShadeRight ctrlShow true; 
					uiNamespace setVariable ["BN_TE_CamView", 1];
				} else {
					_tu_arty_gun_sight_cam cameraEffect ["internal", "back", "bngunsightsurface"];
					_ctrlGunSight ctrlShow true; 
					_ctrlGunSightReticle ctrlShow true;
					_ctrlGunSightReticleFullScreen ctrlShow false;
					_ctrlGunSightShadeLeft ctrlShow false; 
					_ctrlGunSightShadeRight ctrlShow false; 
					uiNamespace setVariable ["BN_TE_CamView", 0];
				};
				_camViewChanged = false;
				uiNamespace setVariable ["BN_TE_CamViewChanged", false];
			};
			
			_deflection = (_gun getVariable ["bn_deflection",floor(_milSys/2)]);
			_level = (_gun getVariable ["bn_sight_level_deflection",0]);
			_ctrlT ctrlShow true;
			_ctrlT ctrlSetText ("Уровень " + str (_level));	
			_ctrlDeflection ctrlSetText ("Угломер " + str (_deflection));
			
		} else {
			_ctrlDeflection ctrlShow false; 
			_ctrlGunSight ctrlShow false; 
			_ctrlGunSightReticle ctrlShow false; 
			_ctrlGunSightReticleFullScreen ctrlShow false;
			_ctrlGunSightShadeLeft ctrlShow false; 
			_ctrlGunSightShadeRight ctrlShow false; 
		};
//	};
	sleep 0.1;
};

_layer cutFadeOut 1;
if (_showDeflection == 1) then {
	removeMissionEventHandler ["Draw3d", _draw3dhandle];
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyDownHandle];
	_tu_arty_gun_sight_cam = uiNamespace getVariable "tu_arty_gun_sight_cam";
	_tu_arty_gun_sight_cam cameraEffect ["TERMINATE", "BACK"];
	camDestroy _tu_arty_gun_sight_cam;
	uiNamespace setVariable ["tu_arty_gun_sight_cam",objNull];
};
