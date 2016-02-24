/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/

	class RHS_M2A3_BUSKIII;
	class rhsusf_m113d_usarmy;
	class rhsusf_m113d_usarmy_medical;
	class rhsusf_m113d_usarmy_supply;
	class rhsusf_m113d_usarmy_unarmed;
	class rhsusf_m1a2sep1tuskid_usarmy;
	class rhsusf_m1a2sep1tuskiid_usarmy;
	class rhsusf_m1a1aim_tuski_d;
	class B_SDV_01_F;
	class rhsusf_m1025_d_s;
	class rhsusf_m1025_d;
	class rhsusf_m1025_d_Mk19;
	class rhsusf_m1025_d_m2;
	class B_APC_Tracked_01_rcws_F;
	class rhsusf_M1083A1P2_d_fmtv_usarmy;
	class RHS_M6;


//M6A2	
class SOR_RHS_M6 : RHS_M6
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 300 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//M2A3 (BUSK III)	
class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 325 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};

//M113A3	
class SOR_rhsusf_m113d_usarmy : rhsusf_m113d_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//M113A3 (Supply)	
class SOR_rhsusf_m113d_usarmy_supply : rhsusf_m113d_usarmy_supply
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};

//M113A3 (Unarmed)	
class SOR_rhsusf_m113d_usarmy_unarmed : rhsusf_m113d_usarmy_unarmed
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//M113A3 (Medical)
class SOR_rhsusf_m113d_usarmy_medical : rhsusf_m113d_usarmy_medical
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_Fielddressing,24)
			item_xx(ACE_morphine,16)
			item_xx(ACE_epinephrine,16)
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};	

//M1A1 (Tusk I)
class SOR_rhsusf_m1a1aim_tuski_d : rhsusf_m1a1aim_tuski_d
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 700; //was 600 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};		

//M1A2 (Tusk I)
class SOR_rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2sep1tuskid_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 700; //was 600 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};	

//M1A2 (Tusk II)
class SOR_rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiid_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 800; //was 600 protection against missiles, collisions and explosions
		class TransportItems
		{
			item_xx(ACE_FieldDressing,20);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//Sub	
class SOR_B_SDV_01_F : B_SDV_01_F
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";		
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
class SOR_rhsusf_M1083A1P2_d_fmtv_usarmy : rhsusf_M1083A1P2_d_fmtv_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1083";		
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
//Engineer transport
class SOR_rhsusf_m1025_d_s : rhsusf_m1025_d_s
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1025 (Engineer)";		
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip,4)
			weap_xx(rhs_weap_M136_hp,2)
		};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
			pack_xx(SOR_CombatPack_D,4)
			pack_xx(SOR_OrdanancePack_D,1)	
			pack_xx(B_Mortar_01_weapon_F,1)	
			pack_xx(B_Mortar_01_support_F,1)				
		};
	};

//Engineer transport truck	
class SOR_rhsusf_M1083A1P2_d_fmtv_usarmy_eng : rhsusf_M1083A1P2_d_fmtv_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1083 (Engineer)";		
		class TransportItems
		{
			item_xx(ToolKit,1)			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip,4)
		};
		class TransportMagazines
		{
			mag_xx(rhs_200rnd_556x45_M_SAW,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_CombatPack_D,4)
			pack_xx(SOR_OrdanancePack_D,1)	
			pack_xx(SOR_Eng_Repair_Pack_D,1)	
		};
	};	
	
//Engineer armored transport
class SOR_B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		class TransportItems
		{
			item_xx(ToolKit,1)			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip,4)
			weap_xx(rhs_weap_M136_hp,2)			
		};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_CombatPack_D,4)
			pack_xx(SOR_OrdanancePack_D,2)		
		};
	};	
	
//Troop transport
class SOR_rhsusf_m1025_d : rhsusf_m1025_d
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1025 (Unarmed)";		
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//Troop armed transport GL
class SOR_rhsusf_m1025_d_Mk19 : rhsusf_m1025_d_Mk19
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1025 (Mk19)";			
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
//Troop armed transport MG
class SOR_rhsusf_m1025_d_m2 : rhsusf_m1025_d_m2
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		displayName = "M1025 (M2)";			
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};	
	