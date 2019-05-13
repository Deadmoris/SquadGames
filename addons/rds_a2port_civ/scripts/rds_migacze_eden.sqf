/*
	ability to set blinkers through eden attributes
	i:
		_v - vehicle
		_mode -
			0 - turn left blinker
			1 - turn right blinker
			2 - turn emergency lights

	a: reyhard
*/
params["_v","_mode"];

switch(_mode)do{

	case 0: {
		if(not(_v getVariable ["rds_blinker_left",false]))then{
			_v setVariable ["rds_blinker_left",true,true];
			_v setVariable ["rds_blinker_right",false,true];
			_v setVariable ["rds_blinker_emr",false,true];
			_v spawn {
				while{_this getVariable "rds_blinker_left"}do
				{
					_this animateDoor ["blinker_L",1];
					sleep 0.4;
					_this animateDoor ["blinker_L",0];
					sleep 0.4;
					if(!alive _this)exitWith{};
				};
			};
		}else{
			_v setVariable ["rds_blinker_left",false,true];
		};
	};
	case 1: {
		if(not(_v getVariable ["rds_blinker_right",false]))then{
			_v setVariable ["rds_blinker_right",true,true];
			_v setVariable ["rds_blinker_left",false,true];
			_v setVariable ["rds_blinker_emr",false,true];
			_v spawn {
				while{_this getVariable "rds_blinker_right"}do
				{
					_this animateDoor ["blinker_R",1];
					sleep 0.4;
					_this animateDoor ["blinker_R",0];
					sleep 0.4;
					if(!alive _this)exitWith{};
				};
			};
		}else{
			_v setVariable ["rds_blinker_right",false,true];
		};
	};
	case 2: {
		if(not(_v getVariable ["rds_blinker_emr",false]))then{
			_v setVariable ["rds_blinker_emr",true,true];
			_v setVariable ["rds_blinker_right",false,true];
			_v setVariable ["rds_blinker_left",false,true];
			_v spawn {
				while{_this getVariable "rds_blinker_emr"}do
				{
					_this animateDoor ["blinker_R",1];
					_this animateDoor ["blinker_L",1];
					sleep 0.4;
					_this animateDoor ["blinker_R",0];
					_this animateDoor ["blinker_L",0];
					sleep 0.4;
					if(!alive _this)exitWith{};
				};
			};
		}else{
			_v setVariable ["rds_blinker_emr",false,true];
		};
	};
};