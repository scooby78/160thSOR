/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/09/15 02:05
	Description: cfgCrates.hpp
*/

class ACE_medicalSupplyCrate;
class Box_NATO_Ammo_F;
class Box_NATO_AmmoOrd_F;
class Box_NATO_Grenades_F;
class B_supplyCrate_F;
class Box_NATO_Support_F;	
class Land_MetalCase_01_large_F;
class Land_PlasticCase_01_large_F;
class Land_PlasticCase_01_medium_F;
class Land_Pod_Heli_Transport_04_ammo_F;
class Land_Pod_Heli_Transport_04_fuel_F;
class Land_Pod_Heli_Transport_04_repair_F;
class Land_Pod_Heli_Transport_04_bench_F;
class Land_Pod_Heli_Transport_04_covered_F;
class Land_Pod_Heli_Transport_04_box_F;
class Land_Pod_Heli_Transport_04_medevac_F;
class Box_NATO_WpsSpecial_F;
class Box_NATO_Wps_F;
class Box_NATO_WpsLaunch_F;
class B_CargoNet_01_ammo_F;

/////////////////
//Static stores//
/////////////////
//PJ medical supply box//	
class SOR_PJ_Box_F : Land_MetalCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;			
	displayName = "Box PJ Medical[Static]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,40);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);			
		item_xx(ACE_bloodIV_500,10);				
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

class SOR_PJ_Pack_Box_F : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box PJ Pack Storage [Static]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_PJMedicPack_D,7)
	};
};	

// Airborne Life Preservers (For missions with lost of flying outside glide distance from the coast)//
class SOR_Air_LP : Land_PlasticCase_01_medium_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;			
	displayName = "Box [Airborne Life Preservers][Static]";
	class TransportItems
	{
		item_xx(V_RebreatherB,15)
	};	
};	

///////////////////////
//Hand Liftable Boxes//
///////////////////////

// Ammo Box	
class SOR_A_Box_F : Box_NATO_Ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Ammo]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,40)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,3)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,3)
	};
	class TransportBackpacks{};
};	

// Medical Box 
class SOR_M_Box_F : ACE_medicalSupplyCrate
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Medical]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,40);
		item_xx(ACE_morphine,18);
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_D,1)
	};
};	

// Explosives Box	
class SOR_E_Box_F : Box_NATO_AmmoOrd_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Explosives]";
	class TransportItems
	{
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_M26_Clacker,1);
		item_xx(ACE_Clacker,1);
	};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(SatchelCharge_Remote_Mag,2)
		mag_xx(APERSTripMine_Wire_Mag,4)
		mag_xx(ATMine_Range_Mag,4)			
		mag_xx(SLAMDirectionalMine_Wire_Mag,4)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)
	};
	class TransportBackpacks{};
};

// Grenades Box	
class SOR_G_Box_F : Box_NATO_Grenades_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Grenades]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,10)
		mag_xx(1Rnd_Smoke_Grenade_shell,10)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,10)			
		mag_xx(rhs_mag_m67,20)
		mag_xx(rhs_mag_an_m8hc,20)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,20)			
	};
	class TransportBackpacks{};
};	


// Support Equipment Box	
class SOR_S_Box_F : Box_NATO_Support_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Equipment]";
	class TransportItems
	{
		item_xx(ACE_CableTie,10)
		item_xx(Toolkit,2)
		item_xx(ACE_EarPlugs,10)
		item_xx(ACE_Flashlight_XL50,20)
		item_xx(ACE_Flashlight_MX991,20)
		item_xx(ACE_Flashlight_KSF1,20)
		item_xx(ACE_Kestrel4500,3)
		item_xx(ACE_RangeCard,3)
		item_xx(rhsusf_acc_nt4_black,20)
		item_xx(muzzle_snds_acp,20)
		item_xx(Laserdesignator,3)
		item_xx(Laserbatteries,6)
		item_xx(ACE_EntrenchingTool,6)
		item_xx(ACE_SpraypaintRed,10)
		item_xx(ACE_SpraypaintGreen,10)
		item_xx(ACE_SpraypaintBlue,10)			
		item_xx(ACE_SpraypaintBlack,10)				
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	

// Dive Gear	
class SOR_divegear : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Dive Gear]";
	class TransportItems
	{
		item_xx(G_Diving,20)
		item_xx(U_B_Wetsuit,20)
		item_xx(V_RebreatherB,20)	
	};	
};

// Heavy weapons Box	
class SOR_HW_Box_F : Box_NATO_WpsSpecial_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [Heavy Weapons]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(RHS_M2_MiniTripod_Bag,1)
		pack_xx(RHS_M2_Tripod_Bag,1)
		pack_xx(RHS_M2_Gun_Bag,1)
		pack_xx(B_Mortar_01_weapon_F,1)
		pack_xx(B_Mortar_01_support_F,1)		
	};
};	

