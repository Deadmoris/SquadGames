#include "..\addon.hpp"
#define IDD_SPEC_DISPLAY 60000
#define IDC_WIDGET 60030
#define CTRL_WIDGET (SPEC_DISPLAY displayCtrl IDC_WIDGET)

params [["_newCorpse",objNull,[objNull]], ["_oldKiller",objNull,[objNull]], ["_respawn",0,[0]], ["_respawnDelay",0,[0]]];

if (_respawn in [0,1,4,5]) then {
    // This only applies to respawn type 1 (BIRD/SPECTATOR)
    // Remove the seagull (not actually the player, a CfgNonAIVehicles object)
    if (typeOf _newCorpse == "seagull") then { deleteVehicle _newCorpse; };
};

// Virtual spectators should be ignored by the template (otherwise they break)
if (_newCorpse isKindOf QACEVAR(spectator,virtual)) exitWith {};



if(GVAR(spectatorType)==0) then {
	call CSSA3_fnc_init;
};

if(GVAR(spectatorType)==1) then {	
	[] spawn {
		private _isAdmin = call FUNC(isAdmin);

		sleep 3;

		if(_isAdmin) then {
			[[0,1,2], []] call ACEFUNC(spectator,updateCameraModes);
			[[-2,-1,0], []] call ACEFUNC(spectator,updateVisionModes);
		};

		private _sides = [blufor, opfor, civilian, resistance];
		if(!_isAdmin) then {
			_sides = _sides select {playerSide == _x || { [playerSide, _x] call BIS_fnc_areFriendly } };
		};
		[_sides, [blufor, opfor, civilian, resistance]] call ACEFUNC(spectator,updateSides);
		
		if(_isAdmin) then {
			[true, false,true] call ACEFUNC(spectator,setSpectator);
		} else {
			[true, true,true] call ACEFUNC(spectator,setSpectator);
		};
		
	    [{
			ACEVAR(spectator,uiWidgetVisible) = false;
			ACEVAR(spectator,drawUnits) = true; 
		},[],0.05] call CBA_fnc_waitAndExecute;
		
	};
};
