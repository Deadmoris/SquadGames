/* // Exit if player not in vehicle
if (vehicle ACE_player != (_this select 0)) exitWith {};

// Exit if 3rd person view
if (cameraView == "External") exitWith {};

// Shake camera on cannon fired for Gsh 30
if ((_this select 1) == "RHS_weap_GSh30") exitWith {
	enableCamShake true;
	addCamShake [0.9, 0.75, 38];
};

// Shake camera on cannon fired for Gsh 23
if ((_this select 1) == "RHS_Weap_GSh23L") exitWith {
	enableCamShake true;
	addCamShake [0.85, 0.7, 38];
}; */