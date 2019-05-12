
class CfgPatches
{
	class sg_pzrk
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMagazines {	
	class rhs_mag_9k38_rocket;
	class Titan_AA;
	class tu_rhs_mag_9k32_rocket: rhs_mag_9k38_rocket // добавляем ракету Стрелы, забирая модельку Иглы
	{
		ammo = "tu_rhs_ammo_9k32";
		initspeed = 40;
		displayname = $STR_9K32;
	};
	class tu_rhs_mag_9k32M_rocket: tu_rhs_mag_9k32_rocket //добавляем новый класс ракеты Стрела-2М
	{
		ammo = "tu_rhs_ammo_9k32M";
		displayname = $STR_9K32M;
		initspeed = 40;	
	};
	class tu_rhs_mag_9k38_rocket: tu_rhs_mag_9k32_rocket //добавляем новый старый класс для Иглы
	{
		ammo = "tu_rhs_ammo_9k38";
		initspeed = 40;
		displayname = $STR_9K38;
	};
	class tu_rhs_mag_9k38m_rocket: tu_rhs_mag_9k38_rocket //добавляем новый класс ракеты Игла-С
 	{
  		ammo = "tu_rhs_ammo_9k38m";
  		displayname = $STR_9K38C;
  		initspeed = 40;
 	};
	class tu_rhs_mag_9k333_rocket: tu_rhs_mag_9k38_rocket //добавляем новый класс ракеты Верба
	{
		ammo = "tu_rhs_ammo_9k333";
		displayname = $STR_9M336;
		initspeed = 40;
	};
	class rhs_fim92_mag: Titan_AA
	{
		displayname = $STR_FIM92E;
		ammo = "rhsammo_fim92_missile";
		initSpeed = 40;
	};
	class tu_rhs_fim92F_mag: rhs_fim92_mag {
		displayname = $STR_FIM92F;
		ammo = "tu_rhsammo_fim92F_missile";
		initSpeed = 40;
	};
	class tu_rhs_fim92C_mag: rhs_fim92_mag {
		displayname = $STR_FIM92C;
		ammo = "tu_rhsammo_fim92C_missile";
		initSpeed = 40;
	};
	class tu_rhs_fim92A_mag: rhs_fim92_mag {
		displayname = $STR_FIM92A;
		ammo = "tu_rhsammo_fim92A_missile";
		initSpeed = 40;
	};
};

class CfgWeapons {
	class Launcher;
	class rhs_weap_igla;
	
	class tu_rhs_weap_strela : rhs_weap_igla { //берем за основу Иглу, но вяжем модельку Стрелы, нужно иметь аддон КАП Стрела
		dlc = RHS_AFRF;
		author = $STR_RHS_AUTHOR_FULL;
		model = "\CUP\Weapons\CUP_Weapons_Strela_2\CUP_strela_launcher.p3d"; // подвязываем модель
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_Strela_2\data\Anim\Strela.rtm"}; // подвязываем анимацию
		picture = "\CUP\Weapons\CUP_Weapons_Strela_2\data\ui\gear_9k32_ca.paa"; // вяжем иконку
		scope = 2;
		class OpticsModes // не трогать
		{
			class Ironsight // прицел, иначе будет пиздец, просто не трогайте это
			{
				opticsid=1;
				usemodeloptics=0;
				distancezoommax=300;
				distancezoommin=300;
				memorypointcamera="eye";
				opticsdisableperipherialvision=0;
				opticsflare=0;
				opticsppeffects[]={};
				opticszoominit=0.75;
				opticszoommax=1;
				opticszoommin=0.375;
				visionmode[]={};
			};
		};
		descriptionShort = "ПЗРК Стрела-2<br />Дальность стрельбы:100-3400м<br />Высота стрельбы: 50-1500м<br />Скорость цели для захвата: не более 220м/с"; // описание в инвентаре
		cmimmunity=0;
		lockAcquire = 0;
		displayname = $STR_strela2;
		magazines[] = {"tu_rhs_mag_9k32_rocket"}; // чем оно заряжено
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher", 0.891251, 1, 10};
		sounds[] = {"StandardSound"};	
		ACE_UsedTube = "rhs_weap_strela2_used"; // подвязка пустой стрелы		
		
