[20, _this select 0, {
	scopeName "Aiming_Circle_break";
	if (backpack player == "BN_Aiming_Circle_Bag") then {
	
		_aiming_circle_type = '';
	
		switch (_this select 0) do {
			case (6000): {
				_aiming_circle_type = "bn_ace2_aiming_circle";
			};
			case (6400): {
				_aiming_circle_type = "bn_ace2_aiming_circle_NATO";
			};
			default {
				hint 'Чебурашка';
				breakOut "Aiming_Circle_break";
			};
		};
		
		removeBackpack player;
		_aiming_circle = _aiming_circle_type createVehicle ((getPosATL player) vectorAdd (vectorDir player)); 
		_aiming_circle setPosATL ((getPosATL player) vectorAdd ((vectorDir player) vectorMultiply 2));
		
		_aiming_circle setVectorDirAndUp [[0,1,0],[0,0,1]];
		_aiming_circle setDir (getDir player + (random [-30,0,30]));
	} else {
		hint 'Куда девал буссоль?'
	}
}, {hint 'Действие отменено'}, 'Установка и ориентирование буссоли'] call ace_common_fnc_progressBar;