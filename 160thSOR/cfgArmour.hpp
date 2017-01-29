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
class rhsusf_m1a2sep1d_usarmy;
class rhsusf_m1a2sep1tuskid_usarmy;
class rhsusf_m1a2sep1tuskiid_usarmy;
class rhsusf_m1a1aimd_usarmy;
class rhsusf_m1a1aim_tuski_d;
class B_SDV_01_F;
class rhsusf_m1025_d_s;
class rhsusf_m1025_d;
class rhsusf_m1025_d_Mk19;
class rhsusf_m1025_d_m2;
class rhsusf_m998_d_4dr;
class rhsusf_m998_d_2dr;
class B_APC_Tracked_01_rcws_F;
class rhsusf_M1083A1P2_d_fmtv_usarmy;
class RHS_M6;
class B_APC_Tracked_01_CRV_F;
class B_Truck_01_ammo_F;
class B_Truck_01_fuel_F;
class B_Truck_01_Repair_F;
class B_Boat_Transport_01_F;
class Cha_Des1_LAV25A2;
class Cha_Des1_LAV25_HQ;

// new supply suggestions by Bean
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d;
class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d;
class rhsusf_M978A4_BKIT_usarmy_d;

// LAV25A2
class SOR_LAV : Cha_Des1_LAV25A2
{
	editorPreview = "\Cha\Cha_Lav25\Data\UI\Picture_LAV25_CA.paa";
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 12;
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

// LAV25A2
class SOR_LAV_HQ : Cha_Des1_LAV25_HQ
{
	editorPreview = "\Cha\Cha_LAV25\data\UI\Picture_LAV25_CA.paa";
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 12;
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M6A2	
class SOR_RHS_M6 : RHS_M6
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	armor = 500; //was 300 protection against missiles, collisions and explosions
	peakTorque = 3660; // was 1660
//	torqueCurve[] = {["(0/8000)","(2300/2300)"],["(1143/8000)","(2300/2300)"],["(2286/8000)","(2300/2300)"],["(3429/8000)","(2300/2300)"],["(4572/8000)","(2300/2300)"],["(5715/8000)","(2300/2300)"],["(6858/8000)","(2300/2300)"],["(8000/8000)","(2300/2300)"};
	maxSpeed = 67;
	maxOmega = 272.27;
	enginePower = 1000; //was 447
	engineLosses = 25;
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M2A3 (BUSK III)	
class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 3660; 
	enginePower = 1000; 
	armor = 500; //was 325 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M113A3	
class SOR_rhsusf_m113d_usarmy : rhsusf_m113d_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	armor = 500; //was 200 protection against missiles, collisions and explosions
	peakTorque = 1540; // was 770
	enginePower = 410; //was 205	
	ace_cargo_space = 12;
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};
	
//M113A3 (Supply)	
class SOR_rhsusf_m113d_usarmy_supply : rhsusf_m113d_usarmy_supply
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	armor = 500; //was 200 protection against missiles, collisions and explosions
	peakTorque = 1540; // was 770
	enginePower = 410; //was 205	
	ace_cargo_space = 12;
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M113A3 (Unarmed)	
class SOR_rhsusf_m113d_usarmy_unarmed : rhsusf_m113d_usarmy_unarmed
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	armor = 500; //was 200 protection against missiles, collisions and explosions
	peakTorque = 1540; // was 770
	enginePower = 410; //was 205
	ace_cargo_space = 12;
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M113A3 (Medical)
class SOR_rhsusf_m113d_usarmy_medical : rhsusf_m113d_usarmy_medical
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	armor = 500; //was 200 protection against missiles, collisions and explosions
	peakTorque = 1540; // was 770
	enginePower = 410; //was 205
	ace_cargo_space = 12;
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
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};	

//M1A1
class SOR_rhsusf_m1a1aimd_usarmy : rhsusf_m1a1aimd_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 10355;
	enginePower = 3000; 
	brakeDistance = 1;
	maxBrakeTorque = 24500;
	armor = 700; //was 600 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M1A1 (Tusk I)
class SOR_rhsusf_m1a1aim_tuski_d : rhsusf_m1a1aim_tuski_d
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 10355;
	enginePower = 3000; 
	brakeDistance = 1;
	maxBrakeTorque = 24500;
	armor = 700; //was 600 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};		

//M1A2
class SOR_rhsusf_m1a2sep1d_usarmy : rhsusf_m1a2sep1d_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 10355;
	enginePower = 3000; 
	brakeDistance = 1;
	armor = 700; //was 600 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//M1A2 (Tusk I)
class SOR_rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2sep1tuskid_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 10355;
	enginePower = 3000; 
	brakeDistance = 1;
	armor = 700; //was 600 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};	

