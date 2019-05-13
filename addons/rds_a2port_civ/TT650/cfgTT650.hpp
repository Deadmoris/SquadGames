
	class RDS_tt650_base: RDS_Jawa353_base
	{

		model = "\rds_a2port_civ\TT650\TT650";
		picture = "\rds_a2port_civ\data\ico\tt650_pic_ca.paa";
		displayName = "Yamaha TT-650";
		weapons[] = {"MiniCarHorn"};

		#include "physX_tt650.hpp"

		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1p";
					pointDirection="m1d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.5;
				};
			};
			class RightMirror: LeftMirror
			{
				renderTarget="rendertarget1";
				class CameraView1: CameraView1
				{
					pointPosition="m2p";
					pointDirection="m2d";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rds_a2port_civ\TT650\Data\yam650_01.rvmat",
				"rds_a2port_civ\TT650\Data\yam650_damage.rvmat",
				"rds_a2port_civ\TT650\Data\yam650_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\TT650\Data\yam650_co.paa"};
		class textureSources
		{
			class standard
			{
				displayName="Blue";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\TT650\Data\yam650_co.paa"
				};
				factions[]=
				{
					rds_rus_civ
				};
			};
			class green: standard
			{
				displayName="Sport";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\TT650\Data\yam650_skin1_co.paa"
				};
			};
			class orange: standard
			{
				displayName="Rusty";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\TT650\Data\tt650_eciv_co.paa"
				};
			};
		};
		textureList[]=
		{
			"standard", 0.16,
			"green",0.16,
			"orange",0.16
		};
	};
	class RDS_tt650_Civ_Base: RDS_tt650_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "RDS_citizen_random";
		faction="rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_tt650_Civ_01: RDS_tt650_Civ_Base
	{
		EdPrev(RDS_tt650_Civ_01)
		scope = 2;
		AUTHOR_MACRO
	};