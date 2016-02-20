//////////////////////		
//Base Soldier Class//
//////////////////////
	
	class B_Soldier_base_F;
	class B_Soldier_TL_F;
	class B_sniper_F;
	class B_spotter_F;
	class B_medic_F;
	class B_officer_F;
	class B_soldier_AR_F;
	class B_Soldier_GL_F;
	class B_Soldier_F;
	class B_soldier_AT_F;
	class B_Pilot_F;
	class B_crew_F;
	class B_recon_TL_F;
	class B_engineer_F;

	class SOR_Base: B_Soldier_base_F	
	{
		side = 1;
		scope = 0;
		scopeCurator = 0;
		Author_Macro
		faction = SOR_Faction_D;
		_generalMacro = "SOR_Base";
		vehicleclass = "SOR_Infantry";
		displayName = "SOR_Base";
		icon =  "iconManLeader";
		picture = "";
		backpack = "";
		weapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9", "Throw", "Put"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};
		linkedItems[] = 
		{
			"rhsusf_iotv_ocp_Squadleader",
			"H_HelmetB_light_black", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{
			"rhsusf_iotv_ocp_Squadleader",
			"H_HelmetB_light_black",
			"ItemGPS",
			"rhs_googles_clear",
			Standard_Equipment
		};
		threat[] = {1,1,1};
		canCarryBackPack = 1;
		model = "\rhsusf\addons\rhsusf_infantry\rhsusf_army_base.p3d";
		modelSides[] = {1};
		uniformClass = "rhs_uniform_cu_ocp";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionTextures[] = {
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_co.paa",
			"rhsusf\addons\rhsusf_infantry\data\rhsusf_combat01_ocp_pockets_co.paa",
		};
	};

////////////////////////////		    
//SOR Desert Faction Units//
////////////////////////////

//Squad Actual	
	class SOR_Actual_D : B_officer_F
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Squad Actual";
		accuracy = 3.5;
		backpack = "tf_rt1523g_rhs";
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
	};

//Commander		
class SOR_Commander_D : B_officer_F

	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Commander";
		accuracy = 3.5;
		backpack = "tf_rt1523g_rhs";
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
		Items[] =
		{
			"ACE_epinephrine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};  
        RespawnItems[] = 
		{
			"ACE_epinephrine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};
		magazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
	};
	
//Mechanised Commander 
class SOR_MechCommand_D : SOR_Commander_D
	
	{
		vehicleclass = "SOR_Infantry_MECH";
		displayName = "Mechanised Commander";
		uniformClass = "rhs_uniform_cu_ocp_1stcav";
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair",
			"rhsusf_cvc_ess", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair", 
			"rhsusf_cvc_ess", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
	};	
	
//Air Commander 
class SOR_AirCommand_D : SOR_Commander_D
	
	{
		vehicleclass = "SOR_Infantry_AIR";
		uavHacker = 1; // allows UAV control
		engineer = 1; // allows unit to repair 
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O",
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O",
			Airborne_Equipment
		};
	};	

//Platoon RTO
class SOR_RTO_D : B_Soldier_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "RTO";
		backpack = "SOR_RTO_Pack_D";
		weapons[] = {"160_m4a1_m320","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_m320","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
		magazines[] =
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp",
			"rhs_googles_clear",
			"ItemGPS", 
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader",
			"rhsusf_ach_helmet_headset_ocp",
			"rhs_googles_clear",
			"ItemGPS", 
			Standard_Equipment
		};
	};
	
//Teamleader	
	class SOR_Teamleader_D : B_Soldier_TL_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		accuracy = 3.5;		
	    backpack = "rhsusf_assault_eagleaiii_ocp";
		weapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","rhs_weap_M136_hp","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","rhs_weap_M136_hp","Throw","Put","ACE_Vector"};
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Teamleader",
			"rhsusf_ach_helmet_headset_ocp", 
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Teamleader",
			"rhsusf_ach_helmet_headset_ocp",
			"ItemGPS", 
			"rhs_googles_clear",  
			Standard_Equipment
		};			
	};

//Combat Medics
class SOR_Medic_D : B_medic_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		displayName = "Combat Medic";
		uniformClass = "rhs_uniform_cu_ocp";
		backpack = "SOR_Medic_Pack_D";
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9", "Throw", "Put"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};		
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Medic",
			"rhsusf_opscore_mc_cover_pelt",
			"ItemGPS",
			"rhs_googles_clear", 
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Medic",
			"rhsusf_opscore_mc_cover_pelt",
			"ItemGPS",
			"rhs_googles_clear", 
			Standard_Equipment
		};
	};

