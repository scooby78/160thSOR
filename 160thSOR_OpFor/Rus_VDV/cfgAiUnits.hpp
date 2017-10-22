/*
	Name: 160th OpFor AI Russian Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgAiOpForVdv.hpp.  These unit are designed for AI spawns only, they are not suitable as playable units
*/

////////////////////////////////		    
// SOR Enemy AI Faction Units //
////////////////////////////////
//////////////////////////////////////////////////////////////
////// Base Classes DO NOT EDIT //////////////////////////////
//////////////////////////////////////////////////////////////
// OpFor
class SOR_Soldier_base_AI : O_Soldier_base_F				
{															
	scope = 0;		
	scopeCurator = 0;
	displayName = "SOR Base AI Opfor Soldier";
	editorCategory = "SOR_OPFor_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Infantry";
	vehicleclass = "SOR_OPFor_Infantry";
	faction = SOR_OPFor_Faction_VDV_AI;
	aiBrainType = "SORSoldierBrain";
};
// IndFor
class SOR_Soldier_base_IND_AI : I_Soldier_base_F				
{															
	scope = 0;		
	scopeCurator = 0;
	displayName = "SOR Base AI Ind Soldier";
	editorCategory = "SOR_OPFor_Cat_Faction_TAK_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Infantry";
	vehicleclass = "SOR_OPFor_Infantry";
	faction = SOR_IndFor_Faction_VDV_AI;
	aiBrainType = "SORSoldierBrain";
};
// CivFor
class SOR_Soldier_base_CIV_AI : C_man_1				
{															
	scope = 0;		
	scopeCurator = 0;
	displayName = "SOR Base AI Civilian";
	editorCategory = "SOR_OPFor_Cat_Faction_CIV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Infantry";
	vehicleclass = "SOR_OPFor_Infantry";
	faction = SOR_Civ_Faction_VDV_AI;
};
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
class SOR_OPFor_Base_VDV_AI	: SOR_Soldier_base_AI	
{
	uniformClass = "rhs_uniform_vdv_emr";		
	displayName = "SOR_OPFor_Base_VDV_AI";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	Items[] = {RUS_VDV_Standard_Meds};
	RespawnItems[] = {RUS_VDV_Standard_Meds};
	magazines[] = {RUS_VDV_AI_Standard_Mags};
	respawnMagazines[] = {RUS_VDV_AI_Standard_Mags};
	linkedItems[] = 
	{
		"rhs_6b28_green",
		"rhs_6b23_digi_6sh92",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green",
		"rhs_6b23_digi_6sh92",
		RUS_VDV_Standard_Equipment
	};
};

//Teamleader	
class SOR_OPFor_Teamleader_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;		
	backpack = "";
	weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put","rhs_pdu4"};
	magazines[] = {RUS_VDV_SL_Mags,"RPG7_F"};
	respawnMagazines[] = {RUS_VDV_SL_Mags"RPG7_F"};
	Items[] = {};
	RespawnItems[] = {};
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog_headset",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog_headset",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};			
};

//Combat Medics
class SOR_OPFor_Medic_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "";
	weapons[] = {"arifle_AKS_F","Throw","Put"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
	linkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
};

class SOR_OPFor_PKM_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKM";
	icon = "iconManMG";	
	backpack = "SOR_OpFor_AR_Pack_VDV_AI";
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		RUS_VDV_Standard_Equipment
	};
};

class SOR_OPFor_PKP_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKP";
	icon = "iconManMG";	
	backpack = "SOR_OpFor_AR_Pack_VDV_AI";
	weapons[] = {"rhs_weap_pkp","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
	magazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"rhs_100Rnd_762x54mmR_green"
	};
	linkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_6b28_green_ess",
		"rhs_6b23_digi",
		RUS_VDV_Standard_Equipment
	};
};

class SOR_OPFor_Grenadier_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	backpack = "";
	weapons[] = {"160_Opfor_AI_GL","Throw","Put"};
	respawnWeapons[] = {"160_Opfor_AI_GL","Throw","Put"};
	magazines[] = 
	{
		RUS_VDV_AI_GL_Mags
	};
	respawnMagazines[] = 
	{
		RUS_VDV_AI_GL_Mags
	};
};

class SOR_OPFor_Rifleman_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "";
};					
	
//Heli Pilot & CO-Pilot
class SOR_OPFor_HeliPilot_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	uniformClass = "rhs_uniform_df15";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Heli Pilot";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put"};
	Items[] = {};  
	RespawnItems[] = {}; 
	magazines[] = 
	{
		RUS_VDV_AI_Std_Pistol,
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		RUS_VDV_AI_Std_Pistol,
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};	
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		RUS_VDV_Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		RUS_VDV_Airborne_Equipment
	};
};

//Heli Crew Engineers
class SOR_OPFor_HeliCrew_VDV_AI : SOR_OPFor_HeliPilot_VDV_AI
{
	displayName = "Heli Crew";
	backpack = "";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	magazines[] = 
	{
		RUS_VDV_AI_Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		RUS_VDV_AI_Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};		
	linkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike", 
		RUS_VDV_Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_commander", 
		"rhs_zsh7a_mike", 
		RUS_VDV_Airborne_Equipment
	};
};

//Jet Pilots
class SOR_OPFor_JetPilot_VDV_AI : SOR_OPFor_HeliPilot_VDV_AI
{
	displayName = "Jet Pilot";		
	backpack = "B_Parachute";
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster",
		"rhs_zsh7a",
		"G_Aviator",		
		RUS_VDV_Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a",
		"G_Aviator",		
		RUS_VDV_Airborne_Equipment
	};
};

