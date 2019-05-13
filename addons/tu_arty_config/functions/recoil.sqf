// ������� ACE2 �� ���� ���������� �������
private ["_charge", "_chargeFactor","_elvOff", "_defOff", "_azOff","_gun","_max","_min","_type"];

// diag_log "tu_arty_fnc_recoil";
// diag_log _this;
_gun = _this select 0;
//if (!local _gun) exitWith {};
if (!(_gun turretLocal [0])) exitWith {};

if(_gun isKindOf "TU_ARTY_M224_m8_mortar") then {
	_traversePhase = _gun animationPhase "MainTurretTraverse";
	_elvOff = random 0.0272665;
	_defOff = _traversePhase + (random 3);
	_swOff = random 0.0272665;
	_gun animate ["elev", _elvOff];
	_gun animate ["MainTurretTraverse", _defOff];
	_gun animate ["MainSwing", _swOff];
}else{
	_charge = getNumber (configFile >> "CfgMagazines" >> (currentMagazine _gun) >> "initSpeed");
	_chargeFactor = (_charge/70+1)*(selectRandom[-1,1]);
	_elvOff = (-1+(random 2))*_chargeFactor;
	_defOff = (-0.5+(random 1))*_chargeFactor;
	_azOff = (-0.25+(random 0.5))*_chargeFactor;
	_swOff = (-1+(random 2))*_chargeFactor;
	_azimuthPhase = _gun animationPhase "MainTurret";
	_elevationPhase = _gun animationPhase "MainGunT";
	_traversePhase = _gun animationPhase "MainTurretTraverse";
	_swingPhase = _gun animationPhase "OpticSwing";
	_type = typeOf _gun;
	_max = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "MainGunT" >> "maxValue");
	_min = getNumber (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "MainGunT" >> "minValue");
	_elvOff = ((_elvOff+_elevationPhase) max _min) min _max;
	_azOff = _azOff + _azimuthPhase;
	_defOff = ((_defOff+_traversePhase) max -200) min 200;
	_swOff = ((_swOff+_swingPhase) max -400) min 400;
	_gun animate ["MainGunT", _elvOff];
	_gun animate ["MainTurret", _azOff];
	_gun animate ["MainTurretTraverse", _defOff];
	_gun animate ["OpticSwing", _swOff];
};