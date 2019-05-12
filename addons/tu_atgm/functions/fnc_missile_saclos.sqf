#define __cfg configFile >> "CfgAmmo" >> _ammoType
#define __TRACKINTERVAL 0.025

#define EXCEED_SPEED 70
#define EXCEED_DIST 1000

if (isDedicated || {!isNil "tu_atgm_missile_saclos_fsm_only"}) then {
	_handle = [
		_this,
		tu_atgm_fnc_saclos_exit_condition,
		tu_atgm_fnc_saclos_run_code,
		tu_atgm_fnc_saclos_init_code,
		tu_atgm_fnc_saclos_exit_condition,
		tu_atgm_saclos_private_variables,
		tu_atgm_fnc_saclos_run_condition
	] execFSM cba_common_delayless_loop;
} else {
	_handle = [
		tu_atgm_fnc_saclos_run_code,
		_this,
		0,
		tu_atgm_fnc_saclos_init_code,
		tu_atgm_fnc_saclos_exit_code,
		tu_atgm_fnc_saclos_run_condition,
		tu_atgm_fnc_saclos_exit_condition,
		tu_atgm_saclos_private_variables
	] call tu_common_fnc_addPerFrameHandlerLogic;
};