// Auto rifleman
class SOR_M249AR_D : B_soldier_AR_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "AutoRifleman M249";
		backpack = "SOR_M249_Pack_D";
		weapons[] = {"160_rhs_weap_m249_pip_L_para", "rhsusf_weap_m9", "Throw", "Put"};
		respawnWeapons[] = {"160_rhs_weap_m249_pip_L_para", "rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};		
		magazines[] =
		{
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_200rnd_556x45_M_SAW"
		};
		respawnMagazines[] =
		{
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhs_200rnd_556x45_M_SAW"
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_SAW" ,
			"rhsusf_ach_helmet_ocp",
			"rhs_ess_black",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_SAW" ,
			"rhsusf_ach_helmet_ocp",
			"rhs_ess_black",
			Standard_Equipment
		};
	};

class SOR_M240AR_D : B_soldier_AR_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "AutoRifleman M240";
		backpack = "SOR_M240_Pack_D";
		weapons[] = {"160_rhs_weap_m240B", "rhsusf_weap_m9", "Throw", "Put"};
		respawnWeapons[] = {"160_rhs_weap_m240B", "rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};	
		magazines[] =
		{
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhsusf_100Rnd_762x51"
		};
		respawnMagazines[] =
		{
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhsusf_mag_15Rnd_9x19_FMJ",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"rhsusf_100Rnd_762x51"
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_SAW",
			"rhsusf_ach_helmet_ocp", 
			"rhs_ess_black",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_SAW",
			"rhsusf_ach_helmet_ocp", 
			"rhs_ess_black",  
			Standard_Equipment
		};
	};

class SOR_Grenadier_D : B_Soldier_GL_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		backpack = "SOR_GD_Pack_D";
		weapons[] = {"160_m4a1_m320","rhsusf_weap_m9","Throw", "Put"};
		respawnWeapons[] = {"160_m4a1_m320","rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Grenadier",
			"rhsusf_ach_helmet_ocp", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Grenadier", 
			"rhsusf_ach_helmet_ocp", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
	};

class SOR_Rifleman_D : B_Soldier_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Rifleman Ammo Bearer (M249)";
		backpack = "SOR_Rifleman_Pack_D";
		weapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9", "Throw", "Put"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};		
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman",
			"rhsusf_ach_helmet_ocp", 
			"rhs_googles_clear",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman",
			"rhsusf_ach_helmet_ocp",
			"rhs_googles_clear",
			Standard_Equipment
		};
	};					

class SOR_Rilfeman_Ammo_D : SOR_Rifleman_D	
	{
		displayName = "Rifleman Ammo Bearer (M240)";
		backpack = "SOR_Rifleman_Ammo_Pack_D";
	};
	
class SOR_RiflemanAT_D : B_soldier_AT_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Rifleman AT";
		backpack = "SOR_RFLAT_Pack_D";
		weapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","M3CG", "Throw", "Put"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_acog", "rhsusf_weap_m9","M3CG","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags,Std_Pistol};
		respawnMagazines[] = {Standard_Mags,Std_Pistol};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman",
			"rhsusf_ach_helmet_ocp", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"rhsusf_ach_helmet_ocp", 
			"rhs_googles_clear",  
			Standard_Equipment
		};
	};	
		
//Heli Pilots
class SOR_HeliPilot_D : B_Pilot_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_AIR";
		uniformClass = "rhs_uniform_cu_ocp";
		uavHacker = 1; // allows UAV control
		engineer = 1; // allows unit to repair 
		displayName = "Heli Pilot";
		backpack = "tf_rt1523g_rhs";
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};	
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O",
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O",
			Airborne_Equipment
		};
	};

//Heli Crew Engineers
class SOR_HeliCrew_D : B_crew_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_AIR";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Heli Crew";
		backpack = "SOR_Repair_Pack_D";
		uavHacker = 1; // allows UAV control		
		engineer = 1; // allows unit to repair 
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};		
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O", 
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_PilotHelmetHeli_O", 
			Airborne_Equipment
		};
	};

//Jet Pilots
class SOR_JetPilot_D : B_Pilot_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "Jet Pilot";		
		backpack = "B_Parachute";
		weapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = 
		{
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			Std_Pistol,
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			"V_TacVest_blk",
			"H_PilotHelmetFighter_B",
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_TacVest_blk", 
			"H_PilotHelmetFighter_B",
			Airborne_Equipment
		};
	};
	
// MEV Pilot & CO-Pilot
class SOR_MEVPilot_D : 	SOR_HeliPilot_D

	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "MEV Pilot";
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman",
			"rhsusf_hgu56p_mask", 
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"rhsusf_hgu56p_mask", 
			"ItemGPS",
			Airborne_Equipment
		};   
	};
	
