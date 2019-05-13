#include "..\addon.hpp"

params ["_e"];

if(!isServer) exitwith {};
{
	private _veh = vehicle _x; 
	if(_veh != _x) then {
		GVAR(hardfreezed_vehicles) pushBackunique _veh;
	};
	_x enablesimulationglobal (_e);	
} foreach playableUnits;

{
	_x enablesimulationglobal (_e);
} foreach GVAR(hardfreezed_vehicles);

{
	_x enablesimulationglobal (_e);
} foreach allUnitsUAV;

GVAR(pauseMission) = !_e;
publicVariable QGVAR(pauseMission);

if(_e) then {
	GVAR(pauseMissionTime) = GVAR(pauseMissionTime) + time - GVAR(pauseMissionTimeCurrent);
	publicVariable QGVAR(pauseMissionTime);	
	setTimeMultiplier 1;
} else {
	setTimeMultiplier 0.1;
	GVAR(pauseMissionTimeCurrent) = time;
}
