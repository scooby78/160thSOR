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
class Box_NATO_Equip_F;
class Box_NATO_Uniforms_F;


/////////////////
//Static stores//
/////////////////
//PJ medical supply box//	


class SOR_PJ_Pack_Box_F_Nam : Box_NATO_Uniforms_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box Nam [PJ Pack Storage Static]";
	model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_large_F.p3d";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_PJMedicPack_Nam,7)
	};
};	

// Airborne Life Preservers (For missions with lost of flying outside glide distance from the coast)//


///////////////////////
//Hand Liftable Boxes//
///////////////////////

// Ammo Box	
class SOR_A_Box_F_Nam : Box_NATO_Ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box Nam [Ammo]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,40)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(100rnd_m60E3_tracer,6)	
	};
	class TransportBackpacks{};
};	

// Medical Box 
class SOR_M_Box_F_Nam : ACE_medicalSupplyCrate
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box Nam [Medical]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,40);
		item_xx(ACE_morphine,18);
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_Nam,1)
	};
};	




// Launchers	
class SOR_Launcher_Box_F_Nam : Box_NATO_WpsLaunch_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box Nam [Launcher AT]";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_m72a7,6)
	};	
	class TransportMagazines{};
	class TransportBackpacks{};
};	


//Special weapons boxes//
	




///////////////////////////
// Sling loadable Crates //
///////////////////////////

// Ammo Crate	
class SOR_A_Crate_F_Nam : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate Nam [Ammo]";
	icon = "iconCrateAmmo";
	ace_dragging_canDrag = 1;	
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_m72a7,16)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
		mag_xx(100rnd_m60E3_tracer,32)	
		mag_xx(1Rnd_HE_Grenade_shell,20)			
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks{};
};

// All in one Crate		
class SOR_AM_Crate_F_Nam : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate Nam [Ammo&Med]";
	icon = "iconCrateAmmo";
	ace_dragging_canDrag = 1;	
	class TransportItems
	{
		item_xx(ACE_CableTie,10)
		item_xx(ACE_FieldDressing,200);
		item_xx(ACE_morphine,100);
	};		
	class TransportWeapons
	{
		weap_xx(rhs_weap_m72a7,8)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
		mag_xx(100rnd_m60E3_tracer,32)	
		mag_xx(1Rnd_HE_Grenade_shell,20)
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_Nam,6)
	};
};




