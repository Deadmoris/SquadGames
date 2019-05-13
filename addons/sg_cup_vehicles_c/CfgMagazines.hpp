class CfgMagazines
{
	class VehicleMagazine;
	class CUP_20Rnd_100mmHEAT_D10: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_100mm_HEAT";
		ammo = "CUP_Sh_3UBK9_HEAT";
		count = 20;
		initSpeed = 1045;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_100mm_HEAT";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class CUP_15Rnd_100mmHEFRAG_D10: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_100mm_HE";
		ammo = "CUP_Sh_3UOF10_HEFRAG";
		count = 15;
		initSpeed = 900;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_100mm_HE";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class CUP_40Rnd_85mmHEAT_D5: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_85mm_HEAT";
		ammo = "CUP_Sh_UBK367_HEAT";
		count = 40;
		initSpeed = 792;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_85mm_HEAT";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
	class CUP_20Rnd_85mmHEFRAG_D5: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_85mm_HE";
		ammo = "CUP_Sh_UO367_HEFRAG";
		count = 20;
		initSpeed = 792;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_85mm_HE";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
	class rhs_mag_762x54mm_100;
	class sg_mag_762x54mm_63: rhs_mag_762x54mm_100
	{
		displayName = "$STR_SG_DT_MAG";
		displayNameShort = "$STR_SG_DT_MAG_SHORT";
		count = 63;
		tracersEvery = 3;
	};
	class rhs_mag_bm25_14;
	class sg_mag_bm25_14: rhs_mag_bm25_14
	{
		initSpeed = 1198;
		tracersEvery = 1;
		ammo = "sg_ammo_bm25";
	};
	class sg_mag_bm25_1: sg_mag_bm25_14
	{
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		count = 1;
		mass = 120;
	};
	class sg_mag_bm25_2_14: rhs_mag_bm25_14
	{
		initSpeed = 1430;
		tracersEvery = 1;
		ammo = "sg_ammo_bm25_2";
	};
	class sg_mag_bm25_2_1: sg_mag_bm25_2_14
	{
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		count = 1;
		mass = 120;
	};
	class rhs_mag_of412_17;
	class sg_mag_of412_17: rhs_mag_of412_17
	{
		initSpeed = 1210;
		tracersEvery = 1;
		ammo = "sg_ammo_of412";
	};
	class sg_mag_of412_1: sg_mag_of412_17
	{
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		count = 1;
		mass = 120;
	};
	class rhs_mag_of412_21;
	class sg_mag_of412_21: rhs_mag_of412_21
	{
		initSpeed = 1210;
		tracersEvery = 1;
		ammo = "sg_ammo_of412";
	};
	class sg_mag_of412_2_21: rhs_mag_of412_21
	{
		initSpeed = 900;
		tracersEvery = 1;
		ammo = "sg_ammo_of412_2";
	};
	class rhs_mag_bk17_8;
	class sg_mag_bk17_8: rhs_mag_bk17_8
	{
		initSpeed = 1200;
		tracersEvery = 1;
		ammo = "sg_ammo_bk17";
	};
	class sg_mag_bk17_1:sg_mag_bk17_8
	{
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		count = 1;
		mass = 120;
	};
	class rhs_mag_762x54mm_250;
	class sg_mag_762x54mm_250: rhs_mag_762x54mm_250
	{
		initSpeed = 900;
		ammo = "sg_B_762x54_Ball";
		displayName = "762x54 250 rounds";
		mass = 60;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
	};
};

