class CfgPatches
{
	class OKSV_units_addon
	{
		units[]=
		{
			"oksv_rifleman",
			"oksv_rifleman_rpg",
			"oksv_rto",
			"oksv_machinegunne",
			"oksv_medic",
			"oksv_officer",
			"oksv_marksman",
			"oksv_marksman_panama",
			"oksv_crew",
			"oksv_serg",
			"oksv_driver",
			"oksv_unarmed",
			"oksv_secnumber",
			"oksv_reg",
			"oksv_reg_arm",
			"oksv_reg_bv",
			"oksv_vdv_pilot"
		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"rhs_main"
		};
	};
};
class CfgFactionClasses
{
	class oksv_army
	{
		displayName="$STR_40th_faction";
		priority=10;
		side=0;
		icon="40th_config\data\SA.paa";
	};
};
class CfgEditorCategories
{
	class oksv_army_category
	{
		displayName="$STR_40th_faction";
	};
};
class CfgEditorSubcategories
{
	class oksv_army_vdv
	{
		displayName="$STR_40th_faction_afg_vdv";
	};
	class oksv_army_mp
	{
		displayName="$STR_40th_faction_afg_mp";
	};
};
class CfgGroups
{
	class east
	{
		name="OPFOR";
		side=0;
		class oksv_army
		{
			name="$STR_40th_faction";
			class 40th_infantry
			{
				name="$STR_40th_dshb";
				class 40th_platoon_bmd2
				{
					name="$STR_40th_squad_bmd2";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_serg";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="COPRAL";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="oksv_bmd2";
						rank="PRIVATE";
						position[]={12,0,0};
					};
				};
				class 40th_platoon_bmp1
				{
					name="$STR_40th_squad_bmp1";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_serg";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="COPRAL";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="oksv_bmp1d";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class 40th_platoon_bmp2
				{
					name="$STR_40th_squad_bmp2";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_serg";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="COPRAL";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit8
					{
						side=0;
						vehicle="oksv_bmp2d";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class 40th_platoon
				{
					name="$STR_40th_squad";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_serg";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="COPRAL";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit6
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={13,0,0};
					};
				};
				class 40th_squad_ft_afg
				{
					name="$STR_40th_squad_ft";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_serg";
						rank="COPRAL";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_rifleman_rpg";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class 40th_squad_HQ_afg
				{
					name="$STR_40th_squad_hq";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_officer";
						rank="CAPTAIN";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_officer";
						rank="LEITENANT";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_serg";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit5
					{
						side=0;
						vehicle="oksv_officer";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class 40th_squad_HQ_car_afg
				{
					name="$STR_40th_squad_hq_car";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_hq.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_officer";
						rank="COLONEL";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_uaz";
						rank="SERGEANT";
						position[]={1,0,0};
					};
				};
				class 40th_squad_patrol_afg
				{
					name="$STR_40th_patrol";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="COPRAL";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={1,0,0};
					};
				};
				class 40th_squad_medics_afg
				{
					name="$STR_40th_medics";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_med.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_officer";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_medic";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class Unit2
					{
						side=0;
						vehicle="oksv_rifleman";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="oksv_medic";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
			};
			class 40th_crews
			{
				name="$STR_40th_squad_crew";
				class 40th_squad_pkm_afg
				{
					name="$STR_40th_squad_pkm";
					side=0;
					faction="oksv_army";
					icon="\a3\ui_f\data\map\markers\nato\b_mortar.paa";
					class Unit0
					{
						side=0;
						vehicle="oksv_machinegunne";
						rank="COPRAL";
						position[]={-5,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="oksv_secnumber";
						rank="PRIVATE";
						position[]={1,0,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
	class CAManBase;
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB
	{
		class EventHandlers;
	};
	class oksv_rifleman_base: O_Soldier_base_F
	{
		_generalMacro="O_Soldier_base_F";
		scope=0;
		side=0;
		scopeCurator=0;
		icon="iconMan";
		faction="oksv_army";
		editorCategory="oksv_army_category";
		editorSubcategory="oksv_army_vdv";
		author="Basher";
		editorPreview="\40th_config\editor\oksv_rifleman.jpg";
		displayName="$STR_oksv_rifleman";
		uniformClass="m88_desert_vdv";
		identitytypes[]=
		{
			"LanguageRUS",
			"Head_Soviet"
		};
		faceType="Man_A3";
		vehicleClass="oksv_afg_army";
		genericNames="RussianMen";
		linkedItems[]=
		{
			"Panama_Afghanistan",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]={};
		magazines[]={};
		Items[]={};
	};
	class oksv_rifleman: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		linkedItems[]=
		{
			"ssh68_khaki",
			"6B3_RHS_RF",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="RD_6B3_S_RF";
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class oksv_rifleman_rpg: oksv_rifleman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		icon="iconManAT";
		editorPreview="\40th_config\editor\oksv_rifleman_rpg.jpg";
		displayName="$STR_oksv_rifleman_rpg";
		backpack="RD_6B3_RF";
		weapons[]=
		{
			"rhs_weap_aks74",
			"rhs_weap_rpg26",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_rpg26_mag",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
	};
	class oksv_rto: oksv_rifleman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		displayName="$STR_oksv_rto";
		backpack="RD_6B3_R148";
	};
	class oksv_machinegunne: oksv_rifleman_base
	{
		_generalMacro="O_Soldier_F";
		scope=2;
		side=0;
		scopeCurator=2;
		icon="iconManMG";
		author="Basher";
		editorPreview="\40th_config\editor\oksv_mg.jpg";
		displayName="$STR_oksv_machinegunne";
		linkedItems[]=
		{
			"ssh68_khaki",
			"6B3_RHS_MG",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="RD_6B3_S_PK";
		weapons[]=
		{
			"rhs_weap_pkm",
			"rhs_weap_makarov_pm",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
	};
	class oksv_officer: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		icon="iconManOfficer";
		author="Basher";
		editorPreview="\40th_config\editor\oksv_officer.jpg";
		displayName="$STR_oksv_officer";
		linkedItems[]=
		{
			"rhs_fieldcap_khk",
			"6B3_RHS_OF",
			"ItemCompass",
			"ItemMap",
			"ItemWatch",
			"Binocular"
		};
		weapons[]=
		{
			"rhs_weap_aks74",
			"rhs_weap_makarov_pm",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"rhs_mag_9x18_8_57N181S",
			"rhs_mag_9x18_8_57N181S",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_nspn_red",
			"rhs_mag_rdg2_white"
		};
	};
	class oksv_crew: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		editorPreview="\40th_config\editor\oksv_crew.jpg";
		displayName="$STR_oksv_crew";
		linkedItems[]=
		{
			"rhs_tsh4",
			"NoGlasses",
			"6B3_RHS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"Binocular"
		};
		weapons[]=
		{
			"rhs_weap_aks74_2_folded",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_nspd"
		};
		Items[]=
		{
			"FirstAidKit"
		};
	};
	class oksv_medic: oksv_rifleman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		icon="iconManMedic";
		author="Basher";
		editorPreview="\40th_config\editor\oksv_medic.jpg";
		displayName="$STR_oksv_medic";
		linkedItems[]=
		{
			"ssh68_khaki",
			"6B3_RHS_MED",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="rhs_medic_bag_filled";
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	class oksv_serg: oksv_rifleman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		icon="iconManLeader";
		author="Basher";
		displayName="$STR_oksv_serg";
	};
	class oksv_driver: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		editorPreview="\40th_config\editor\oksv_driver.jpg";
		displayName="$STR_oksv_driver";
		linkedItems[]=
		{
			"Panama_Afghanistan",
			"NoGlasses",
			"6B3_RHS",
			"ItemCompass",
			"ItemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"rhs_weap_aks74_2_folded",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_mag_nspd"
		};
		Items[]=
		{
			"FirstAidKit"
		};
	};
	class oksv_marksman: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		editorPreview="\40th_config\editor\oksv_marksman.jpg";
		displayName="$STR_oksv_marksman";
		linkedItems[]=
		{
			"ssh68_khaki",
			"NoGlasses",
			"6B3_RHS_SVD",
			"ItemCompass",
			"ItemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"40th_weap_svd_wood_pso1",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
	};
	class oksv_marksman_panama: oksv_marksman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		editorPreview="\40th_config\editor\oksv_marksman_panama.jpg";
		displayName="$STR_oksv_marksman_panama";
		linkedItems[]=
		{
			"Panama_Afghanistan1",
			"NoGlasses",
			"6B3_RHS_SVD",
			"ItemCompass",
			"ItemMap",
			"ItemWatch"
		};
	};
	class oksv_unarmed: oksv_rifleman_base
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		editorPreview="\40th_config\editor\oksv_unarmed.jpg";
		displayName="$STR_oksv_wns";
		linkedItems[]=
		{
			"Panama_Afghanistan",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class oksv_secnumber: oksv_rifleman
	{
		scope=2;
		side=0;
		scopeCurator=2;
		author="Basher";
		editorPreview="\40th_config\editor\oksv_rifleman.jpg";
		displayName="$STR_oksv_secnumber";
		linkedItems[]=
		{
			"ssh68_khaki",
			"6B3_RHS_RF",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		backpack="RD_6B3_PK";
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5",
			"rhs_mag_rgd5"
		};
	};
	class oksv_reg: oksv_unarmed
	{
		scopeCurator=2;
		editorSubcategory="oksv_army_mp";
		editorPreview="\40th_config\editor\oksv_reg.jpg";
		displayName="$STR_oksv_reg";
		uniformClass="m88_desert_mp";
		linkedItems[]=
		{
			"ssh68_reg",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class oksv_reg_arm: oksv_reg
	{
		scopeCurator=2;
		editorSubcategory="oksv_army_mp";
		editorPreview="\40th_config\editor\oksv_reg_arm.jpg";
		displayName="$STR_oksv_reg_arm";
		uniformClass="m88_desert_mp";
		linkedItems[]=
		{
			"ssh68_reg",
			"6B3_RHS",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"rhs_weap_aks74",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK"
		};
	};
	class oksv_reg_bv: oksv_reg
	{
		scopeCurator=2;
		editorSubcategory="oksv_army_mp";
		editorPreview="\40th_config\editor\oksv_reg_bv.jpg";
		displayName="$STR_oksv_reg_bv";
		uniformClass="m88_desert_mp";
		linkedItems[]=
		{
			"ssh68_reg",
			"6B3_RHS",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class oksv_vdv_pilot: oksv_rifleman_base
	{
		scopeCurator=2;
		editorPreview="\40th_config\editor\oksv_vdv_pilot.jpg";
		displayName="$STR_oksv_pilot_cargo_ttsko";
		uniformClass="pilot_suit_ttsko";
		linkedItems[]=
		{
			"rhs_gssh18",
			"NoGlasses",
			"ItemCompass",
			"ItemWatch"
		};
	};
};
class cfgMods
{
	author="Basher";
	timepacked="1545954218";
};
