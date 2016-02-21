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
	class Gunrack1;
	class Box_NATO_Wps_F;

	
/////////////////
//Static stores//
/////////////////
//Special Gun Rack//
	class SOR_Gunrack1 : Gunrack1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gun Rack [Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons
		{
			weap_xx(160_rhs_weap_sr25,6)		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	
//PJ medical supply box//	
		class SOR_PJ_Box_F : Land_MetalCase_01_large_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box PJ Medical[Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_FieldDressing,40);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);			
			item_xx(ACE_bloodIV_500,10);				
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_PJMedicPack_D,3)
		};
	};
	
// Airborne Life Preservers (For missions with lost of flying outside glide distance from the coast)//
	class SOR_Air_LP : Land_PlasticCase_01_medium_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Airborne Life Preservers][Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Ammo]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,40)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
			mag_xx(rhsusf_mag_7x45acp_MHP,10)
			mag_xx(rhs_200rnd_556x45_M_SAW,3)	
			mag_xx(rhsusf_100Rnd_762x51,3)
		};
		class TransportBackpacks{};
	};	
	
// Medical Box 
	class SOR_M_Box_F : ACE_medicalSupplyCrate
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Medical]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Explosives]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Grenades]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;		
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(rhs_mag_M433_HEDP,20)
			mag_xx(rhs_mag_m714_White,10)			
			mag_xx(rhs_mag_m713_Red,10)			
			mag_xx(MAAWS_HEAT,4)
			mag_xx(MAAWS_HEDP,4)
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)			
		};
		class TransportBackpacks{};
	};	
	
	
// Support Equipment Box	
	class SOR_S_Box_F : Box_NATO_Support_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Equipment]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	

// Dive Gear	
	class SOR_divegear : Land_PlasticCase_01_large_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Dive Gear]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;		
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Box [Heavy Weapons]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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

//Special weapons boxes//
	class SOR_Box_NATO_WpsSpecial_F : Box_NATO_Wps_F
	{
		vehicleClass = "SOR_SupplyBoxes";
		displayName = "Recon Resupply [Ammo&Equipment]";
		faction = SOR_Faction_CRATE;
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
		vehicleClass = "SOR_SupplyBoxes";
		displayName = "Recon Training [Ammo&Equipment]";
		faction = SOR_Faction_CRATE;
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
	class SOR_A_Crate_F : B_supplyCrate_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Crate [Ammo]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,100)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(rhs_200rnd_556x45_M_SAW,8)	
			mag_xx(rhsusf_100Rnd_762x51,8)		
			mag_xx(rhs_mag_M433_HEDP,10)
			mag_xx(rhs_mag_m714_White,10)			
			mag_xx(rhs_mag_m713_Red,10)	
			mag_xx(MAAWS_HEAT,8)
			mag_xx(MAAWS_HEDP,8)			
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks{};
	};
	
// All in one Crate		
	class SOR_AM_Crate_F : B_supplyCrate_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Crate [Ammo&Med]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems
		{
			item_xx(ACE_CableTie,5)
			item_xx(ACE_FieldDressing,90);
			item_xx(ACE_morphine,50);
		};		
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,80)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(rhs_200rnd_556x45_M_SAW,8)	
			mag_xx(rhsusf_100Rnd_762x51,8)		
			mag_xx(rhs_mag_M433_HEDP,10)
			mag_xx(rhs_mag_m714_White,10)			
			mag_xx(rhs_mag_m713_Red,10)	
			mag_xx(MAAWS_HEAT,5)
			mag_xx(MAAWS_HEDP,5)			
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D,3)
		};
	};
	
// M2 and Mortar Crate	
	class SOR_HMG_Crate_F : B_supplyCrate_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Crate [M2/Mortar]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Crate [MORTAR]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
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
	class SOR_Land_Pod_Heli_Transport_04_ammo_F : Land_Pod_Heli_Transport_04_ammo_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Taru Pod [Ammo]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,80)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(rhs_200rnd_556x45_M_SAW,8)	
			mag_xx(rhsusf_100Rnd_762x51,8)		
			mag_xx(rhs_mag_M433_HEDP,10)
			mag_xx(rhs_mag_m714_White,10)			
			mag_xx(rhs_mag_m713_Red,10)	
			mag_xx(MAAWS_HEAT,5)
			mag_xx(MAAWS_HEDP,5)			
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks{};
	};
	
// Medical pod	
	class SOR_Land_Pod_Heli_Transport_04_medevac_F : Land_Pod_Heli_Transport_04_medevac_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Taru Pod [Medical CCP]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_FieldDressing,40);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);			
			item_xx(ACE_bloodIV_500,10);
		};		
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,5)
			mag_xx(rhs_mag_m67,10)
			mag_xx(rhs_mag_an_m8hc,10)
			mag_xx(rhs_mag_m18_green,10)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D,3)
			pack_xx(SOR_PJMedicPack_D,3)
		};
	};

// Troop transport bench pod	
	class SOR_Land_Pod_Heli_Transport_04_bench_F : Land_Pod_Heli_Transport_04_bench_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Taru Pod [Bench P8]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

// Covered troop transport pod		
	class SOR_Land_Pod_Heli_Transport_04_covered_F : Land_Pod_Heli_Transport_04_covered_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Taru Pod [Covered P16]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	