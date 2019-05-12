private ["_tgtside","_laserObject","_newLaser"];

params["_vehicle", "_weapon", "_realLaser"];

if !(alive _vehicle) exitWith {};
if ((player != gunner _vehicle) && {(player != _vehicle)}) exitWith {};

// Avoid multiple runs.
if !(isNil {_vehicle getVariable "tu_atgm_laser_working"}) exitWith {};
_vehicle setVariable ["tu_atgm_laser_working", true];

// New laser in betapatches, reliable and 100% safe for network

_productVersion = call {productVersion}; // Must use call {productVersion}  to not fail this script completely on versions that don't support the productVersion script command
_newLaser = !(isNil "_productVersion");

if (_newLaser) then {
	if !("Laserbatteries" in magazines _vehicle) then {
		_vehicle addMagazine "Laserbatteries";
	};
	if !("ACE_Laserdesignator_Hidden" in weapons _vehicle) then {
		_vehicle addWeapon "ACE_Laserdesignator_Hidden";
	};
	_laserObject = objNull;
	sleep 0.1; // make sure the laser weapon is "reloaded"
} else {
	if (_realLaser) then {
		switch (side _vehicle) do {
			case east: {_tgtside = "LaserTargetE"};
			case west: {_tgtside = "LaserTargetW"};
			default {_tgtside = "LaserTargetW"};//to do: create lt for resistance in config
		};
		_laserObject = _tgtside createVehicle [0,0,0];
		_laserObject setVariable ["SPON_RF_owner", name (effectiveCommander _vehicle), true]; // compatible with sys_rangefinder
		_laserObject setVariable ["ace_RF_owner",player,true];
	} else {
		_laserObject = "ACE_Target_FakeLaser" createVehicleLocal [0,0,0];
	};
};

_vehicle setVariable ["tu_atgm_laserObject", _laserObject];

_vehicle setVariable ["tu_atgm_laser_off",nil];

[_vehicle,_weapon,_realLaser,_laserObject,_newLaser] spawn tu_atgm_fnc_opt_laserloop_pfh;
