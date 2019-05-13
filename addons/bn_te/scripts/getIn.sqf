private ["_handle","_gun","_typeTigr","_gunner"];

_gun = _this select 0;
_typeTigr = _gun isKindOf "rhs_tigr_sts_vdv";

if (_typeTigr) then {//т.к. у Тигра 2 пухи
	_gunner = (fullCrew [_gun, 'gunner', true]) select 1;
	if(player in _gunner) then { 
		bn_te_handle = [] execVM '\bn_te\scripts\t-e.sqf';
	}; 
}else{
	if (player==(gunner _gun)) then {
		//взяли меня измором, демоны
		//_this execVM '\bn_te\scripts\hideCompass.sqf'; 
		bn_te_handle = [] execVM '\bn_te\scripts\t-e.sqf';
	}; 
};

if ((!(_gun isKindOf "TU_ARTY_M224_m8_mortar"))&&(!(_gun isKindOf "bn_ace2_aiming_circle_NATO"))) then {
	bn_pag_17_handleKeydown_gunner = {
		if ((_this select 1) in (actionKeys "GunElevUp")) exitWith {0 = [0,1,2,3,_this select 2,_this select 3,6,1, vehicle player] execVM "\bn_te\pag-17\el_dial_change.sqf"};
		if ((_this select 1) in (actionKeys "GunElevDown")) exitWith {0 = [0,1,2,3,_this select 2,_this select 3,6,-1, vehicle player] execVM "\bn_te\pag-17\el_dial_change.sqf"};
	};

	_handle = (findDisplay 46) displayAddEventHandler ["KeyDown", {(_this + [vehicle player]) call bn_pag_17_handleKeydown_gunner}]; //tu_arty_handleKeydown_gunner
	
	if (_typeTigr) then {
		while {(player in _gunner)} do {
			_gunner = (fullCrew [_gun, 'gunner', true]) select 1;
			sleep 1;
		};
	}else{
		waitUntil {sleep 1; (player != (gunner _gun))};
	};
	
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", _handle];
};