// MEV Pilot & CO-Pilot
class SOR_OPFor_MEVPilot_VDV_AI : SOR_OPFor_HeliPilot_VDV_AI
{
	displayName = "MEV Pilot";
};

class SOR_OPFor_ParaJumper_VDV_AI : SOR_OPFor_Medic_VDV_AI
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	displayName = "Para Jumper";
	backpack = "SOR_OPFor_PJMedicPack_VDV_AI";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 		
	weapons[] = {"arifle_AKS_F","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"arifle_AKS_F","Throw","Put","Laserdesignator_02"};
	magazines[] = {RUS_VDV_AI_Standard_Mags,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_AI_Standard_Mags,"Laserbatteries"};
	Items[] = {};  
	RespawnItems[] = {};  
	linkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"rhs_acc_1p78",
		RUS_VDV_Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b28_green",
		"rhs_6b23_digi_medic",
		"rhs_acc_1p78",
		RUS_VDV_Airborne_Equipment
	};
};

//Recon Units
class SOR_OPFor_ReconLeader_VDV_AI : SOR_OPFor_Base_VDV_AI	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "rhs_uniform_vdv_emr";
	displayName = "Recon Lead";
	accuracy = 3.5;
	cost = 500000;
	camouflage = 0.6;
	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_ak74m_camo","launch_RPG7_F","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","launch_RPG7_F","Throw","Put","Laserdesignator_02"};
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   
	magazines[] = {RUS_VDV_Recon_Mags,"Laserbatteries","RPG7_F"};
	respawnMagazines[] = {RUS_VDV_Recon_Mags,"Laserbatteries","RPG7_F"};
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_radio", 
		"rhs_6b28_green_ess_bala", 
		RUS_VDV_Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_radio", 
		"rhs_6b28_green_ess_bala", 
		RUS_VDV_Recon_Equipment
	};	
};

class SOR_OPFor_ReconJTAC_VDV_AI : SOR_OPFor_ReconLeader_VDV_AI	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_OPFor_ReconRifleman_VDV_AI : SOR_OPFor_ReconLeader_VDV_AI	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {RUS_VDV_Recon_Mags};						
	respawnMagazines[] = {RUS_VDV_Recon_Mags};	
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_OPFor_MechCrew_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_OPFor_Infantry_MECH";
	displayName = "Mechanised Gunner";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	magazines[] = {RUS_VDV_AI_Std_Pistol};
	respawnMagazines[] = {RUS_VDV_AI_Std_Pistol};
	Items[] = {RUS_VDV_Standard_Meds};  
	RespawnItems[] = {RUS_VDV_Standard_Meds};  
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster",
		"rhs_tsh4",
		"G_Balaclava_blk",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster",
		"rhs_tsh4",
		"G_Balaclava_blk",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
};

class SOR_OPFor_MechOperator_VDV_AI : SOR_OPFor_MechCrew_VDV_AI
{
	displayName = "Mechanised Operator";
	backpack = "SOR_OPFor_Mech_Radio";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","Throw","Put","Laserdesignator_02"};
	magazines[] = 	
	{
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries",
		RUS_VDV_AI_Std_Pistol
	};						
	respawnMagazines[] =
	{
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries",
		RUS_VDV_AI_Std_Pistol
	};
	linkedItems[] = 
	{	
		"rhs_vydra_3m",
		"rhs_tsh4_ess", 
		"G_Balaclava_blk",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_vydra_3m",
		"rhs_tsh4_ess", 
		"G_Balaclava_blk",
		"ItemGPS",
		RUS_VDV_Standard_Equipment
	};
};

class SOR_OPFor_MechCrewCommander_VDV_AI : SOR_OPFor_MechOperator_VDV_AI
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_OPFor_Mech_Radio";
	cost = 100000;
};	

class SOR_OPFor_MechDriver_VDV_AI : SOR_OPFor_MechCrew_VDV_AI
{
	displayName = "Mechanised Driver";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
};	

//HMG Team
class SOR_OPFor_HMGActual_VDV_AI : SOR_OPFor_Teamleader_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_HMGGunner_VDV_AI : SOR_OPFor_Rifleman_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_DShkM_Gun_Bag";
};	

class SOR_OPFor_HMGCarrier_VDV_AI : SOR_OPFor_Rifleman_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_DShkM_TripodLow_Bag";
};

class SOR_OPFor_HMGRFL_VDV_AI : SOR_OPFor_Grenadier_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};	

//Mortar Team
class SOR_OPFor_MORActual_VDV_AI : SOR_OPFor_Teamleader_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_MORGunner_VDV_AI : SOR_OPFor_Rifleman_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "RHS_Podnos_Gun_Bag";
};	

class SOR_OPFor_MORCarrier_VDV_AI : SOR_OPFor_Rifleman_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "RHS_Podnos_Bipod_Bag";
};

class SOR_OPFor_MORRFL_VDV_AI : SOR_OPFor_Grenadier_VDV_AI
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};		


//Repair Team
class SOR_OPFor_Engineer_VDV_AI : SOR_OPFor_Base_VDV_AI
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_Support";
	vehicleclass = "SOR_OPFor_Infantry_Support";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {RUS_VDV_Standard_Meds};
	RespawnItems[] = {RUS_VDV_Standard_Meds};
	magazines[] = {};
	respawnMagazines[] = {};	
};	