		class StandardSound {
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_4", 1.41254, 1, 1100};
			soundBegin[] = {"begin1", 1};
			weaponSoundEffect = "DefaultRifle";
		};
	};
	class rhs_weap_strela2_used : tu_rhs_weap_strela { // пустая труба
		displayname = $STR_strela2_used;
        ACE_isUsedLauncher = 1;
		weaponPoolAvailable = 0;
		scopearsenal = 1;
		magazines[] = {"ACE_FiredMissileDummy"}; // делаем так чтобы нельзя было его перезарядить
	}; // Далее все по аналогии
	class tu_rhs_weap_strela2m : tu_rhs_weap_strela { // Добавляем новый класс ПЗРК
		cmimmunity=0;
		lockAcquire = 0;
		displayname = $STR_strela2m;
		descriptionShort = "ПЗРК Стрела-2М<br />Дальность стрельбы:100-4200м<br />Высота стрельбы: 50-2300м<br />Скорость цели для захвата: не более 260м/с";
		magazines[] = {"tu_rhs_mag_9k32m_rocket"};
		ACE_UsedTube = "tu_rhs_weap_strela2m_used";
	};
	class tu_rhs_weap_strela2m_used : tu_rhs_weap_strela2m {
		displayname = $STR_strela2m_used;
        ACE_isUsedLauncher = 1;
		weaponPoolAvailable = 0;
		scopearsenal = 1;
		magazines[] = {"ACE_FiredMissileDummy"};
	};
	class tu_rhs_weap_igla: rhs_weap_igla {
		lockAcquire = 0;
		displayname = $STR_igla;
	    cmimmunity=0;
		descriptionShort = "ПЗРК ИГЛА<br />Дальность стрельбы:100-5000м<br />Высота стрельбы: 50-3500м<br />Скорость цели для захвата: не более 360м/с";
		magazines[] = {"tu_rhs_mag_9k38_rocket"};
		ACE_UsedTube = "tu_rhs_weap_igla_used";
	};
	class tu_rhs_weap_igla_used : tu_rhs_weap_igla {
		displayname = $STR_igla_used;
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
		magazines[] = {"ACE_FiredMissileDummy"};
	};
	 class tu_rhs_weap_iglas : tu_rhs_weap_igla { //Добавляем класс ПЗРК
		cmimmunity=0;
		lockAcquire = 0;
  		displayname = $STR_igla_c;
		descriptionShort = "ПЗРК ИГЛА-С<br />Дальность стрельбы:100-5500м<br />Высота стрельбы: 50-3500м<br />Скорость цели для захвата: не более 400м/с";
		magazines[] = {"tu_rhs_mag_9k38m_rocket"};
		ACE_UsedTube = "tu_rhs_weap_iglas_used";
 	};
	class tu_rhs_weap_iglas_used : tu_rhs_weap_iglas {
		displayname = $STR_igla_used;
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
		magazines[] = {"ACE_FiredMissileDummy"};
	};
	class tu_rhs_weap_verba : tu_rhs_weap_igla { //Добавляем новый класс ПЗРК
		cmimmunity=0;
		lockAcquire = 0;
		displayname = $STR_verba;
		magazines[] = {"tu_rhs_mag_9k333_rocket"};
		ACE_UsedTube = "tu_rhs_weap_verba_used";
	};
	class tu_rhs_weap_verba_used : tu_rhs_weap_verba {
		displayname = $STR_verba_used;
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
		magazines[] = {"ACE_FiredMissileDummy"};
	};
	class missiles_titan_static;
	class rhs_weap_Igla_twice : missiles_titan_static {
		lockAcquire = 0;
	    cmimmunity=0;
	};
	class launch_O_Titan_F;
	class rhs_weap_fim92 : launch_O_Titan_F { // FIM-92 E обычный
		displayname = $STR_FIM92E;
		lockAcquire = 0;
		cmimmunity=0;
		weaponLockSystem=2;
		magazines[] = {"rhs_fim92_mag"};
		ACE_UsedTube = "tu_rhs_weap_fim92_used";
	};
	class tu_rhs_weap_fim92_used : rhs_weap_fim92 {
		displayname = $STR_FIM92_used;
		magazines[] = {"ACE_FiredMissileDummy"};
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
	};
	class tu_rhs_weap_fim92a : rhs_weap_fim92 { // FIM-92 A
		displayname = $STR_FIM92a;
		lockAcquire = 0;
		cmimmunity=0;
		weaponLockSystem=2;
		magazines[] = {"tu_rhs_fim92a_mag"};
		ACE_UsedTube = "tu_rhs_weap_fim92a_used";
	};
	class tu_rhs_weap_fim92a_used : tu_rhs_weap_fim92a {
		displayname = $STR_FIM92a_used;
		magazines[] = {"ACE_FiredMissileDummy"};
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
	};
	class tu_rhs_weap_fim92c : tu_rhs_weap_fim92a { // FIM-92 C
		displayname = $STR_FIM92c;
		lockAcquire = 0;
		cmimmunity=0;
		weaponLockSystem=2;
		magazines[] = {"tu_rhs_fim92c_mag"};
		ACE_UsedTube = "tu_rhs_weap_fim92c_used";
	};
	class tu_rhs_weap_fim92c_used : tu_rhs_weap_fim92c {
		displayname = $STR_FIM92c_used;
		magazines[] = {"ACE_FiredMissileDummy"};
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
	};
	class tu_rhs_weap_fim92f : tu_rhs_weap_fim92c { // FIM-92 F
		displayname = $STR_FIM92f;
		lockAcquire = 0;
		cmimmunity=0;
		weaponLockSystem=2;
		magazines[] = {"tu_rhs_fim92f_mag"};
		ACE_UsedTube = "tu_rhs_weap_fim92f_used";
	};
	class tu_rhs_weap_fim92f_used : tu_rhs_weap_fim92f {
		displayname = $STR_FIM92f_used;
		magazines[] = {"ACE_FiredMissileDummy"};
        ACE_isUsedLauncher = 1;
		scopearsenal = 1;
		weaponPoolAvailable = 0;
	};
};
	
class SensorTemplateIR;
class Components;

class CfgAmmo {	
	class MissileCore;
	class MissileBase: MissileCore {
		class Components;
	};	
	