class SOR_ParaJumper_D : B_medic_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "Para Jumper";
		backpack = "SOR_PJMedicPack_D";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		uavHacker = 1; // allows UAV control
		engineer = 1; // allows unit to repair 		
		weapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		respawnWeapons[] = {"160_m4a1_carryhandle_grip_holo", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = 
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			Standard_Mags,
			Std_Pistol,
			"Laserbatteries"
		};	
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Medic",
			"rhsusf_opscore_mc_cover_pelt",
			"rhs_googles_clear", 
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Medic", 
			"rhsusf_opscore_mc_cover_pelt", 
			"rhs_googles_clear",  
			Airborne_Equipment
		};
		class UserActions
		{
			class SOR_HALO
			{
				displayName = "<t color='#FF0000'>HALO</t>";
				displayNameDefault = "<t color='#FF0000'>HALO</t>";
				condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
				priority = 8;
				showWindow = 1;
				hideOnUse = 1;
				radius= 8;
				position = "";
				onlyForPlayer = 1;
				statement = "[this] spawn SOR_fnc_parajump; SOR_ParaJump_Active = false;";
			};
		};
	};

//Recon Units
	class SOR_ReconLeader_D : B_recon_TL_F	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_Recon";
		uniformClass = "rhs_uniform_cu_ocp";
		displayName = "Recon Lead";
		accuracy = 3.5;
//		cost = 500000;
//		camouflage = 0.6;
//		threat[] = {1.2,0.2,0.2};
		weapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put","Laserdesignator"};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] = 	
		{
			"Laserbatteries",
			Recon_Mags
		};
						
		respawnMagazines[] =
		{
			"Laserbatteries",
			Recon_Mags
		};						
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader", 
			"rhsusf_ach_helmet_camo_ocp", 
			"G_Bandanna_khk",
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Squadleader", 
			"rhsusf_ach_helmet_camo_ocp", 
			"G_Bandanna_khk",
			Recon_Equipment
		};	
		class UserActions
		{
			class SOR_HALO
			{
				displayName = "<t color='#FF0000'>HALO</t>";
				displayNameDefault = "<t color='#FF0000'>HALO</t>";
				condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
				priority = 8;
				showWindow = 1;
				hideOnUse = 1;
				radius= 8;
				position = "";
				onlyForPlayer = 1;
				statement = "[this] spawn SOR_fnc_parajump; SOR_ParaJump_Active = false;";
			};
		};		
	};

	class SOR_ReconJTAC_D : SOR_ReconLeader_D	
	{
		icon =  "iconMan";
		backpack = "tf_rt1523g_rhs";
		displayName = "Recon JTAC";		
	};

	class SOR_ReconRifleman_D : SOR_ReconLeader_D	
	{
		icon =  "iconMan";
		displayName = "Recon Rifleman";
		weapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put"};
		respawnWeapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put"};
		magazines[] =
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};
	};
	
	class SOR_Recon_M249AR_D : SOR_ReconLeader_D	
	{
		icon =  "iconManMG";
		backpack = "SOR_M249_Pack_D";
		displayName = "Recon AutoRifleman M249";
		weapons[] = {"160_m249_pip", "Throw", "Put"};
		respawnWeapons[] = {"160_m249_pip", "Throw", "Put"};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhsusf_200Rnd_556x45_soft_pouch"
		};
		respawnMagazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhsusf_200Rnd_556x45_soft_pouch"
		};			
	};	
	
	class SOR_ReconSpotter_D : SOR_ReconLeader_D	
	{
		icon =  "iconMan";
		displayName = "Recon Spotter";
		weapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"160_rhs_weap_m16a4_carryhandle_grip_pmag","Throw","Put","ACE_Vector"};
		Items[] = 		
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		}; 		
		magazines[] =
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};		
	};

	class SOR_Marksman_D : SOR_ReconLeader_D	
	{
		icon =  "iconMan";
		displayName = "Recon Marksman";
		weapons[] = {"160_rhs_weap_sr25","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"160_rhs_weap_sr25","Throw","Put","Laserdesignator"};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		}; 
		magazines[] = 	
		{
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"Laserbatteries"
		};						
		respawnMagazines[] =
		{
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"rhsusf_20Rnd_762x51_m118_special_Mag",
			"Laserbatteries"
		};	
	};

//Snipers
	class SOR_Sniper_DT : B_sniper_F		
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_Recon";		
		cost = 700000;
		camouflage = 0.1;
		uniformClass = "U_B_FullGhillie_ard";
		weapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
		Items[] =
		{
			Recon_Equip,
			Recon_Meds
		};  
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] =
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			Recon_Equipment
		};
        respawnLinkedItems[] = 
		{	
			Recon_Equipment
		};
	};

	class SOR_Sniper_D : B_sniper_F		
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_Recon";		
		accuracy = 3.5;
		cost = 700000;
		camouflage = 0.3;
		uniformClass = "U_B_FullGhillie_ard";
		weapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
		Items[] =
		{
			Recon_Equip,
			Recon_Meds
		};  
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] =
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"Laserbatteries"
		};
		respawnMagazines[] =
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"Laserbatteries"
		};
		linkedItems[] = 
		{	
			Recon_Equipment
		};
        respawnLinkedItems[] = 
		{	
			Recon_Equipment
		};
	};
	
	class SOR_Spotter_D : B_spotter_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_Recon";
		accuracy = 3.5;
		cost = 700000;
		camouflage = 0.3;
		uniformClass = "U_B_FullGhillie_ard";
		backpack = "SOR_Spotter_Radio";
		weapons[] = {"160_m4a1_blockII_grip2_KAC","Throw","Put","ACE_Vector"};
		respawnWeapons[] = {"160_m4a1_blockII_grip2_KAC","Throw","Put","ACE_Vector"};
		Items[] =
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};  
        RespawnItems[] = 
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] =
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};
		linkedItems[] = 
		{	
			Recon_Equipment
		};
        respawnLinkedItems[] = 
		{	
			Recon_Equipment
		};		
	};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_D : B_crew_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_MECH";
		displayName = "Mechanised Gunner";
		uniformClass = "rhs_uniform_cu_ocp_1stcav"; 
		backpack = "";
		weapons[] = {"rhsusf_weap_m9","Throw", "Put"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw", "Put"};
		Items[] =
		{
			Standard_Meds
		};  
        RespawnItems[] = 
		{
			Standard_Meds
		};
		magazines[] = {Std_Pistol};
		respawnMagazines[] = {Std_Pistol};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp",
			"rhsusf_cvc_helmet", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp",
			"rhsusf_cvc_helmet", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
	};
	
