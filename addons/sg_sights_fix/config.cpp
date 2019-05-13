#include "BIS_AddonInfo.hpp"
class CfgPatches
{
  class sg_sights_fix
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
	requiredAddons[] = {"rhs_c_heavyweapons"};
  };
};

class Turrets;
class MainTurret;
class EventHandlers;
class ViewOptics;
class ViewGunner;
class OpticsIn;
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class EventHandlers;
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class StaticATWeapon: StaticWeapon
	{
	};
	class StaticAAWeapon: StaticWeapon
	{
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticMortar: StaticWeapon
	{
	};
	

	class RHS_Ural_BaseTurret;
	class RHS_Ural_Zu23_Base:  RHS_Ural_BaseTurret
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel="\sg_sights_fix\data\model\rhs_pzu5.p3d";
				gunnerOutOpticsModel="\sg_sights_fix\data\model\rhs_pzu5.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
			};
		};
	};

	class RHS_ZU23_base: StaticCannon
	{
		dlc="RHS_AFRF";
		mapSize=2.5;
		cargoAction[]=
		{
			"Hilux_Cargo01"
		};
		displayname="ZU-23-2";
		model="\rhsafrf\addons\rhs_heavyweapons\ZU23\zu23";
		class Library
		{
			libTextDesc="ZU-23-2";
		};
		icon="\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
		picture="\rhsafrf\addons\rhs_heavyweapons\data\ico\zu23_CA.paa";
		UiPicture="\rhsafrf\addons\rhs_heavyweapons\data\ico\zu23_CA.paa";
		transportSoldier=0;
		memoryPointsGetInCargo="pos_cargo_dir";
		memoryPointsGetInCargoDir="pos_cargo";
		memoryPointsGetInDriver="pos_driver_dir";
		memoryPointsGetInDriverDir="pos_driver";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_co.paa",
			"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_co.paa"
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel="\sg_sights_fix\data\model\rhs_pzu5.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
			};
	
		};
	};
};