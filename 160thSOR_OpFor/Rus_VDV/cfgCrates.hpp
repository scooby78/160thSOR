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
class B_CargoNet_01_ammo_F;
	
/////////////////
//Static stores//
/////////////////

//PJ medical supply box//	
class SOR_OpFor_PJ_Box_F : Land_MetalCase_01_large_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box PJ Medical (Static)";
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

//PJ Backpack supply box//	
class SOR_OpFor_PJ_Pack_Box_F : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box PJ Pack Storage (Static)";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_PJMedicPack_VDV,7)};
};	
	
// Airborne Life Preservers (For missions with lost of flying outside glide distance from the coast)//
class SOR_OpFor_Air_LP : Land_PlasticCase_01_medium_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box Airborne Life Preservers (Static)";
	class TransportItems {item_xx(V_RebreatherIR,15)};	
};	

// Dive Gear	
class SOR_OpFor_divegear : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Dive Gear]";
	class TransportItems
	{
		item_xx(G_O_Diving,20)
		item_xx(U_O_Wetsuit,20)
		item_xx(V_RebreatherIR,20)	
	};	
};

///////////////////////
//Hand Liftable Boxes//
///////////////////////

// Ammo Box	
class SOR_OpFor_A_Box_F : Box_NATO_Ammo_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Ammo]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,40)
		mag_xx(rhs_mag_9x18_12_57N181S,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,6)	
	};
	class TransportBackpacks{};
};	
	
// Medical Box 
class SOR_OpFor_M_Box_F : ACE_medicalSupplyCrate
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Medical]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,40);
		item_xx(ACE_morphine,18);
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_Medic_Pack_VDV,1)};
};	
	
// Explosives Box	
class SOR_OpFor_E_Box_F : Box_NATO_AmmoOrd_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
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
class SOR_OpFor_G_Box_F : Box_NATO_Grenades_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Grenades]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(rhs_VOG25,20)
		mag_xx(rhs_GRD40_White,10)			
		mag_xx(rhs_GRD40_Red,10)			
		mag_xx(rhs_mag_mk3a2,20)
		mag_xx(rhs_mag_rdg2_white,20)
		mag_xx(rhs_mag_rdg2_black,20)			
	};
	class TransportBackpacks{};
};	
	
// Support Equipment Box	
class SOR_OpFor_S_Box_F : Box_NATO_Support_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Equipment]";
	class TransportItems
	{
		item_xx(ACE_CableTie,10)
		item_xx(ACE_EarPlugs,10)
		item_xx(ACE_Flashlight_MX991,10)
		item_xx(ACE_Kestrel4500,3)
		item_xx(ACE_RangeCard,3)
		item_xx(rhs_acc_tgpa,10)
		item_xx(Laserdesignator,3)
		item_xx(Laserbatteries,6)
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	

// Heavy weapons Box	
class SOR_OpFor_HW_Box_F : Box_NATO_WpsSpecial_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyBoxes";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OPFor_Faction_CRATE;
	displayName = "Box [Heavy Weapons]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(RHS_DShkM_TripodLow_Bag,1)
		pack_xx(RHS_DShkM_TripodHigh_Bag,1)
		pack_xx(RHS_DShkM_Gun_Bag,1)
		pack_xx(RHS_Podnos_Gun_Bag,1)
		pack_xx(RHS_Podnos_Bipod_Bag,1)		
	};
};	

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// Ammo Crate		
class SOR_OpFor_A_Crate_F : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyCrates";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Crate [Ammo]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons {weap_xx(rhs_weap_rpg26,4)};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,100)
		mag_xx(rhs_mag_9x18_12_57N181S,40)
		mag_xx(rhs_100Rnd_762x54mmR_green,16)	
		mag_xx(rhs_VOG25,10)
		mag_xx(rhs_GRD40_White,10)			
		mag_xx(rhs_GRD40_Red,10)	
		mag_xx(rhs_mag_mk3a2,20)
		mag_xx(rhs_mag_rdg2_white,20)
		mag_xx(rhs_mag_rdg2_black,20)
	};
	class TransportBackpacks{};
};

