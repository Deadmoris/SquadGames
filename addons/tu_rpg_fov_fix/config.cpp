class CfgPatches
{
  class tu_rpg_fov_fix
  {
    units[]={};
    weapons[]={"rhs_acc_pgo7"};
    requiredVersion=0.1;
	requiredAddons[] = {"rhs_c_weapons"};
  };
};

class CfgWeapons {
	class InventoryOpticsItem_Base_F;
	class rhs_acc_sniper_base;
	class rhs_acc_pgo7v: rhs_acc_sniper_base
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			
			modelOptics = "\tu_rpg_fov_fix\rhs_pgo7v_scope";
			
		};
	};
	class rhs_acc_pgo7v2: rhs_acc_pgo7v
	{
		class ItemInfo: ItemInfo
		{
			modelOptics = "\tu_rpg_fov_fix\rhs_pgo7v2_scope";
		};
	};
	class rhs_acc_pgo7v3: rhs_acc_pgo7v
	{
		class ItemInfo: ItemInfo
		{
			modelOptics = "\tu_rpg_fov_fix\rhs_pgo7v3_scope";
		};
	};

	
};
class RscControlsGroup;
class RscPicture;
class RscInGameUI{
	class RscUnitInfo;
	class RscWeaponZeroing;
	
	class rhs_acc_sniper_base;
	
	class rhs_rscOptics_acc_pgo7: RscWeaponZeroing
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0, 'pgo7v',true] call RHS_fnc_sight_pso1;";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc=170;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,0,0,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,0,0,0};
				height=0.001;
			};
			class Controls
			{
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.99000001,0.60000002,0.16,0};
					shadow=0;
					text="\tu_rpg_fov_fix\data\rhs_pgo7_optic_ilum_ca.paa";
					x="13.69 *   (0.01875 * Safezoneh)";
					y="7.05 *   (0.025 * SafezoneH)";
					w="26 *   (0.01875 * SafezoneH)";
					h="26 *   (0.025 * SafezoneH)";
				};
				class RHS_pso_handler: RscPicture
				{
					idc=9998;
				};
			};
		};
	};
	
	class rhs_rscOptics_acc_pgo7v2: rhs_rscOptics_acc_pgo7
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0, 'pgo7v2',true] call RHS_fnc_sight_pso1;";
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls: Controls
			{
				class RHS_Illumination: RHS_Illumination
				{
					text="\tu_rpg_fov_fix\data\rhs_pgo7v2_optic_ilum_ca.paa";
				};
				class RHS_pso_handler: RscPicture
				{
					idc=9998;
				};
			};
		};
	};
	
		class rhs_rscOptics_acc_pgo7v3: rhs_rscOptics_acc_pgo7
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0, 'pgo7v3',true] call RHS_fnc_sight_pso1;";
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls: Controls
			{
				class RHS_Illumination: RHS_Illumination
				{
					text="\tu_rpg_fov_fix\data\rhs_pgo7v3_optic_ilum_ca.paa";
				};
				class RHS_pso_handler: RscPicture
				{
					idc=9998;
				};
			};
		};
	};
	
};

