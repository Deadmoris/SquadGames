_vehicle = _this select 0;
_person = _this select 1;

if (local _vehicle) then 
{
	_exitanimations = ["UAZDRIVERVILEZ","UAZ_CARGO01_VILEZ","UAZ_CARGO01_VILEZ","UAZ_CARGO02_VILEZ","UAZ_CARGO03_VILEZ","UAZ_CARGO04_VILEZ","UAZ_CARGO05_VILEZ","UAZ_CARGO06_VILEZ"];
	WaitUntil {(isnull _person)or((vehicle _person) == _person)or((damage _person)> 0.5)or(!(alive _person))or((toUpper(animationState _person))in _exitanimations)};

	if (!(isnull _person)) then 
	{
		if (alive _person) then 
		{
			if ((damage _person)< 0.5) then 
			{
				if (_person == (driver _vehicle)) then 
				{
					uisleep 0.25;
					_vehicle animatesource ["Door_1_1",1];
					uisleep 1.75;
					_vehicle animatesource ["Door_1_1",0];
				}
				else
				{
					if ((toUpper(typeOf _vehicle)) in ["VTN_UAZ3151","VTN_UAZ3151_OPEN"]) then 
					{
						switch (_vehicle getCargoIndex _person) do 
						{
							case 0 : {uisleep 0.05;_vehicle animatesource ["Door_1_2",1];uisleep 1.50;_vehicle animatesource ["Door_1_2",0];};
							case 1 : {uisleep 0.00;_vehicle animatesource ["Door_2_2",1];uisleep 1.50;_vehicle animatesource ["Door_2_2",0];};
							case 2 : {uisleep 0.05;_vehicle animatesource ["Door_2_1",1];uisleep 1.50;_vehicle animatesource ["Door_2_1",0];};
							case 3 : {uisleep 0.00;_vehicle animatesource ["Door_2_2",1];uisleep 1.50;_vehicle animatesource ["Door_2_2",0];};
						};
					}
					else
					{
						switch (_vehicle getCargoIndex _person) do 
						{
							case 0 : {uisleep 0.05;_vehicle animatesource ["Door_1_2",1];uisleep 1.50;_vehicle animatesource ["Door_1_2",0];};
						};
					};
				};
			};
		};
	};
};