// All in one Crate		
class SOR_OpFor_AM_Crate_F : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyCrates";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Crate [Ammo&Med]";
	icon = "iconCrateAmmo";
	class TransportItems
	{
		item_xx(ACE_CableTie,5)
		item_xx(ACE_FieldDressing,90);
		item_xx(ACE_morphine,50);
	};		
	class TransportWeapons {weap_xx(rhs_weap_rpg26,4)};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,80)
		mag_xx(rhs_mag_9x18_12_57N181S,40)
		mag_xx(rhs_100Rnd_762x54mmR_green,16)	
		mag_xx(rhs_VOG25,10)
		mag_xx(rhs_GRD40_White,10)			
		mag_xx(rhs_GRD40_Red,10)	
		mag_xx(rhs_mag_mk3a2,20)
		mag_xx(rhs_mag_rdg2_white,20)
		mag_xx(rhs_mag_rdg2_black,20)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Medic_Pack_VDV,3)};
};
	
// M2 and Mortar Crate	
class SOR_OpFor_HMG_Crate_F : B_supplyCrate_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyCrates";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Crate [HMG/Mortar]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(RHS_DShkM_TripodLow_Bag,2)
		pack_xx(RHS_DShkM_TripodHigh_Bag,2)
		pack_xx(RHS_DShkM_Gun_Bag,3)
		pack_xx(RHS_Podnos_Gun_Bag,3)
		pack_xx(RHS_Podnos_Bipod_Bag,2)			
	};
};
	
// Mortar Crate	//// To be phased out?????
class SOR_OpFor_MOR_Crate_F : B_supplyCrate_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyCrates";
	vehicleClass = "SOR_OpFor_SupplyBoxes";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Crate [MORTAR]";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(RHS_Podnos_Gun_Bag,2)
		pack_xx(RHS_Podnos_Bipod_Bag,2)
	};
};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	

// All in one pod	
class SOR_OpFor_Taru_Pod_ammo : Land_Pod_Heli_Transport_04_ammo_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Taru Pod [Ammo]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,80)
		mag_xx(rhs_mag_9x18_12_57N181S,40)
		mag_xx(rhs_100Rnd_762x54mmR_green,16)	
		mag_xx(rhs_VOG25,10)
		mag_xx(rhs_mag_M441_HE,10)
		mag_xx(rhs_GRD40_White,10)			
		mag_xx(rhs_GRD40_Red,10)	
		mag_xx(rhs_mag_mk3a2,20)
		mag_xx(rhs_mag_rdg2_white,20)
		mag_xx(rhs_mag_rdg2_black,20)
	};
	class TransportBackpacks{};
};
	
// Medical pod	
class SOR_OpFor_Taru_Pod_medevac : Land_Pod_Heli_Transport_04_medevac_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Taru Pod [Medical CCP]";
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
		mag_xx(rhs_30Rnd_545x39_AK_green,5)
		mag_xx(rhs_mag_9x18_12_57N181S,5)
		mag_xx(rhs_mag_mk3a2,10)
		mag_xx(rhs_mag_rdg2_white,10)
		mag_xx(rhs_mag_rdg2_black,10)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_OPFor_Medic_Pack_VDV,3)
		pack_xx(SOR_OpFor_PJMedicPack_D,3)
	};
};

// Troop transport bench pod	
class SOR_OpFor_Taru_Pod_bench : Land_Pod_Heli_Transport_04_bench_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Taru Pod [Bench P8]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

// Covered troop transport pod		
class SOR_OpFor_Taru_Pod_covered : Land_Pod_Heli_Transport_04_covered_F
{
	editorCategory = "SOR_OPFor_Cat_Supplies";
	editorSubcategory = "SOR_OPFor_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_OpFor_Faction_CRATE;
	displayName = "Taru Pod [Covered P16]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	
	