params ["_x"];

if(_x in playableUnits) then
{
	_x setBehaviour "CARELESS";
	_x allowFleeing 0;
	_x disableAI "AUTOTARGET";
	_x disableAI "PATH";
	//_x setCombatMode "BLUE";
	_x disableAI "MOVE";
	// _x disableAI "CHECKVISIBLE";
	_x disableAI "COVER";
	_x disableAI "FSM";
	_x stop true;
	_x doWatch objNull;
	_x disableConversation true;
	_x setVariable ["BIS_noCoreConversations", true];
};