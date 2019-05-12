class CfgPatches {
	class rebalance_rhs_red {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_main","A3_Armor_F", "A3_Armor_F_Beta", "A3_armor_f_beta_APC_Tracked_02", "A3_Soft_F","rhs_c_weapons","rhs_c_a2port_armor","rhsgref_c_troops","rhsgref_c_a2port_armor", "rhssaf_c_weapons", "rhsgref_c_weapons", "rhs_weapon_sounds"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgAmmo {	// Патроны
	class B_30mm_AP;
	
	class rhs_ammo_30x165mm_base : B_30mm_AP {
		indirectHit = 5;
		indirectHitRange = 0.12;
	};
	
	class B_30mm_HE;	// External class reference
	
	class rhs_ammo_3uor6 : B_30mm_HE { // Старые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};
	
	class rhs_ammo_3uof8 : rhs_ammo_3uor6 { // Новые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};

	class B_35mm_AA;	// External class reference
	
	class RHS_ammo_23mm_AA : B_35mm_AA { // ЗУ
	    indirectHit = 6;
		indirectHitRange = 2.5;		
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime = 8;
	};

	class rhs_ammo_ofz_23x115mm : RHS_ammo_23mm_AA // ЗУ ОФЗ
	{
		indirectHit = 6;
		indirectHitRange = 2.5;		
	};
	
	class rhs_ammo_ofzt_23x115mm : rhs_ammo_ofz_23x115mm // ЗУ ОФЗТ
	{
		indirectHit = 6;
		indirectHitRange = 2;		
	};
	class B_762x51_Ball; // external
	class rhs_B_762x54_7N14_Ball : B_762x51_Ball // подвяжем норм калибр к СВД и зададим калибр для пробития ~10-15мм бронестали как и ИРЛ
	{
		caliber = 1;
	};
	
	class rhs_ammo_127x107mm; 
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm 
	{ 
		ACE_bulletMass = 64; 
		ACE_bulletLength = 158; 
		ACE_caliber = 14.5; 
		hit = 40
		indirectHit = 2; 
		indirectHitRange = 0.2; 
		caliber = 3.2; 
		tracerScale = 1.5; 
		tracerStartTime = 0.075; 
		tracerEndTime = 2.5; 
	};
	
	class BulletBase;
	
	class B_338_Ball:BulletBase 
	{
		hit=19
    };
};