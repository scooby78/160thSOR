/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/
class rhs_typhoon_vdv;
class RHS_BM21_VDV_01;
class rhs_btr60_vdv;
class rhs_btr70_vdv;
class rhs_btr80_vdv;
class rhs_btr80a_vdv;
class rhs_bmp2e_vdv;
class rhs_bmd4ma_vdv;
class rhs_prp3_vdv;
class rhs_sprut_vdv;
class rhs_t90a_tv;
class rhs_t80um;
class rhs_2s3_tv;
class rhs_gaz66_ammo_vdv;
class rhs_gaz66_ap2_vdv;
class RHS_Ural_Fuel_VDV_01;
class rhs_tigr_vdv;
class rhs_tigr_m_vdv;
class rhs_tigr_sts_vdv;
class RHS_Ural_VDV_01;
class B_SDV_01_F;


//////////////////////
//Artillery Vehicles//
//////////////////////
class SOR_OpFor_rhs_typhoon_vdv : rhs_typhoon_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_RHS_BM21_VDV_01 : RHS_BM21_VDV_01
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

/////////////////////
//Armoured Vehicles//
/////////////////////

// BTR-60
class SOR_OpFor_rhs_btr60_vdv : rhs_btr60_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

// BTR-70
class SOR_OpFor_rhs_btr70_vdv: rhs_btr70_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

// BTR-80
class SOR_OpFor_rhs_btr80_vdv: rhs_btr80_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

// BTR-80 (A)
class SOR_OpFor_rhs_btr80a_vdv: rhs_btr80a_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

//BMP-2 (E)	
class SOR_OpFor_rhs_bmp2e_vdv : rhs_bmp2e_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//BMD-4M (A)	
class SOR_OpFor_rhs_bmd4ma_vdv : rhs_bmd4ma_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

//PRP-3	
class SOR_OpFor_rhs_prp3_vdv : rhs_prp3_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//S225	
class SOR_OpFor_rhs_sprut_vdv : rhs_sprut_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//T90A (obr. 2006g.)
class SOR_OpFor_rhs_t90a_tv : rhs_t90a_tv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//T-80UM
class SOR_OpFor_rhs_t80um : rhs_t80um
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

//2S3M1
class SOR_OpFor_rhs_2s3_tv : rhs_2s3_tv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,10)
		mag_xx(rhs_100Rnd_762x54mmR_green,8)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

////////////////////
//Support Vehicles//
////////////////////

//GAZ-66 (Engineer / Ammo)
class SOR_OpFor_rhs_gaz66_ammo_vdv : rhs_gaz66_ammo_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "GAZ-66 (Engineer / Ammo)";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_ak74m_folded_dtk,4)
		weap_xx(rhs_weap_rpg26,2)
	};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_OPFor_Repair_Pack_VDV,1)
		pack_xx(SOR_CombatPack_D,4)
		pack_xx(SOR_OrdanancePack_D,1)	
		pack_xx(RHS_Podnos_Gun_Bag,1)	
		pack_xx(RHS_Podnos_Bipod_Bag,1)				
	};
};

// Ural-4320 (Engineer / Fuel)
class SOR_OpFor_rhs_Ural_Fuel_VDV_01: RHS_Ural_Fuel_VDV_01
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "Ural-4320 (Engineer / Fuel)";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,20)};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_545x39_AK_green,20)
		mag_xx(rhs_100Rnd_762x54mmR_green,4)
		mag_xx(rhsusf_100Rnd_762x51,4)
	};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//GAZ-66-AP-2 (Medical)
class SOR_OpFor_rhs_gaz66_ap2_vdv : rhs_gaz66_ap2_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "GAZ-66-AP-2 (Medical)";
//		armor = 500;
	crew = "SOR_OPFor_MechDriver_VDV_AI"; 
	class TransportItems 
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_rpg26,2)
		weap_xx(rhs_weap_ak74m_folded_dtk,2)
	};
	class TransportMagazines {mag_xx(rhs_30Rnd_545x39_AK_green,6)};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};	
	
//Sub	
class SOR_OpFor_B_SDV_01_F : B_SDV_01_F
{
	side = OPFOR;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	crew = "SOR_OPFor_Rifleman_VDV_AI";
	class TransportItems
	{
		item_xx(G_Diving,3)
		item_xx(U_B_Wetsuit,3)
		item_xx(V_RebreatherB,3)
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};	
	
//Troop transport
class SOR_OpFor_rhs_Ural_VDV_01 : RHS_Ural_VDV_01
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "Ural (Troop)";
	crew = "SOR_OPFor_Rifleman_VDV_AI";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//Engineer transport truck	
class SOR_OpFor_rhs_Ural_VDV_01_eng : RHS_Ural_VDV_01
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "Ural (Engineer)";
	crew = "SOR_OPFor_Rifleman_VDV_AI";	
	class TransportItems
	{
		item_xx(ToolKit,1)			
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_ak74m_folded_dtk,4)
	};
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2)
		mag_xx(rhsusf_100Rnd_762x51,2)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_CombatPack_D,4)
		pack_xx(SOR_OrdanancePack_D,1)	
		pack_xx(SOR_Eng_Repair_Pack_D,1)	
	};
};	
	
//Troop unarmed transport
class SOR_OpFor_rhs_tigr_vdv : rhs_tigr_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "GAZ (Unarmed)";
	crew = "SOR_OPFor_Rifleman_VDV_AI";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//Troop armed transport
class SOR_OpFor_rhs_tigr_m_vdv : rhs_tigr_m_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "GAZ";
	crew = "SOR_OPFor_Rifleman_VDV_AI";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	
//Troop armed transport MG
class SOR_OpFor_rhs_tigr_sts_vdv : rhs_tigr_sts_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
//	editorSubcategory = "SOR_OPFor_SubCat_Vehicles";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Vehicles";
	displayName = "GAZ (HMG/GL)";
	crew = "SOR_OPFor_Rifleman_VDV_AI";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};
	