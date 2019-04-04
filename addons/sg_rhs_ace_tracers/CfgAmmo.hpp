
class CfgAmmo {
    class BulletBase;
    class ShellBase;
    class SubmunitionBullet;
	class SubmunitionBase;
	
    //Heavy MG
    class rhs_ammo_127x107mm; // ДШК
    class rhs_ammo_145x115mm: rhs_ammo_127x107mm {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 14.5 как у РХС и даем модельку
	class rhs_ammo_127x108mm: rhs_ammo_127x107mm {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	
	class B_30mm_HE; // External
	class rhs_ammo_3uor6: B_30mm_HE {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 30 как у РХС и даем модельку
	class rhs_ammo_3uof8: rhs_ammo_3uor6 {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 30 как у РХС и даем модельку
	
	class rhs_ammo_30x165mm_base; // External
	class rhs_ammo_3ubr6: rhs_ammo_30x165mm_base {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 30 как у РХС и даем модельку
	class rhs_ammo_3ubr8: rhs_ammo_3ubr6 {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 30 как у РХС и даем модельку
	class rhs_ammo_3ubr11: rhs_ammo_3ubr8 {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 30 как у РХС и даем модельку
	
	class B_127x99_Ball; // M2
	class rhs_ammo_127x99_Ball: B_127x99_Ball {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball {model = PATHTOF(sg_TracerGreen2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball_Tracer_Green {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball_Tracer_Red {model = PATHTOF(sg_TracerYellow2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	
	class rhs_ammo_127x108mm_x5;
	class rhs_ammo_127x108mm_1SLT: rhs_ammo_127x108mm_x5 {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x108mm_1SLT_x5: rhs_ammo_127x108mm_x5 {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	
	class B_127x99_SLAP;
	class rhs_ammo_127x99_SLAP: B_127x99_SLAP {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP_Tracer_Green {model = PATHTOF(sg_TracerGreen2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP_Tracer_Red {model = PATHTOF(sg_TracerRed2.p3d);}; // Подвязываем 12.7 как у РХС и даем модельку
	
	class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase {model = PATHTOF(ace_TracerRed2.p3d);};
	
	class B_35mm_AA;
	class RHS_ammo_23mm_AA: B_35mm_AA {model = PATHTOF(ace_TracerRed2.p3d);}; // Подвязываем 23 как у РХС и даем модельку
};
