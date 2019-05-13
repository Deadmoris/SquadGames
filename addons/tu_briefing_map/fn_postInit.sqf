if(!hasInterface)exitWith{}; //запускаемся только на клиентах с интерфейсом
[] spawn
{
	waitUntil{player == player}; //ждем синхронизации с сервером

	//определим, есть ли у игрока карта или GPS
	_mapCount = ({getText(configFile >> "cfgWeapons" >> _x >> "simulation") == "itemMap"} count (assignedItems player));
	if ((_mapCount == 0) && {isNil "tu_briefing_map_override"}) then
	{
		player linkItem "tu_briefing_map"; //дадим игроку временную карту
	};

	sleep 1; //ждем окончания брифинга
	player unLinkItem "tu_briefing_map"; //удалим карту из слота
	player removeItem "tu_briefing_map"; //удалим карту из инвентаря, если кто-то умудрился припрятать ее в карманах
};