//M1A2 (Tusk II)
class SOR_rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiid_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	peakTorque = 10355;
	enginePower = 3000; 
	brakeDistance = 1;
	armor = 800; //was 600 protection against missiles, collisions and explosions
	ace_cargo_space = 12;	
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
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

//Sub	
class SOR_B_SDV_01_F : B_SDV_01_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;	
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

//rubber duck
class SOR_B_Boat_Transport_01_F : B_Boat_Transport_01_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;	
	driverCanEject = 0; //was 1
	cargoCanEject = 0; //was 1
	maxSpeed = 70; //was 70
	enginePower = 40; //was 18.5
	engineShiftY = 0; //was 0
	waterResistance = 10; //was 10
	waterResistanceCoef = 0.01; // was 0.01
	waterLinearDampingCoefX = 2; //was 2
	rudderForceCoef = 0.08; //was 0.08
	rudderForceCoefAtMaxSpeed = 0.001; //was 0.001
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
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1083";	
	ace_cargo_space = 16;	
	gearBox[] = {-8,0,11,8.15,7.44,5.33};
	enginePower = 850;  //was 268
	peakTorque = 2450; //was 254	
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};
	
//Troop transport
class SOR_rhsusf_m1025_d : rhsusf_m1025_d
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1025 (Unarmed)";		
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};
	
//Troop armed transport GL
class SOR_rhsusf_m1025_d_Mk19 : rhsusf_m1025_d_Mk19
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1025 (Mk19)";			
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};
	
//Troop armed transport MG
class SOR_rhsusf_m1025_d_m2 : rhsusf_m1025_d_m2
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1025 (M2)";			
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};	

//Troop unarmed transport 4 door
class SOR_rhsusf_m998_d_4dr : rhsusf_m998_d_4dr
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};	

//Troop unarmed transport 2 door
class SOR_rhsusf_m998_d_2dr : rhsusf_m998_d_2dr
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1)		
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1)	
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)		
		mag_xx(rhs_mag_m67,2)	
		mag_xx(rhs_mag_an_m8hc,4)			
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)	
		pack_xx(B_AssaultPack_khk,1)			
	};
};
	
////////////////////////////////
//Engineering support vehicles//
////////////////////////////////

//Engineer transport
class SOR_Eng_Car_Transport_D : rhsusf_m1025_d_s
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1025 (Engineer)";		
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
	};
	class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,2)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,2)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
		pack_xx(SOR_OrdanancePack_D,2)	
		pack_xx(B_Mortar_01_weapon_F,1)	
		pack_xx(B_Mortar_01_support_F,1)				
	};
};

//Engineer transport trucks
class SOR_Eng_Truck_Transport_D : rhsusf_M1083A1P2_d_fmtv_usarmy
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	displayName = "M1083 (Engineer)";	
	ace_cargo_space = 16;	
	gearBox[] = {-8,0,11,8.15,7.44,5.33};
	enginePower = 850;  //was 268
	peakTorque = 2450; //was 254
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)		
	};
	class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,2)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,2)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
		pack_xx(SOR_OrdanancePack_D,2)	
		pack_xx(B_Mortar_01_weapon_F,1)	
		pack_xx(B_Mortar_01_support_F,1)	
	};
};	

class SOR_Eng_Truck_ammo_D : B_Truck_01_ammo_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 16;
	enginePower = 850;  //was 450
	peakTorque = 2450; //was 1450
	crew = "SOR_Engineer_D";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

class SOR_Eng_Truck_ammo2_D : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 16;
	enginePower = 850;  //was 450
	peakTorque = 2450; //was 1450
	crew = "SOR_Engineer_D";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};
class SOR_Eng_Truck_fuel_D : B_Truck_01_fuel_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_refuel_fuelCargo = 30000;
	enginePower = 850;  //was 450
	peakTorque = 2450; //was 1450
	crew = "SOR_Engineer_D";	
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};	

class SOR_Eng_Truck_AutoRepair_D : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 16;
	enginePower = 850;  //was 450
	peakTorque = 2450; //was 1450
	crew = "SOR_Engineer_D";
	class TransportItems
	{
		item_xx(ACE_DefusalKit,2);
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};		
	
class SOR_Eng_Truck_Repair_D : B_Truck_01_Repair_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	ace_cargo_space = 16;
	enginePower = 850;  //was 450
	peakTorque = 2450; //was 1450
	crew = "SOR_Engineer_D";
	class TransportItems
	{
		item_xx(ACE_DefusalKit,2);
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};		
	
	
//Engineer armored recovery
class SOR_Eng_APC_Tracked_01 : B_APC_Tracked_01_rcws_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)			
	};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_OrdanancePack_D,2)	
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};	

class SOR_B_APC_Tracked_02 : B_APC_Tracked_01_CRV_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(ACE_EntrenchingTool,2);		
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)			
	};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_OrdanancePack_D,2)
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};	
