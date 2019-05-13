bn_test_suite_free_marker_id = 0;
bn_test_suite_assertions = [];
if (isServer && {!isDedicated || (((toLower serverName) find "test") > -1)}) then {
	remoteExec ["bn_test_suite_fnc_admin"];
};