	class rhs_ammo_Sidewinder_AA : MissileBase {
		airLock = 2;
	};
	
	class rhs_ammo_9k38;	// External class reference
	class tu_rhs_ammo_9k32 : rhs_ammo_9k38 {
		cmImmunity = 0.6; //Сопротивление ловушкам
		hit = 60; //Прямое попадание
	    indirectHit = 40; //Урон вокруг
	    indirectHitRange = 8; //Дистанция для кругового урона
	    maneuvrability = 13; //Маневренность ракеты
	    missileLockMaxDistance = 3400; //Высота поражаемых целей, максимум, м:
        missileLockMinDistance = 100;  //Высота поражаемых целей, минимум, м:
        missileLockMaxSpeed = 200; //Скорость захватываемой цели:
		initTime = 0.7; //время до старта двигателя ракеты
		trackLead = 0.8; //точность траектории полета ракеты за целью
		sideairfriction = 0.4; //чем больше значение, тем выше траектория отклонения
		trackoversteer = 0.6; //точность траектории для перехвата цели
		timeToLive = 22;  //время жизни ракеты
		maxspeed = 430; //Максимальная скорость, м/с
		thrust = 360; //мощность двигателя
		thrustTime = 1.2;	 //время работы двигателя на разгон	
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 220; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники), у нас отключаем.
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 220; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 50; //минимальная высота до цели
						maxTrackableATL = 1500; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
	};
	class tu_rhs_ammo_9k32M : tu_rhs_ammo_9k32 {
		cmImmunity = 0.7;
		hit = 65;
	    indirectHit = 45;
	    indirectHitRange = 8;
	    maneuvrability = 10;
	    missileLockMaxDistance = 4200; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 260;
		trackLead = 0.9;
		sideairfriction = 0.5; //чем больше значение, тем выше траектория отклонения
		trackoversteer = 0.75;
	    timeToLive = 24;
		maxspeed = 500; //Максимальная скорость, м/с
		thrust = 400;
		thrustTime = 1.5;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 260; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 260; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 50; //минимальная высота до цели
						maxTrackableATL = 2300; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};		
	};	

	class tu_rhs_ammo_9k38 : tu_rhs_ammo_9k32m {// ракета Игла
 		cmImmunity = 0.75;
  		hit = 70;
  		initTime = 0.5; //время до старта двигателя ракеты
     	indirectHit = 50;
     	indirectHitRange = 8;
     	maneuvrability = 14;
     	missileLockMaxDistance = 5000; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 360; 
  		trackLead = 1;
		sideairfriction = 0.7; //чем больше значение, тем выше траектория отклонения
  		trackoversteer = 0.75;
  	    timeToLive = 29;
  		maxSpeed = 570;//Максимальная скорость, м/с 
  		thrust = 450;
  		thrustTime = 1.5;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 400; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 400; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 10; //минимальная высота до цели
						maxTrackableATL = 3500; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
 	};
	
	class tu_rhs_ammo_9k38m : tu_rhs_ammo_9k38 {
		cmImmunity = 0.85;
		hit = 70;
	    indirectHit = 50;
	    indirectHitRange = 8;
	    maneuvrability = 14;
	    missileLockMaxDistance = 5500; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 400; //У нас не модификация C, где как раз стоит  400м/с
		trackLead = 1;
		sideairfriction = 0.8; //чем больше значение, тем выше траектория отклонения
		trackoversteer = 0.85;
		timeToLive = 29;
		maxSpeed = 570;//Максимальная скорость, м/с	
		thrust = 450;
		thrustTime = 1.5;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 400; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 400; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 10; //минимальная высота до цели
						maxTrackableATL = 3500; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
	};
	class tu_rhs_ammo_9k333 : rhs_ammo_9k38 { //Модификация ракеты Верба
		cmImmunity = 0.9;
		hit = 75;
		initTime = 0.5; //время до старта двигателя ракеты
	    indirectHit = 55;
	    indirectHitRange = 8;
	    maneuvrability = 14;
	    missileLockMaxDistance = 5500; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 400; 
		trackLead = 1;
		sideairfriction = 1; //чем больше значение, тем выше траектория отклонения
		trackoversteer = 0.95;
		timeToLive = 29;
		maxSpeed = 570;//Максимальная скорость, м/с	
		thrust = 450;
		thrustTime = 1.5;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 400; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 400; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 10; //минимальная высота до цели
						maxTrackableATL = 4500; //максимальная высота цели, при которой ее можно залочить
					};
					};
				};
			};
		};
	
	class M_Titan_AA: MissileBase {};	// External class reference
   class rhsammo_fim92_missile: M_Titan_AA {
		cmImmunity = 0.85;
		hit = 80;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 14;
		sideairfriction = 1; //чем больше значение, тем выше траектория отклонения (было 0.00007)
		missileLockMaxDistance = 6000; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 320; //Максимальная скорость захвата цели
		simulationStep = 0.002;
		trackOversteer = 0.85; //точность траектории для перехвата цели
		trackLead = 1; //точность траектории полета ракеты за целью
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 25;
		airFriction=0.145;
		maxSpeed = 700;
		initTime = 0.5; //время до старта двигателя ракеты
		thrustTime = 2.5;
		thrust = 400;
		fuseDistance = 50;
		whistleDist = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 320; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 320; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 1; //минимальная высота до цели
						maxTrackableATL = 3800; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
    };
	class tu_rhsammo_fim92A_missile: rhsammo_fim92_missile {
		cmImmunity = 0.6;
		hit = 70;
		indirectHit = 45;
		indirectHitRange = 8;
		maneuvrability = 14;
		sideairfriction = 0.5; //чем больше значение, тем выше траектория отклонения (было 0.00007)
		missileLockMaxDistance = 4750; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 320; //Максимальная скорость захвата цели
		simulationStep = 0.002;
		trackOversteer = 0.7; //точность траектории для перехвата цели
		trackLead = 1; //точность траектории полета ракеты за целью
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 20;
		airFriction=0.145;
		maxSpeed = 700;
		initTime = 0.5; //время до старта двигателя ракеты
		thrustTime = 2.5;
		thrust = 400;
		fuseDistance = 50;
		whistleDist = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 320; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 320; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 1; //минимальная высота до цели
						maxTrackableATL = 3800; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
    };
	class tu_rhsammo_fim92F_missile: rhsammo_fim92_missile { //модификация снаряда FIM-92E
		cmImmunity = 0.9; //Сопротивление ловушкам
		indirectHit = 50;
		hit = 80;
		indirectHitRange = 8;
		sideairfriction = 1; //чем больше значение, тем выше траектория отклонения
		missileLockMaxDistance = 6000; //максимальная дистанция полета ракеты(лока)
		missileLockMinDistance = 100; 
        missileLockMaxSpeed = 320;
		maneuvrability = 14;
		trackOversteer = 0.9; //точность траектории для перехвата цели
		trackLead = 1; //точность траектории полета ракеты за целью
		timeToLive = 25; //время жизни ракеты
		maxSpeed = 700; 
		thrustTime = 2.5; //время работы двигателя на разгон
		thrust = 400; //мощность двигателя
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 320; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 320; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 1; //минимальная высота до цели
						maxTrackableATL = 3800; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
	};
	class tu_rhsammo_fim92C_missile: rhsammo_fim92_missile { //модификация снаряда FIM-92C
		cmImmunity = 0.8;
		hit = 70;
		indirectHit = 45;
		indirectHitRange = 8;
		missileLockMaxDistance = 4750; //максимальная дистанция полета ракеты(лока)
		missileLockMinDistance = 100; 
        missileLockMaxSpeed = 320;
		sideairfriction = 0.6; //чем больше значение, тем выше траектория отклонения
		trackOversteer = 0.8; //точность траектории для перехвата цели
		trackLead = 1; //точность траектории полета ракеты за целью
		timeToLive = 20; //время жизни ракеты
		maxSpeed = 700; 
		thrustTime = 2.5; //время работы двигателя на разгон
		thrust = 400; //мощность двигателя
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 320; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 320; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 1; //минимальная высота до цели
						maxTrackableATL = 3800; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
	};

	class rhs_ammo_Stinger_AA: M_Titan_AA {
		cmImmunity = 0.85;
		hit = 80;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 14;
		missileLockMaxDistance = 6000; //максимальная дистанция полета ракеты(лока)
        missileLockMinDistance = 100; 
        missileLockMaxSpeed = 320; //Максимальная скорость захвата цели
		simulationStep = 0.002;
		sideairfriction = 1; //чем больше значение, тем выше траектория отклонения
		trackOversteer = 0.85; //точность траектории для перехвата цели
		trackLead = 1; //точность траектории полета ракеты за целью
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 25;
		airFriction=0.145;
		maxSpeed = 700;
		initTime = 0.5; //время до старта двигателя ракеты
		thrustTime = 2.5;
		thrust = 400;
		fuseDistance = 50;
		whistleDist = 16;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						
						maxTrackableSpeed = 320; //скорость цели, при которой можно залочить цель
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent"; 
  						typeRecognitionDistance = 0; //Максимальная дистанция, при которой будет распознана цель (расстояние, название техники)
  						maxFogSeeThrough = 0.995; 
  						color[] = {1, 0, 0, 1}; 
						allowsMarking = 1; 
						minSpeedThreshold = 0; 
						maxSpeedThreshold = 320; 
						animDirection = ""; 
						aimDown = 0; 
						minTrackableSpeed = 0; 
						minTrackableATL = 1; //минимальная высота до цели
						maxTrackableATL = 3800; //максимальная высота цели, при которой ее можно залочить
					};
				};
			};
		};
    };
	};
	