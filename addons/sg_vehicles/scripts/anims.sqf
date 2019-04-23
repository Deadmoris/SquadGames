_unit = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_mode = _this select 3;

_multi = 1;
_multi = getNumber (configFile >> "CfgWeapons" >> _weapon >> _mode >> "multiplier");

_rd = ((_unit ammo _muzzle)/_multi) - 1;
if (_rd < 0) then 
{
	_varName = format ["rdCount_%1", _muzzle];
	_rd = _unit getVariable _varName;
	if isNil("_rd") then {_rd = 1} else {_rd = _rd + 1};
	_unit setVariable [_varName, _rd];
};

_BarrelCount = 2;

_BarrelName = getText (configFile >> "CfgWeapons" >> _weapon >> "BarrelName");
_BarrelConvergence = getNumber (configFile >> "CfgWeapons" >> _weapon >> "BarrelConvergence");

_n = _rd % _BarrelCount;
_newPos = [0,0,0];

if (_BarrelName == "Array") then
{

hint "1";

}
else
{
	
	_anim1 = format ["Belt_%1", _n + 1];
	_unit animate [_anim1,1];
	
	_anim2 = format ["Recoil_%1", _n + 1];
	_unit animate [_anim2,1];
	
	_p3d = "\sg_vehicles\shell57mm_ejected.p3d";
	_shposmem1 = _unit selectionPosition format ["eject_%1", _n + 1];
	_shposmem2 = _unit selectionPosition format ["eject_dir_%1", _n + 1];
	_vel = 0.3;
	
	_ejectWorldPos = _unit modelToWorld _shposmem1;
	_ejectWorldDir = _unit modelToWorld _shposmem2;
	_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*_vel, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*_vel, -2];

	_shell1 = "#particlesource" createVehicle getpos _unit;	
	_shell1 setParticleRandom [0, [0.1, 0.1, 0.1], [0, 0, 0.5], 0, 0.1, [0, 0, 0, 0], 0, 1];
	_shell1 setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 42.5, _shposmem1, _vector, 1, 6, 1, 0, [1.1, 1.1], [[0.9,0.9,0.9,1]], [1000], 0.1, 0.05, "", "", _unit, 0, true, 0.35];
	_shell1 setDropInterval 60;
	
	sleep 0.1;
	_unit animate [_anim1,0];
	_unit animate [_anim2,0];
	deleteVehicle _shell1;	
	
	
	
	
	
	
	
};
