class SOR_MechOperator_D : SOR_MechCrew_D
	
	{
		displayName = "Mechanised Operator";
		backpack = "SOR_Mech_Radio";
		weapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
		magazines[] = 	
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"Laserbatteries",
			Std_Pistol
		};						
		respawnMagazines[] =
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"Laserbatteries",
			Std_Pistol
		};
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair",
			"rhsusf_cvc_ess", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair",
			"rhsusf_cvc_ess", 
			"rhs_balaclava",
			"ItemGPS",
			Standard_Equipment
		};
	};

class SOR_MechCrewCommander_D : SOR_MechOperator_D
	
	{
		displayName = "Mechanised Crew Commander";
		backpack = "SOR_Mech_Radio";
		cost = 100000;
	};	

class SOR_MechDriver_D : SOR_MechCrew_D
	
	{
		displayName = "Mechanised Driver";
		backpack = "SOR_Repair_Pack_D";
	};	
	
//HMG Team
class SOR_HMGActual_D : SOR_Actual_D
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Actual";
		icon =  "iconManLeader";
		backpack = "tf_rt1523g_rhs";
	};
	
class SOR_HMGGunner_D : SOR_Rifleman_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Gunner";
		backpack = "RHS_Mk19_Gun_Bag";
	};	

class SOR_HMGCarrier_D : SOR_Rifleman_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Carrier";
		backpack = "RHS_M2_MiniTripod_Bag";
	};

class SOR_HMGRFL_D : SOR_Grenadier_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Rifleman M320";
		backpack = "SOR_GD_Pack_D";
	};	
	
//Mortar Team
class SOR_MORActual_D : SOR_Actual_D
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Actual";
		backpack = "tf_rt1523g_rhs";
	};
	
class SOR_MORGunner_D : SOR_Rifleman_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Gunner";
		backpack = "B_Mortar_01_weapon_F";
	};	

class SOR_MORCarrier_D : SOR_Rifleman_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Carrier";
		backpack = "B_Mortar_01_support_F";
	};
	
class SOR_MORRFL_D : SOR_Grenadier_D
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Rifleman M320";
		backpack = "SOR_GD_Pack_D";
	};		

	
//Repair Team
class SOR_Engineer_D : B_engineer_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry_Support";
		uniformClass = "rhs_uniform_cu_ocp";
		backpack = "SOR_Repair_Pack_D";
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {};
		respawnMagazines[] = {};	
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair",
			"H_HelmetSpecB_paint2", 
			"rhs_googles_clear",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Repair",
			"H_HelmetSpecB_paint2",
			"rhs_googles_clear",
			Standard_Equipment
		};
	};	
