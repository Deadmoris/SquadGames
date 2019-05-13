class CfgPatches
{
	class grad_trenches_functions
	{
		name="grad_trenches_functions";
		units[]=
		{
			"GRAD_envelope_gigant",
			"GRAD_envelope_vehicle",
			"GRAD_envelope_short"
		};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
			"grad_trenches_main",
			"ace_trenches"
		};
		authors[]=
		{
			"Salbei",
			"chris579"
		};
		version="1.5.2-0";
		versionStr="1.5.2-0";
		versionAr[]={1,5,2,0};
	};
};
class Cfg3DEN
{
	class EventHandlers
	{
		class grad_trenches_functions
		{
			onMissionPreviewEnd="[] spawn {waitUntil {!isNil ""grad_trenches_functions_fnc_initTrench3DEN""}; call grad_trenches_functions_fnc_initTrench3DEN}";
			onMissionLoad="[] spawn {waitUntil {!isNil ""grad_trenches_functions_fnc_initTrench3DEN""}; call grad_trenches_functions_fnc_initTrench3DEN}";
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preProcessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preProcessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class grad_trenches_functions
	{
		init="call compile preProcessFileLineNumbers '\x\grad_trenches\addons\functions\XEH_postInit.sqf'";
	};
};
class Extended_Deleted_EventHandlers
{
	class ACE_envelope_small
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class ACE_envelope_big
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_gigant
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
	class GRAD_envelope_vehicle
	{
		class grad_trenches_functions_camouflageDelete
		{
			deleted="if (isServer) then {_this call grad_trenches_functions_fnc_deleteCamouflage}";
		};
	};
};
class Extended_Init_EventHandlers
{
	class ACE_envelope_small
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class ACE_envelope_big
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_gigant
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
	class GRAD_envelope_vehicle
	{
		class grad_trenches_functions_trenchInit
		{
			init="_this call grad_trenches_functions_fnc_initTrench";
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				delete ace_trenches_digEnvelopeSmall;
				delete ace_trenches_digEnvelopeBig;
				class ace_trenches
				{
					displayName="$STR_ACE_Trenches_EntrenchingToolName";
					condition="_player call grad_trenches_functions_fnc_canDigTrench&& grad_trenches_functions_allowDigging";
					statement="";
					showDisabled=0;
					priority=3;
					exceptions[]=
					{
						"notOnMap",
						"isNotInside",
						"isNotSitting"
					};
					class ace_trenches_digEnvelopeSmall
					{
						displayName="$STR_ace_trenches_DigEnvelopeSmall";
						exceptions[]={};
						showDisabled=0;
						priority=4;
						statement="[{_this call grad_trenches_functions_fnc_placeTrench},[_this select 0,'ACE_envelope_small']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging&& ([_target,_player] call ace_trenches_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowSmallEnvelope";
					};
					class ace_trenches_digEnvelopeBig: ace_trenches_digEnvelopeSmall
					{
						displayName="$STR_ace_trenches_DigEnvelopeBig";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench},[_this select 0,'ACE_envelope_big']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging&& ([_target,_player] call ace_trenches_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowBigEnvelope";
					};
					class grad_trenches_digEnvelopeShort: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeShort";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench},[_this select 0,'GRAD_envelope_short']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging&& ([_target,_player] call ace_trenches_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowShortEnvelope";
					};
					class grad_trenches_digEnvelopeGigant: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeGigant";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench},[_this select 0,'GRAD_envelope_gigant']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging&& ([_target,_player] call ace_trenches_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowGigantEnvelope";
					};
					class grad_trenches_digEnvelopeVehicle: ace_trenches_digEnvelopeBig
					{
						displayName="$STR_grad_trenches_functions_DigEnvelopeVehicle";
						statement="[{_this call grad_trenches_functions_fnc_placeTrench},[_this select 0,'GRAD_envelope_vehicle']] call CBA_fnc_execNextFrame";
						condition="grad_trenches_functions_allowDigging&& ([_target,_player] call ace_trenches_fnc_canContinueDiggingTrench) && grad_trenches_functions_allowVehicleEnvelope";
					};
				};
			};
		};
	};
	class BagFence_base_F;
	class ACE_envelope_small: BagFence_base_F
	{
		ace_trenches_noGeoClass="ACE_envelope_small_noGeo";
		ace_trenches_placementData[]={8,1.1,0};
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		grad_trenches_functions_isTrench=1;
		ace_trenches_diggingDuration="grad_trenches_functions_smallEnvelopeDigTime";
		ace_trenches_boundingBoxOffset="0.16";
		class CamouflagePositions01
		{
			center[]={0,1.3,0};
			left[]={1.3,-0.80000001,0.40000001};
			right[]={-1.3,-0.80000001,0.40000001};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_ContinueDiggingTrench
				{
					statement="[_target,_player] call grad_trenches_functions_fnc_continueDiggingTrench;";
				};
				class ACE_RemoveTrench
				{
					statement="[_target,_player] call grad_trenches_functions_fnc_removeTrench;";
				};
				class grad_trenches_functions_helpDigging
				{
					displayName="$STR_grad_trenches_functions_HelpDigging";
					condition="[_target,_player] call grad_trenches_functions_fnc_canHelpDiggingTrench";
					statement="[_target,_player] call grad_trenches_functions_fnc_addDigger";
					priority=-1;
				};
				class grad_trenches_functions_placeCamouflage
				{
					displayName="$STR_grad_trenches_functions_placeCamouflage";
					condition="[_target,_player] call grad_trenches_functions_fnc_canPlaceCamouflage";
					statement="[_target,_player] call grad_trenches_functions_fnc_placeCamouflage";
					priority=-1;
				};
				class grad_trenches_functions_removeCamouflage
				{
					displayName="$STR_grad_trenches_functions_removeCamouflage";
					condition="[_target] call grad_trenches_functions_fnc_canRemoveCamouflage";
					statement="[_target,_player] call grad_trenches_functions_fnc_removeCamouflage";
					priority=-1;
				};
			};
		};
		class Attributes
		{
			class grad_trenches_functions_camouflageAttribute
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="$STR_grad_trenches_functions_CamouflageAttribute";
				tooltip="$STR_grad_trenches_functions_CamouflageAttributeTooltip";
				expression="[_this,_value] call grad_trenches_functions_fnc_applyCamouflageAttribute";
				property="grad_trenches_camouflageTrench";
			};
		};
	};
	class ACE_envelope_big: BagFence_base_F
	{
		ace_trenches_noGeoClass="ACE_envelope_big_noGeo";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		grad_trenches_functions_isTrench=1;
		ace_trenches_diggingDuration="grad_trenches_functions_bigEnvelopeDigTime";
		ace_trenches_boundingBoxOffset="0.197";
		class CamouflagePositions01
		{
			center[]={-0.40000001,0.40000001,0.2};
			left[]={-1.75,0.2,0.2};
			right[]={1.75,0.2,0.2};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ACE_ContinueDiggingTrench
				{
					statement="[_target,_player] call grad_trenches_functions_fnc_continueDiggingTrench;";
				};
				class ACE_RemoveTrench
				{
					statement="[_target,_player] call grad_trenches_functions_fnc_removeTrench;";
				};
				class grad_trenches_functions_helpDigging
				{
					displayName="$STR_grad_trenches_functions_HelpDigging";
					condition="[_target,_player] call grad_trenches_functions_fnc_canHelpDiggingTrench";
					statement="[_target,_player] call grad_trenches_functions_fnc_addDigger";
					priority=-1;
				};
				class grad_trenches_functions_placeCamouflage
				{
					displayName="$STR_grad_trenches_functions_placeCamouflage";
					condition="[_target,_player] call grad_trenches_functions_fnc_canPlaceCamouflage";
					statement="[_target,_player] call grad_trenches_functions_fnc_placeCamouflage";
					priority=-1;
				};
				class grad_trenches_functions_removeCamouflage
				{
					displayName="$STR_grad_trenches_functions_removeCamouflage";
					condition="[_target] call grad_trenches_functions_fnc_canRemoveCamouflage";
					statement="[_target,_player] call grad_trenches_functions_fnc_removeCamouflage";
					priority=-1;
				};
			};
		};
		class Attributes
		{
			class grad_trenches_functions_camouflageAttribute
			{
				control="CheckboxNumber";
				defaultValue="0";
				displayName="$STR_grad_trenches_functions_CamouflageAttribute";
				tooltip="$STR_grad_trenches_functions_CamouflageAttributeTooltip";
				expression="[_this,_value] call grad_trenches_functions_fnc_applyCamouflageAttribute";
				property="grad_trenches_camouflageTrench";
			};
		};
	};
	class GRAD_envelope_gigant: ACE_envelope_big
	{
		author="Gruppe Adler";
		displayName="$STR_grad_trenches_functions_EnvelopeGigantName";
		descriptionShort="$STR_grad_trenches_functions_EnevlopeGigantDescription";
		scope=2;
		ace_trenches_diggingDuration="grad_trenches_functions_gigantEnvelopeDigTime";
		ace_trenches_removalDuration=30;
		ace_trenches_noGeoClass="GRAD_envelope_gigant_noGeo";
		ace_trenches_placementData[]={8,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		ace_trenches_boundingBoxOffset=0.55699998;
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		class CamouflagePositions01
		{
			left1[]={-0.5,0.30000001,0.5};
			left2[]={-2.7,0.30000001,0.5};
			right1[]={2.7,0.15000001,0.34999999};
			right2[]={4.9000001,-0.5,-0.15000001};
		};
	};
	class GRAD_envelope_vehicle: ACE_envelope_big
	{
		author="Gruppe Adler";
		displayName="$STR_grad_trenches_functions_EnvelopeVehicleName";
		descriptionShort="$STR_grad_trenches_functions_EnevlopeVehicleDescription";
		scope=2;
		ace_trenches_diggingDuration="grad_trenches_functions_vehicleEnvelopeDigTime";
		ace_trenches_removalDuration=60;
		ace_trenches_noGeoClass="GRAD_envelope_vehicle_noGeo";
		ace_trenches_placementData[]={10,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		ace_trenches_boundingBoxOffset="0.34";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		class CamouflagePositions01
		{
		};
		class Attributes
		{
		};
	};
	class GRAD_envelope_short: ACE_envelope_big
	{
		author="Gruppe Adler";
		displayName="$STR_grad_trenches_functions_EnvelopeShortName";
		descriptionShort="$STR_grad_trenches_functions_EnevlopeShortDescription";
		scope=2;
		ace_trenches_diggingDuration="grad_trenches_functions_shortEnvelopeDigTime";
		ace_trenches_removalDuration=10;
		ace_trenches_noGeoClass="GRAD_envelope_short_noGeo";
		ace_trenches_placementData[]={10,1.1,0.2};
		ace_trenches_grassCuttingPoints[]=
		{
			{-1.5,-1,0},
			{1.5,-1,0}
		};
		ace_trenches_boundingBoxOffset="0.16";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Military";
		class CamouflagePositions01
		{
			right[]={1.1,0.2,0.2};
			left[]={-1.1,0.1,0.2};
		};
	};
};
class CfgWorldsTextures
{
	class Default
	{
		surfaceTextureBasePath="a3\map_data\";
		filePrefix="co.paa";
	};
	class Altis: Default
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
		class Surfaces
		{
			class lib_sf_france_raps
			{
				texturePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\France\lib_sf_france_raps_co.paa";
			};
		};
	};
	class BaranowWinter
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Baranow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class SWU_Dunkirk_Bray_Dunes_1940: Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_swurvin\Surfaces_t\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
		class Surfaces
		{
			class Default
			{
				texturePath="a3\map_data\gdt_beach_co.paa";
			};
		};
	};
	class Bootcamp_ACR
	{
		surfaceTextureBasePath="ca\Bootcamp_ACR\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_GrassBunch.p3d"
		};
	};
	class Woodland_ACR
	{
		surfaceTextureBasePath="ca\Bohemia\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class Chernarus
	{
		surfaceTextureBasePath="ca\CHERNARUS\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class mbg_celle2: Chernarus
	{
		camouflageObjects[]={};
	};
	class Chernarus_Summer: Chernarus
	{
		camouflageObjects[]=
		{
			"ca\plants2\clutter\c_weed3.p3d"
		};
	};
	class Chernarus_Winter
	{
		surfaceTextureBasePath="\chernarus_winter\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]={};
	};
	class Colleville: Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\France\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class CollevilleWinter
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\France\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Desert_E
	{
		surfaceTextureBasePath="ca\Desert_E\data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"
		};
	};
	class pja310
	{
		surfaceTextureBasePath="mak\projetA3-10\Data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class pja314
	{
		surfaceTextureBasePath="MAK\projetA3014\data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class Ivachev
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class IvachevWinter
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Ivachev\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class PanovoWinter
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Panovo\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class StaszowWinter
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Staszow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class kerama
	{
		surfaceTextureBasePath="Kerama\data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class lythium: Default
	{
		surfaceTextureBasePath="GBR\lythium\data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Malden: Altis
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
		class Surfaces
		{
			class GdtForestMalden
			{
				texturePath="a3\map_malden\data\gdt_forest_malden_co.paa";
			};
		};
	};
	class Napf
	{
		surfaceTextureBasePath="momo\Napf\data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"
		};
	};
	class SWU_Ardennes_1940: Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_swurvin\Surfaces_t\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
	class SWU_Ardennes_1944_Winter
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_swurvin\Surfaces_t\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
	class SWU_Greece_Pella_Region
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_swurvin\Surfaces_t\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
	class SWU_Russia_Volkhov_Forest
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_swurvin\Surfaces_t\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
	class Intro: Chernarus
	{
		camouflageObjects[]=
		{
			"ca\plants\clutter_grass_flowers.p3d"
		};
	};
	class ruha
	{
		surfaceTextureBasePath="ruha\ruha\data\";
		filePrefix="co.paa";
	};
	class Panovo
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Porto
	{
		surfaceTextureBasePath="ca\desert2\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]={};
	};
	class prei_khmaoch_luong
	{
		surfaceTextureBasePath="\blud_prei_art\data\ground\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"a3\vegetation_f_exp\clutter\grass\c_Grass_Tropic.p3d"
		};
	};
	class ProvingGrounds_PMC
	{
		surfaceTextureBasePath="ca\provinggrounds_pmc\Data\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Sara
	{
		surfaceTextureBasePath="ca\sara\Data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
		class Surfaces
		{
			class mesto
			{
				texturePath="ca\sara\Data\mesto_co.paa";
			};
		};
	};
	class Hyde_Sark: Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsWW2_Hyde\Surfaces_t\";
		filePrefix="co.paa";
		camouflageObjects[]={};
		class Surfaces
		{
			class default
			{
				texturePath="WW2\TerrainsWW2_Hyde\Surfaces_t\Hyde_SA_beach_co.paa";
			};
		};
	};
	class Shapur_Baf
	{
		surfaceTextureBasePath="ca\shapur_baf\Data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"
		};
	};
	class SaraLite
	{
		surfaceTextureBasePath="ca\saralite\Data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Staszow: Baranow
	{
		surfaceTextureBasePath="WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Stratis: Altis
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class Takistan
	{
		surfaceTextureBasePath="ca\takistan\Data\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Mountains_ACR
	{
		surfaceTextureBasePath="ca\afghan\Data\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class Tanoa: Altis
	{
		surfaceTextureBasePath="A3\Map_Data_Exp\";
		camouflageObjects[]=
		{
			"A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d"
		};
	};
	class Sara_dbe1: Sara
	{
		camouflageObjects[]=
		{
			"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"
		};
	};
	class utes
	{
		surfaceTextureBasePath="ca\utes\Data\";
		filePrefix=".paa";
		camouflageObjects[]=
		{
			"CUP\Terrains\cup_terrains_worlds\Clutter\c_GrassCrookedForest.p3d"
		};
		class Surfaces
		{
			class Default
			{
				texturePath="a3\map_data\gdt_beach_co.paa";
			};
		};
	};
	class Zargabad
	{
		surfaceTextureBasePath="ca\zargabad\Data\";
		filePrefix="co.paa";
		camouflageObjects[]=
		{
			"ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d"
		};
	};
	class tem_ihantalaw
	{
		surfaceTextureBasePath="tem\tem_ihantalaw\data\";
		filePrefix="co.paa";
		camouflageObjects[]={};
	};
	class WL_Rosche
	{
		surfaceTextureBasePath="WL\WL_Rosche\data\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
	class abramia
	{
		surfaceTextureBasePath="ibr\abramia\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]={};
	};
	class isladuala3
	{
		surfaceTextureBasePath="ibr\isladuala3\data\";
		filePrefix="detail_co.paa";
		camouflageObjects[]={};
	};
	class tembelan
	{
		surfaceTextureBasePath="ZI\Tembelan\data\";
		filePrefix="_co.paa";
		camouflageObjects[]={};
	};
};
