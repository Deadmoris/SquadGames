
params["_target", "_action"];

diag_log format["_target %1 %2",_target, _action];

switch (_action) do {
    case 0: { 
		[5,[_target],
			{
				private _gun = (_this select 0) select 0;
				if(!(isNull _gun)) then {
					private _holder = 'GroundWeaponHolder' createVehicle (getPosATL player);
					//_holder addBackpackCargo ["BN_M224_M8_Gun_Bag",1];
					_holder addWeaponCargoGlobal  ["BN_M224_M8_Gun_Launcher",1];
					_holder addBackpackCargoGlobal  ["BN_M224_Bipod_Bag",1];
					_holder setPosATL (getPosATL _gun);
					deleteVehicle _gun;
					hint 'Готово'; 
				};
			},{
				hint 'Подготовка прервана'; 
			},
		"Отсоединяю двуногу и плиту"] call ace_common_fnc_progressBar;
	};
    case 1: {
		[5,[_target],
			{
				private _gun = (_this select 0) select 0;
				if(!(isNull _gun)) then {
					private _holder = 'GroundWeaponHolder' createVehicle (getPosATL player);
					_holder addBackpackCargoGlobal  ["BN_M224_Gun_Bag",1];
					_holder setPosATL (getPosATL _gun);
					deleteVehicle _gun;
					hint 'Готово'; 
				};
			},{
				hint 'Подготовка прервана'; 
			},
		"Присоединяю двуногу и плиту"] call ace_common_fnc_progressBar;
	};
    case 2: {
		private _holder = 'GroundWeaponHolder' createVehicle (getPosATL player);
		_holder addWeaponCargoGlobal  ["BN_M224_M8_Gun_Launcher",1];
		_holder setPosATL (getPosATL _target);
		deleteVehicle _target;
	};
    case 3: {
		private _pos = player getPos [1.5, getDir player]; 
		_pos set [2, ((getPosATL player) select 2) + 0.5];
		private _gun = "TU_ARTY_M224_m8_mortar_WD" createVehicle _pos;
		_gun setPosATL _pos;
		_gun setDir ((getDir player) + random 10);
		player removeWeapon "BN_M224_M8_Gun_Launcher";
	};
    default { hint "default" };
};



