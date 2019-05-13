bn_test_log = "";
bn_test_log_text = "";
bn_test_suite_test_list = "";
bn_inventory_text = "";
[] call bn_test_suite_fnc_default_tests;
{
	_x call bn_test_suite_fnc_run_assert;
	bn_test_suite_test_list = bn_test_suite_test_list + (_x select 2) + "<br />";
} forEach bn_test_suite_assertions;

[] call bn_test_suite_fnc_take_inventory;

bn_test_log = bn_test_log + "<execute expression='copyToClipboard bn_test_log_text'>Скопировать в буфер обмена</execute>";
bn_test_suite_test_list = bn_test_suite_test_list + "<execute expression='copyToClipboard bn_test_suite_test_list'>Скопировать в буфер обмена</execute>";
bn_inventory_text = bn_inventory_text + "<execute expression='copyToClipboard bn_test_log_text'>Скопировать в буфер обмена</execute>";

player createDiaryRecord ["Diary", ["Набор тестов - результаты",bn_test_log]];
player createDiaryRecord ["Diary", ["Набор тестов - инвентаризация",bn_inventory_text]];
player createDiaryRecord ["Diary", ["Набор тестов - список доступных тестов",bn_test_suite_test_list]];

if (count bn_anachronistic_items > 0) then {
	bn_anachronism_text = bn_anachronism_text + "<execute expression='copyToClipboard bn_anachronism_text'>Скопировать в буфер обмена</execute>";
};
player createDiaryRecord ["Diary", ["Набор тестов - анахронизмы",bn_anachronism_text]];