// Launchers	
class SOR_Launcher_Box_F : Box_NATO_WpsLaunch_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box [AT Launchers]";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,6)
	};	
	class TransportMagazines{};
	class TransportBackpacks{};
};	

//Special weapons boxes//
class SOR_Box_NATO_WpsSpecial_F : Box_NATO_Wps_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Recon Resupply [Ammo&Equipment]";
	class TransportItems
	{
		item_xx(rhsusf_acc_ACOG3,6);
		item_xx(rhsusf_acc_eotech_552,6);			
	};	
	class TransportWeapons
	{
		weap_xx(lerca_1200_black,6)			
	};
	class TransportMagazines
	{
		mag_xx(rhsusf_20Rnd_762x51_m118_special_Mag,10)
		mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,20)	
		mag_xx(Laserbatteries,4)
	};
	class TransportBackpacks{};
};		

class SOR_Box_NATO_WpsSpecial_F_Training : Box_NATO_Wps_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Recon Training [Ammo&Equipment]";
	class TransportItems
	{
		item_xx(rhsusf_acc_SR25S,6);
		item_xx(rhsusf_acc_ELCAN,12);
		item_xx(rhsusf_acc_anpeq15side,12);
		item_xx(rhsusf_acc_nt4_black,12);
		item_xx(rhsusf_acc_harris_bipod,12);
	};	
	class TransportWeapons
	{
		weap_xx(160_rhs_weap_m16a4_carryhandle_grip_pmag_1,6)
		weap_xx(160_rhs_weap_m4a1_carryhandle_grip2_1,6)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,24)			
	};
	class TransportBackpacks{};
};		

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// Ammo Crate		
class SOR_A_Crate_F : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [Ammo]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,4)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,100)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,8)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,8)		
		mag_xx(1Rnd_HE_Grenade_shell,10)			
		mag_xx(1Rnd_Smoke_Grenade_shell,10)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
		mag_xx(rhs_mag_m67,20)
		mag_xx(rhs_mag_an_m8hc,20)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,20)
	};
	class TransportBackpacks{};
};

// All in one Crate		
class SOR_AM_Crate_F : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [Ammo&Med]";
	icon = "iconCrateAmmo";
	class TransportItems
	{
		item_xx(ACE_CableTie,5)
		item_xx(ACE_FieldDressing,90);
		item_xx(ACE_morphine,50);
	};		
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,4)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,80)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,8)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,8)		
		mag_xx(1Rnd_HE_Grenade_shell,10)
		mag_xx(1Rnd_Smoke_Grenade_shell,10)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
		mag_xx(rhs_mag_m67,20)
		mag_xx(rhs_mag_an_m8hc,20)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,20)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_D,3)
	};
};

// M2 and Mortar Crate	
class SOR_HMG_Crate_F : B_supplyCrate_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [M2/Mortar]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(RHS_M2_MiniTripod_Bag,2)
		pack_xx(RHS_M2_Tripod_Bag,2)
		pack_xx(RHS_M2_Gun_Bag,3)
		pack_xx(B_Mortar_01_weapon_F,3)
		pack_xx(B_Mortar_01_support_F,2)			
	};
};

// Mortar Crate	//// To be phased out?????
class SOR_MOR_Crate_F : B_supplyCrate_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [MORTAR]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(B_Mortar_01_weapon_F,2)
		pack_xx(B_Mortar_01_support_F,2)
	};
};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	

// All in one pod	
class SOR_Taru_Pod_ammo_black : Land_Pod_Heli_Transport_04_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Ammo]";
	side=1;	
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,12)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,16)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,16)		
		mag_xx(1Rnd_HE_Grenade_shell,40)			
		mag_xx(1Rnd_Smoke_Grenade_shell,40)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,40)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks{};
};

// Medical pod	
class SOR_Taru_Pod_medevac_Black : Land_Pod_Heli_Transport_04_medevac_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Medical CCP]";
	side=1;	
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,60);
		item_xx(ACE_morphine,30);
		item_xx(ACE_epinephrine,30);			
		item_xx(ACE_bloodIV_500,30);
	};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhs_mag_an_m8hc,10)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,3)
		pack_xx(SOR_PJMedicPack_W,3)
	};
};

// Troop transport bench pod	
class SOR_Taru_Pod_bench_Black : Land_Pod_Heli_Transport_04_bench_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Bench P8]";
	side=1;	
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

// Covered troop transport pod		
class SOR_Taru_Pod_covered_Black : Land_Pod_Heli_Transport_04_covered_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Covered P16]";
	side=1;	
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	

// Fuel pod		
class SOR_Taru_Pod_fuel_Black: Land_Pod_Heli_Transport_04_fuel_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Fuel]";
	hiddenSelections[]=
	{
		"Camo_1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
	};
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

// Repair pod	
class SOR_Taru_Pod_repair_Black: Land_Pod_Heli_Transport_04_repair_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Repair]";
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};