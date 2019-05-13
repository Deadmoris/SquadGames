if (serverCommandAvailable "#kick") then {
	player createDiaryRecord ["Diary", ["Набор тестов - управление","<execute expression='[] call bn_test_suite_fnc_run_tests'>Выполнить тест</execute> | <execute expression='remoteExec [""bn_test_suite_fnc_run_tests""]'>Выполнить для всех</execute>"]];
};