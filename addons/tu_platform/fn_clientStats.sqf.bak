#include "addon.hpp"

if(isMultiplayer) then {
	diag_log "client stats";
	if(isServer) then {
		GVAR(dlc_count) = 0;
		GVAR(fps_count) = 0;
		GVAR(cfps) = 0;
		GVAR(client_stats) = {
			params ["_fps", "_dlc"];
			GVAR(cfps) = GVAR(cfps) + _fps;
			GVAR(fps_count) = GVAR(fps_count) + 1;
			if (_dlc) then {
				GVAR(dlc_count) = GVAR(dlc_count) + 1;
		};

		[] spawn {
			sleep 900;
			["TaskAssigned",[0, "Avg. client fps: " + str (GVAR(cfps) / GVAR(fps_count)) + "; Apex clients: " + str GVAR(dlc_count)]] remoteExec ["bis_fnc_showNotification",-2];
		};
	};
		
	if(hasInterface) then {
		[] spawn {
			private _cfpscntr = 0;
			private _timecntr = 0;
			private _cavgfps = 0;
			private _dlc_avaivable = false;
			waituntil {
				sleep  5;
				_cfpscntr = _cfpscntr + diag_fps;
				_timecntr = _timecntr + 1;
				_timecntr >= 18
			};
			private _dlc_avaivable = (isDLCAvailable 395180);
			_dlc_avaivable = _dlc_avaivable || (395180 in (getDLCs 1));
			_cavgfps = round (_cfpscntr / _timecntr);
			[_cavgfps,_dlc_avaivable] remoteExec [QGVAR(client_stats),2];
		};
	};
};
