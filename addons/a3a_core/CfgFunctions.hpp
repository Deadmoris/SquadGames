class CfgFunctions 
{
	class A3A
	{
		class Common {
			file = "\A3A_Core\FUNCTIONS\Common";
			class EndMission;
			class EndMissionCapture;
			class EndMissionCountUnits;
			class EndMissionDeadInZone;
			class EndMissionDeadInZones;
			class EndMissionTimer;
			class EndMissionZonesCapture;
			class GetBFSide;
			class GetMessage;
			class GetOFSide;
			class GetSide;
			class LogMessage;
			class Message;
			class ShowMessageCountUnits;
		};
		class Server {
			file = "\A3A_Core\FUNCTIONS\Server";
			class srv_GetMissionTime;
		};
		class Client {
			file = "\A3A_Core\FUNCTIONS\Client";
			class ConvertTime;
			class OnKeyDown;
			class OnKeyUp;
			class PB_Visual;
			class PushBoat;
			class FTHudShow;
			class VehicleFreeze;
			class RatingControl;
			class cli_SpawnZoneRestriction;
			class cli_GetDogTag;
			class TeleportPlayer;
			class brief_vehMark;
			class brief_vehMarkDelete;
			class brief_addGroups;
			class brief_markGroups;
			class brief_markGroupsDelete;
			class brief_writeBriefing;
		};		
	};
};