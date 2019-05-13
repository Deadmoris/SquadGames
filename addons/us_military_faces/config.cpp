#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class usm_faces
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};


class CfgHeads
{
	class Default_A3{};
	class DefaultHead_A3: Default_A3{};
	class NATOHead_A3: DefaultHead_A3{};
	//class NATOHead_A3: NATOHead_A3	
	//{
		/*class Wounds
		{
			tex[] = {};
			mat[] = {"us_military_faces\m_white_01_usm_camo0.rvmat","us_military_faces\m_white_01_w1_usm_camo0.rvmat","us_military_faces\m_white_01_w1_usm_camo0.rvmat"};
		};*/
	//};
};

class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default
		{
			displayname = "$STR_CFG_FACES_Default";
			texture = "\A3\Characters_F\Heads\Data\m_White_01_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			material = "A3\Characters_F\Heads\Data\m_White_01.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled = 1;
		};
		
		
		
		class usm_WhiteHead_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames90";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			head = "NATOHead_A3";
			identityTypes[] = {"usm_heads_generic"};
			material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class usm_WhiteHead_01_camo1: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_01_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_01_camo2: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_01_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_01_camo3: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_01_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_01_camo4: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_01_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_01_camo5: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_01_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_01_camo6: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_01_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_01_camo7: usm_WhiteHead_01
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_01_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_01_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_01_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		class usm_WhiteHead_04: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames93";
			texture = "\A3\Characters_F\Heads\Data\m_White_04_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_04.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
		};
		class usm_WhiteHead_04_camo1: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_04_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_04_camo2: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_04_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_04_camo3: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_04_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_04_camo4: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_04_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_04_camo5: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_04_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_04_camo6: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_04_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_04_camo7: usm_WhiteHead_04
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_04_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_04_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_04_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		class usm_WhiteHead_05: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames94";
			texture = "\A3\Characters_F\Heads\Data\m_White_05_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_05.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
		};
		class usm_WhiteHead_05_camo1: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_05_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_05_camo2: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_05_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_05_camo3: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_05_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_05_camo4: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_05_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_05_camo5: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_05_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_05_camo6: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_05_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_05_camo7: usm_WhiteHead_05
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_05_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_05_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_05_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};	

		class usm_WhiteHead_06: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames95";
			texture = "\A3\Characters_F\Heads\Data\m_White_06_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_06_injury.rvmat";
		};
		class usm_WhiteHead_06_camo1: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_06_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_06_camo2: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_06_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_06_camo3: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_06_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_06_camo4: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_06_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_06_camo5: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_06_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_06_camo6: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_06_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_06_camo7: usm_WhiteHead_06
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_06_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_06_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_06_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		class usm_WhiteHead_07: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames96";
			texture = "\A3\Characters_F\Heads\Data\m_White_07_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_07.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_07_injury.rvmat";
		};
		class usm_WhiteHead_07_camo1: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_07_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_07_camo2: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_07_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_07_camo3: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_07_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_07_camo4: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_07_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_07_camo5: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_07_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_07_camo6: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_07_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_07_camo7: usm_WhiteHead_07
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_07_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_07_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_07_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		
		
		class usm_WhiteHead_08: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames97";
			texture = "\A3\Characters_F\Heads\Data\m_White_08_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_08.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_08_injury.rvmat";
		};
		class usm_WhiteHead_08_camo1: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_08_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_08_camo2: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_08_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_08_camo3: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_08_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_08_camo4: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_08_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_08_camo5: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_08_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_08_camo6: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_08_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_08_camo7: usm_WhiteHead_08
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_08_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_08_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_08_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		class usm_WhiteHead_11: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames100";
			texture = "\A3\Characters_F\Heads\Data\m_White_11_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_11.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_11_injury.rvmat";
		};
		class usm_WhiteHead_11_camo1: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_11_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_11_camo2: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_11_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_11_camo3: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_11_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_11_camo4: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_11_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_11_camo5: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_11_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_11_camo6: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_11_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_11_camo7: usm_WhiteHead_11
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_11_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_11_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_11_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		
		
		
		class usm_WhiteHead_14: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames108";
			texture = "\A3\Characters_F\Heads\Data\m_White_14_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_14.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_14_injury.rvmat";
		};
		class usm_WhiteHead_14_camo1: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_14_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_14_camo2: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_14_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_14_camo3: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_14_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_14_camo4: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_14_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_14_camo5: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_14_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_14_camo6: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_14_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_14_camo7: usm_WhiteHead_14
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_14_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_14_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_14_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		
		
		class usm_WhiteHead_15: usm_WhiteHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames109";
			texture = "\A3\Characters_F\Heads\Data\m_White_15_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_White_15.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_15_injury.rvmat";
		};
		class usm_WhiteHead_15_camo1: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_white_15_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_15_camo2: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_white_15_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_15_camo3: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_white_15_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_15_camo4: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_white_15_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_15_camo5: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_white_15_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_WhiteHead_15_camo6: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_white_15_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_WhiteHead_15_camo7: usm_WhiteHead_15
		{
			head = "NATOHead_A3";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_white_15_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_white_15_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_white_15_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		class usm_PersianHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_TakistaniMen_LastNames11";
			texture = "\A3\Characters_F\Heads\Data\m_persian_01_co.paa";
			head = "PersianHead_A3";
			identityTypes[] = {"usm_heads_generic"};
			material = "\A3\Characters_F\Heads\Data\m_persian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_persian_01_injury.rvmat";
		};		
		
		
		class usm_AfricanHead_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_NATOMen_LastNames112";
			texture = "\A3\Characters_F\Heads\Data\m_african_01_co.paa";
			head = "BlackHead_A3";
			identityTypes[] = {"usm_heads_generic"};
			material = "\A3\Characters_F\Heads\Data\m_african_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat";
		};
		class usm_AfricanHead_01_camo1: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo1";
			material = "us_military_faces\m_African_01_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_01_camo2: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo2";
			material = "us_military_faces\m_African_01_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_01_camo3: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo3";
			material = "us_military_faces\m_African_01_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_01_camo4: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo4";
			material = "us_military_faces\m_African_01_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_01_camo5: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo5";
			material = "us_military_faces\m_African_01_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_01_camo6: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo6";
			material = "us_military_faces\m_African_01_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_AfricanHead_01_camo7: usm_AfricanHead_01
		{
			//head = "NATOHead_A3_usm_camo";
			name = "us_military_mod_Face01_usm_camo7";
			material = "us_military_faces\m_African_01_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_African_01_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_African_01_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		
		
		class usm_AfricanHead_03: usm_AfricanHead_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CivMen_FirstNames26";
			texture = "\A3\Characters_F\Heads\Data\m_african_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_african_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_03_injury.rvmat";
		};		
		class usm_AfricanHead_03_camo1: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo1";
			material = "us_military_faces\m_African_03_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_03_camo2: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo2";
			material = "us_military_faces\m_African_03_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_03_camo3: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo3";
			material = "us_military_faces\m_African_03_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_03_camo4: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo4";
			material = "us_military_faces\m_African_03_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_03_camo5: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo5";
			material = "us_military_faces\m_African_03_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AfricanHead_03_camo6: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo6";
			material = "us_military_faces\m_African_03_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_AfricanHead_03_camo7: usm_AfricanHead_03
		{
			name = "us_military_mod_Face03_usm_camo7";
			material = "us_military_faces\m_African_03_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_African_03_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_African_03_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
	

		class usm_GreekHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_GreekMen_LastNames0";
			texture = "\A3\Characters_F\Heads\Data\m_Greek_01_co.paa";
			head = "GreekHead_A3";
			identityTypes[] = {"usm_heads_generic"};
			material = "\A3\Characters_F\Heads\Data\m_Greek_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Greek_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};	
		class usm_GreekHead_A3_01_camo1: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo1";
			material = "us_military_faces\m_Greek_01_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_GreekHead_A3_01_camo2: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo2";
			material = "us_military_faces\m_Greek_01_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_GreekHead_A3_01_camo3: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo3";
			material = "us_military_faces\m_Greek_01_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_GreekHead_A3_01_camo4: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo4";
			material = "us_military_faces\m_Greek_01_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_GreekHead_A3_01_camo5: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo5";
			material = "us_military_faces\m_Greek_01_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_GreekHead_A3_01_camo6: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo6";
			material = "us_military_faces\m_Greek_01_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_GreekHead_A3_01_camo7: usm_GreekHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo7";
			material = "us_military_faces\m_Greek_01_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_Greek_01_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_Greek_01_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		
		
		
		class usm_AsianHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames24";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_01_co.paa";
			head = "AsianHead_A3";
			identityTypes[] = {"usm_heads_generic"};
			material = "\A3\Characters_F\Heads\Data\m_Asian_01.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
		};
		class usm_AsianHead_A3_01_camo1: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo1";
			material = "us_military_faces\m_asian_01_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_01_camo2: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo2";
			material = "us_military_faces\m_asian_01_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_01_camo3: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo3";
			material = "us_military_faces\m_asian_01_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_01_camo4: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo4";
			material = "us_military_faces\m_asian_01_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_01_camo5: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo5";
			material = "us_military_faces\m_asian_01_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_01_camo6: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo6";
			material = "us_military_faces\m_asian_01_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_AsianHead_A3_01_camo7: usm_AsianHead_A3_01
		{
			name = "us_military_mod_Face03_usm_camo7";
			material = "us_military_faces\m_asian_01_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_asian_01_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_asian_01_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};

		
		class usm_AsianHead_A3_02: usm_AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames7";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_02_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_02.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_02_injury.rvmat";
		};
		class usm_AsianHead_A3_02_camo1: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo1";
			material = "us_military_faces\m_asian_02_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_02_camo2: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo2";
			material = "us_military_faces\m_asian_02_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_02_camo3: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo3";
			material = "us_military_faces\m_asian_02_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_02_camo4: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo4";
			material = "us_military_faces\m_asian_02_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_02_camo5: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo5";
			material = "us_military_faces\m_asian_02_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_02_camo6: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo6";
			material = "us_military_faces\m_asian_02_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_AsianHead_A3_02_camo7: usm_AsianHead_A3_02
		{
			name = "us_military_mod_Face03_usm_camo7";
			material = "us_military_faces\m_asian_02_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_asian_02_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_asian_02_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};		
		
		
		class usm_AsianHead_A3_03: usm_AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_AsianMen_LastNames21";
			texture = "\A3\Characters_F\Heads\Data\m_Asian_03_co.paa";
			material = "\A3\Characters_F\Heads\Data\m_Asian_03.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_Asian_03_injury.rvmat";
		};
		class usm_AsianHead_A3_03_camo1: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo1";
			material = "us_military_faces\m_asian_03_usm_camo1.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo1.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo1.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_03_camo2: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo2";
			material = "us_military_faces\m_asian_03_usm_camo2.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo2.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo2.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_03_camo3: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo3";
			material = "us_military_faces\m_asian_03_usm_camo3.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo3.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo3.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_03_camo4: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo4";
			material = "us_military_faces\m_asian_03_usm_camo4.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo4.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo4.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_03_camo5: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo5";
			material = "us_military_faces\m_asian_03_usm_camo5.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo5.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo5.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo1"};
		};
		class usm_AsianHead_A3_03_camo6: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo6";
			material = "us_military_faces\m_asian_03_usm_camo6.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo6.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo6.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
		class usm_AsianHead_A3_03_camo7: usm_AsianHead_A3_03
		{
			name = "us_military_mod_Face03_usm_camo7";
			material = "us_military_faces\m_asian_03_usm_camo7.rvmat";
			materialWounded1 = "us_military_faces\m_asian_03_w1_usm_camo7.rvmat";
			materialWounded2 = "us_military_faces\m_asian_03_w1_usm_camo7.rvmat";
			disabled = 1;
			identityTypes[] = {"usm_heads_generic_camo2"};
		};
	};
};	