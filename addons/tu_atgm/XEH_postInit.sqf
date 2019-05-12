
if (!isDedicated) then {
	["Advanced Missile Guidance", "Lase_Kh29", "Laser Init", {
		[] call tu_atgm_fnc_Kh29_keyPressed_lase;
	}, {}, [57, [false, false, false]]] call CBA_fnc_addKeybind;
	/*
	["Advanced Missile Guidance", "Lase_Kh29_CodeUP", "Laser Code UP", {
		[] call ace_laser_fnc_keyLaserCodeUp;
	}, {}, [200, [true, false, false]]] call CBA_fnc_addKeybind;
	
	["Advanced Missile Guidance", "Lase_Kh29_CodeDOWN", "Laser Code DOWN", {
		[] call ace_laser_fnc_keyLaserCodeDown;
	}, {}, [208, [true, false, false]]] call CBA_fnc_addKeybind;
	*/
	["Advanced Missile Guidance", "Lase_Kh29_Left", "Laser Left", {
		if((vehicle player) getVariable 'tu_atgm_tracking') then {
			[(vehicle player),-0.1,0] call tu_atgm_fnc_Kh29_keyPressed_lase;
		};
	}, {}, [203, [false, false, false]]] call CBA_fnc_addKeybind;

	["Advanced Missile Guidance", "Lase_Kh29_Right", "Laser Right", {
		if((vehicle player) getVariable 'tu_atgm_tracking') then {
			[(vehicle player),0.1,0] call tu_atgm_fnc_Kh29_keyPressed_lase;
		};
	}, {}, [205, [false, false, false]]] call CBA_fnc_addKeybind;

	["Advanced Missile Guidance", "Lase_Kh29_Down", "Laser Down", {
		if((vehicle player) getVariable 'tu_atgm_tracking') then {
			[(vehicle player),0,-0.1] call tu_atgm_fnc_Kh29_keyPressed_lase;
		};
	}, {}, [208, [false, false, false]]] call CBA_fnc_addKeybind;

	["Advanced Missile Guidance", "Lase_Kh29_Up", "Laser Up", {
		if((vehicle player) getVariable 'tu_atgm_tracking') then {
			[(vehicle player),0,0.1] call tu_atgm_fnc_Kh29_keyPressed_lase;
		};
	}, {}, [200, [false, false, false]]] call CBA_fnc_addKeybind;
	
	["tu_atgm_global_towsmoke", {_this call tu_atgm_fnc_global_towsmoke}] call CBA_fnc_addEventHandler;
};
