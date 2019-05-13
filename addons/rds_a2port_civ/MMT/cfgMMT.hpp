
	class RDS_MMT_base: RDS_Old_bike_base
	{
		model = "\rds_a2port_civ\mmt\mmt";
		picture = "\rds_a2port_civ\data\ico\mmt_pic_ca.paa";
		displayName = "Mountain bike";
		class Library
		{
			libTextDesc = "The US army mountain bike. Can be used for personal transportation, for messengers, or for scouting missions.";
		};

		class AnimationSources: AnimationSources
		{
			class pack
			{
				animPeriod = 0.7;
				source = "user";
				initPhase = 0;
				displayName = "Pack";
				onPhaseChanged = "";
				mass = 0.1;
			};
		};
		maxSpeed = 40;
		peakTorque = 108;

		driverAction = "RDS_MMT_Driver";
		driverInAction = "RDS_MMT_Driver";
		RDS_TurnAnimLeft = "RDS_MMT_Driver_Left";
		RDS_TurnAnimRight = "RDS_MMT_Driver_Right";
		class Reflectors {};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rds_a2port_civ\MMT\data\mmt_01_co.paa"};
	};
	class RDS_MMT_Civ_base: RDS_MMT_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "RDS_Citizen_random";
		faction="rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_MMT_Civ_01: RDS_MMT_Civ_base
	{
		EdPrev(RDS_MMT_Civ_01)
		scope = 2;
		AUTHOR_MACRO
	};