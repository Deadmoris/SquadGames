ace_guidance_type = "lgb" (этот параметр был раньше в ammo у лазерных бомб. Я удалил его, т.к. тушинская система бомбометания сломалась еще летом 2016 года и работала только с CBA v2.3.1 + бомбы игнорировали эйсовский лазеркод).
Сейчас бомбы работают по ванильному локу лцу.
Новая система АСЕ3 требует в ammo ракеты прописывать "class ace_missileguidance" (нужно для работы х29 и мавериков).
Также чтобы система заработала и появилась возможность менять лазерный код на ракетах мною была удалена проверка на missilebase из скрипта ACE3 "fnc_onFired.sqf" (лежит в ace_missileguidance.pbo в папке functions).
Чтобы была возможность менять лазерный код на бомбах в weapons пусковой установки
надо прописать параметр ace_laser_canSelect = 1 (т.к. функция смены лазеркода "fnc_keyLaserCodeChange.sqf" в ace_laser.pbo делает проверку
на этот параметр "if (((getNumber (configFile >> "CfgWeapons" >> _currentWeapon >> "laser")) == 0) && {(getNumber (configFile >> "CfgWeapons" >> _currentWeapon >> QGVAR(canSelect))) == 0}) exitWith {false};" 
Про QGVAR и т.п. можно почитать здесь https://ace3mod.com/wiki/development/coding-guidelines.html).