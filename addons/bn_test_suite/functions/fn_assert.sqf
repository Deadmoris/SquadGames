/* 0 - Array - просматриваемый массив, например, vehicles или playableUnits
1 - String - условие "как должно быть" (компилируется, получает ссылку на юнит в переменной _u)
2 - String - сообщение, выводится если условие нарушено
3 - String - дополнительное сообщение (компилируется, получает ссылку на юнит в переменной _u)
*/
params ["_array","_condition","_fail_message", ["_extra_message", ""]];
bn_test_suite_assertions pushBack [_array, _condition, _fail_message, _extra_message];