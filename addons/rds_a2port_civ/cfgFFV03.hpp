
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class AmovPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon_end;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end;
		class ReloadRPG;

		class cargo_marksman;
		class cargo_base;
		class cargo_base_idle;
		class cargo_basepistol;
		class cargo_base_idle_pistol;
		class cargo_basebinoc;
		class rds_passenger_flatground_3_Aim: cargo_base
		{
			actions="rds_passenger_flatground_3Actions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim.rtm";
			speed=100000;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_ToBinoc",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Idle",
				0.1,
				"rds_passenger_flatground_3_toObstructed",
				0.1,
				"rds_passenger_flatground_3_Aim_ToPistol",
				0.1,
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.2,
				"rds_passenger_flatground_3_Die",
				0.1
			};
			variantsAI[]=
			{
				"rds_passenger_flatground_3_Aim_Idling",
				1
			};
			variantsPlayer[]=
			{
				"rds_passenger_flatground_3_Aim_Idling",
				1
			};
		};
		class rds_passenger_flatground_3_Obstructed: cargo_base_idle
		{
			actions="rds_passenger_flatground_3ObstructedActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_obstructed.rtm";
			speed=1e+010;
			weaponLowered=0;
			leftHandIKCurve[]={1};
			weaponObstructed=1;
			interpolationRestart=1;
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_fromObstructed",
				0.1,
				"rds_passenger_flatground_3_Die",
				0.1
			};
		};
		class rds_passenger_flatground_3_fromObstructed: cargo_base_idle
		{
			actions="rds_passenger_flatground_3ObstructedActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_fromobstructed.rtm";
			speed=-0.15000001;
			looped="false";
			weaponLowered=0;
			leftHandIKCurve[]={1};
			interpolationRestart=1;
			reverse="##NAME##_toObstructed";
			minplaytime=0.94999999;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1
			};
		};
		class rds_passenger_flatground_3_toObstructed: cargo_base_idle
		{
			actions="rds_passenger_flatground_3ObstructedActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_toobstructed.rtm";
			speed=-0.15000001;
			weaponLowered=0;
			weaponObstructed=1;
			looped="false";
			leftHandIKCurve[]={1};
			interpolationRestart=1;
			reverse="##NAME##_fromObstructed";
			minplaytime=0.94999999;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Obstructed",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Obstructed",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_Idling: rds_passenger_flatground_3_Aim
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1
			};
		};
		class rds_passenger_flatground_3_Idle: cargo_base_idle
		{
			actions="rds_passenger_flatground_3IdleActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idle.rtm";
			speed=100000;
			aiming="aimingDefault";
			aimingBody="aimingNo";
			leftHandIKCurve[]={1};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1,
				"rds_passenger_flatground_3_Aim_ToPistol",
				0.1,
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.2,
				"rds_passenger_flatground_3_Die",
				0.1
			};
			variantsAI[]=
			{
				"rds_passenger_flatground_3_Idle_Idling",
				1
			};
			variantsPlayer[]=
			{
				"rds_passenger_flatground_3_Idle_Idling",
				1
			};
		};
		class rds_passenger_flatground_3_Idle_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idle1.rtm";
			speed=-11;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Idle",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_Pistol: cargo_basepistol
		{
			actions="rds_passenger_flatground_3PistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			speed=100000;
			variantsAI[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_Idling",
				1
			};
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_ToBinoc",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_FromPistol",
				0.1,
				"rds_passenger_flatground_3_Idle_Pistol",
				0.2,
				"rds_passenger_flatground_3_toObstructed_Pistol",
				0.2,
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.2,
				"rds_passenger_flatground_3_Die_Pistol",
				0.5
			};
		};
		class rds_passenger_flatground_3_Aim_Pistol_Idling: rds_passenger_flatground_3_Aim_Pistol
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol1.rtm";
			speed=-8;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_Idle_Pistol: cargo_base_idle_pistol
		{
			actions="rds_passenger_flatground_3IdlePistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idlepistol.rtm";
			speed=100000;
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1,
				"rds_passenger_flatground_3_Aim_FromPistol",
				0.1,
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.1,
				"rds_passenger_flatground_3_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"rds_passenger_flatground_3_Idle_Pistol_Idling",
				1
			};
			variantsPlayer[]=
			{
				"rds_passenger_flatground_3_Idle_Pistol_Idling",
				1
			};
		};
		class rds_passenger_flatground_3_Idle_Pistol_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idlepistol1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Idle_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_Obstructed_Pistol: cargo_base_idle_pistol
		{
			actions="rds_passenger_flatground_3ObstructedPistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_obstructed.rtm";
			speed=1e+010;
			weaponLowered=0;
			weaponObstructed=1;
			interpolationRestart=1;
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_fromObstructed_Pistol",
				0.1,
				"rds_passenger_flatground_3_Die",
				0.1
			};
		};
		class rds_passenger_flatground_3_fromObstructed_Pistol: cargo_base_idle_pistol
		{
			actions="rds_passenger_flatground_3ObstructedPistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_fromobstructed.rtm";
			speed=-0.15000001;
			weaponLowered=0;
			interpolationRestart=1;
			looped="false";
			reverse="##NAME##_toObstructed_Pistol";
			minplaytime=0.94999999;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_toObstructed_Pistol: cargo_base_idle_pistol
		{
			actions="rds_passenger_flatground_3ObstructedPistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_toobstructed.rtm";
			speed=-0.15000001;
			weaponLowered=0;
			interpolationRestart=1;
			looped="false";
			weaponObstructed=1;
			reverse="##NAME##_fromObstructed_Pistol";
			minplaytime=0.94999999;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Obstructed_Pistol",
				0.1
			};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Obstructed_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions="rds_passenger_flatground_3PistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimtopistol.rtm";
			speed=2;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_ToPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions="rds_passenger_flatground_3PistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimtopistol_end.rtm";
			speed=1.875;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions="rds_passenger_flatground_3PistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimFrompistol.rtm";
			speed=2.3076921;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_FromPistol_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions="rds_passenger_flatground_3Actions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimfrompistol_end.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=2;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Binoc: cargo_basebinoc
		{
			actions="rds_passenger_flatground_3BinocActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_Binoc.rtm";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			speed=-8;
			rightHandIKCurve[]={0};
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_FromBinoc",
				0.1,
				"rds_passenger_flatground_3_Die",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_Pistol_Binoc: cargo_basebinoc
		{
			actions="rds_passenger_flatground_3BinocPistolActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_Binoc.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			showHandGun=1;
			speed=-8;
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_FromBinoc",
				0.1,
				"rds_passenger_flatground_3_Die_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			actions="rds_passenger_flatground_3BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_ToBinoc.rtm";
			speed=1.5789469;
			leftHandIKCurve[]={0,1,0.15000001,0};
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="rds_passenger_flatground_3BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			actions="rds_passenger_flatground_3BinocActions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end
		{
			actions="rds_passenger_flatground_3Actions";
			aiming="aimingDefault";
			aimingBody="aimingUpDefault";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_frombinoc_end.rtm";
			speed=1.764706;
			leftHandIKCurve[]={0,0,0.5,1};
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions="rds_passenger_flatground_3BinocActions";
			showHandGun=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_ToBinoc.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="rds_passenger_flatground_3BinocActions";
			showHandGun=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions="rds_passenger_flatground_3BinocActions";
			showHandGun=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions="rds_passenger_flatground_3Actions";
			showHandGun=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_frombinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Pistol",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Idle_Unarmed: cargo_base_idle
		{
			actions="rds_passenger_flatground_3IdleUnarmedActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idleunarmed.rtm";
			speed=100000;
			aiming="aimingNo";
			aimingBody="aimingNo";
			weaponIK=0;
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_FromPistol_End",
				0.1,
				"rds_passenger_flatground_3_Aim_ToPistol_End",
				0.1,
				"rds_passenger_flatground_3_Aim_Unarmed_ToBinoc",
				0.1,
				"rds_passenger_flatground_3_Die_Pistol",
				0.1
			};
			variantsAI[]=
			{
				"rds_passenger_flatground_3_Idle_Unarmed_Idling",
				1
			};
			variantsPlayer[]=
			{
				"rds_passenger_flatground_3_Idle_Unarmed_Idling",
				1
			};
		};
		class rds_passenger_flatground_3_Idle_Unarmed_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[]={};
			headBobStrength=0;
			soundEnabled=1;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idleunarmed1.rtm";
			speed=-10;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_Binoc: cargo_basebinoc
		{
			actions="rds_passenger_flatground_3BinocUnarmedActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_Binoc.rtm";
			aiming="aimingRifleSlingDefault";
			aimingBody="aimingUpRifleSlingDefault";
			showHandGun=0;
			speed=-8;
			InterpolateTo[]=
			{
				"rds_passenger_flatground_3_Aim_Unarmed_FromBinoc",
				0.1,
				"rds_passenger_flatground_3_Die_Pistol",
				0.1
			};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions="rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun=0;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_ToBinoc.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Unarmed_ToBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions="rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun=0;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_ToBinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Unarmed_Binoc",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions="rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun=0;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_frombinoc.rtm";
			speed=1.5789469;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Aim_Unarmed_FromBinoc_End",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions="rds_passenger_flatground_3IdleUnarmedActions";
			showHandGun=0;
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_frombinoc_end.rtm";
			speed=1.764706;
			ConnectTo[]=
			{
				"rds_passenger_flatground_3_Idle_Unarmed",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Die: DefaultDie
		{
			actions="rds_passenger_flatground_3DeadActions";
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3die.rtm";
			speed=1;
			looped="false";
			terminal=1;
			ragdoll=1;
			ConnectTo[]=
			{
				"Unconscious",
				0.1
			};
			InterpolateTo[]={};
		};
		class rds_passenger_flatground_3_Die_Pistol: rds_passenger_flatground_3_Die
		{
			file="\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3diepistol.rtm";
			actions="rds_passenger_flatground_3DeadPistolActions";
			showHandGun=1;
		};