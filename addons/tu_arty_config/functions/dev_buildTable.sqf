
// [_muzzleVelocity, _airFriction, _derivation, _flat, _increasePerRow, _mil,_mortar] call tu_arty_fnc_dev_buildTable;
// 0 - скорость
// 1 - сопротивление
// 2 - деривация
// 3 - настильная true/false
// 4 - скачок
// 5 - система тысячных
// 6 - миномет "rus"/"us"/"no"

#include "script_component.hpp"

private _muzzleVelocity = _this select 0;
private _airFriction = _this select 1;
private _derivation = _this select 2;
private _flat = _this select 3;
private _stillInRange = true;
private _currentRange = 100;
private _increasePerRow = _this select 4;
private _outputArray = [];
private _mil = _this select 5;
private _mortar = _this select 6;

if (_increasePerRow == 0) then {_increasePerRow = 100};

//[_rangeToHit, _lineElevation, _lineHeightElevation, _lineHeightTimeDelta, _lineTimeOfFlight, _lineCrosswindDeg, _lineHeadwindMeters, _lineTailWindMeters, _lineTempDec, _lineTempInc, _lineAirDensDec, _lineAirDensInc]
private _result = [_muzzleVelocity, _increasePerRow, _airFriction,_derivation, _flat, _mil] call tu_arty_fnc_dev_simulateCalcRangeTableLine;

{
    if (_airFriction == 0) then {
        _x set [6, 0];
        _x set [7, 0];
        _x set [8, 0];
        _x set [9, 0];
        _x set [10, 0];
        _x set [11, 0];
    };
	if (_derivation == 0) then {
        _x set [5, 0];
    };
	
    if ((_x select 1) < 88) then {
        _outputArray pushBack [
			_x select 0,					//дальность
			abs ((_x select 1)/360*_mil),	//прицел
			abs (_x select 12),				//дельтаX
			0,								//дельтаП
			abs ((_x select 2)/360*_mil),	//высота	
			abs ((_x select 5)/360*_mil),	//деривация
			abs ((_x select 6)/360*_mil),	//бок ветер
			abs (_x select 7),				//прод ветер
			abs (_x select 8),				//темпер
			abs (_x select 9),				//давен
			abs (_x select 10),				//плотн ниж
			abs (_x select 11),				//плотн выше	
			abs (_x select 4)				//время
        ];
		
    };
} forEach _result;


if(_mortar == "rus") then {
	{
		_elev = _x select 1;
		_elev = 750 - _elev + 1000;
		 _x set [1, _elev];
	} forEach _outputArray;
};

_outputArray pushBack (_outputArray select 0);
_d = [10,0,0,0,0,0,0,0,0,0,0,0,0];
_outputArray set [0, _d];
_tableEnd = [];

{														
	_dis = _x select 0;	
	_elev = _x select 1; 
	_dX = _x select 2;         						
	_dP = 0;         						
	_elevH = _x select 4; 
	_deriv = _x select 5; 
	_wingA = _x select 6; 
	_wingS = _x select 7; 
	_temp =  _x select 8;  
	_press =  _x select 9; 
	_density1 = _x select 10;   
	_density2 = _x select 11;   					 
	_time = _x select 12; 
	
	if(_forEachIndex < 2)then{
		_ddis = (_outputArray select (_forEachIndex + 1)) select 0;
		_delev = (_outputArray select (_forEachIndex + 1)) select 1;
		_dP = abs ((_delev - _elev) / (_ddis - _dis)*50);
		
	} else {
		if(_forEachIndex < ((count _outputArray) - 1))then{	
			_ddis1 =(_outputArray select (_forEachIndex - 1)) select 0;
			_ddis2 = (_outputArray select (_forEachIndex + 1)) select 0;
			_delev1 = (_outputArray select (_forEachIndex - 1)) select 1;
			_delev2 = (_outputArray select (_forEachIndex + 1)) select 1;
			_dP1 = (_elev - _delev1) / (_dis - _ddis1)*50;	
			_dP2 = (_delev2 - _elev) / (_ddis2-_dis)*50;
			_dP = abs ((_dP2 + _dP1)/2);						
		}else{
			_ddis = (_outputArray select (_forEachIndex - 1)) select 0;
			_delev = (_outputArray select (_forEachIndex - 1)) select 1;
			_dP = abs ((_elev - _delev) / (_dis - _ddis)*50);
		};
	};	
	
	if(_flat) then {
		_elevH = _elevH - ((atg(100/_dis))/360*_mil);
		if (_elevH < 0) then {_elevH = 0;};
	};	
			
	_dis = [_dis, 1, 0, false] call CBA_fnc_formatNumber;
	_elev = [_elev, 1, 0, false] call CBA_fnc_formatNumber;
	_dX = [_dX, 1, 0, false] call CBA_fnc_formatNumber;        						
	_dP = [_dP, 1, 0, false] call CBA_fnc_formatNumber;   
	_elevH = [_elevH, 1, 0, false] call CBA_fnc_formatNumber;
	_deriv = "-"+ ([_deriv, 1, 0, false] call CBA_fnc_formatNumber);
	_wingA = [_wingA, 1, 0, false] call CBA_fnc_formatNumber;
	_wingS = [_wingS, 1, 0, false] call CBA_fnc_formatNumber;
	_temp = [_temp, 1, 0, false] call CBA_fnc_formatNumber;
	_press = [abs _press, 1, 0, false] call CBA_fnc_formatNumber;
	_density1 = "-"+([_density1, 1, 1, false] call CBA_fnc_formatNumber);
	_density2 = [_density2, 1, 1, false] call CBA_fnc_formatNumber;
	_time = [_time, 1, 1, false] call CBA_fnc_formatNumber;
	
	_tableEnd pushBack [_dis,_elev,_dX,_dP,_elevH,_deriv,_wingA,_wingS,_temp,_press,_density1,_density2,_time];

}forEach _outputArray;


if((!_flat)&&(_mortar == "no"))then{
	reverse _tableEnd;
};	

//handle floating point rounding errors
private _outputString = format [" //_muzzleVelocity %1, _airFriction %2, _derivation %3
case (_muzzleVelocity == ): {
[
", _muzzleVelocity, _airFriction, _derivation];

{
    if (_forEachIndex < ((count _tableEnd) - 1)) then {
        _outputString = _outputString + format ["%1,
    ", _x];
    } else {
        _outputString = _outputString + format ["%1
    ]
    };", _x];
    };
} forEach _tableEnd;

copyToClipboard _outputString;
rangeTableOutput = _outputString;

hint "done";
