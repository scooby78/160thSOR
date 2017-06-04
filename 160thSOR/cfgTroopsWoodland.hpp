/*
	Name: 160th SOR Mod
	Author: Scooby & AmTheAgent
	Date: 28/09/15 01:09
	Description: cfgTroopsWoodland.hpp
*/
//////////////////////////////
//SOR Woodland Faction Units//
//////////////////////////////		

class SOR_Actual_W : SOR_Actual_D
{
	editorPreview = "\160thSOR\data\SOR_Actual_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "tf_rt1523g_bwmod";
	uniformClass = "U_B_T_Soldier_F";		
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F" , 
		"H_HelmetB_Enh_tna_F",
		"rhs_googles_clear",
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS",
		Standard_Equipment
	};   
};
	
//Commander	
class SOR_Commander_W : SOR_Commander_D
{
	editorPreview = "\160thSOR\data\SOR_Commander_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "tf_rt1523g_bwmod";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 		
		Standard_Equipment
	};             
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 		
		Standard_Equipment
	}; 
};
	
//Zeus unit
class SOR_ZeusCommand_W : SOR_ZeusCommand_D
{
	editorPreview = "\160thSOR\data\SOR_Commander_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "tf_rt1523g_green";	
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"ItemGPS", 	
		Standard_Equipment
	};             
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"ItemGPS", 	
		Standard_Equipment
	}; 	
};
	
//Mechanised Commander 	
class SOR_MechCommand_W : SOR_MechCommand_D
{
	editorPreview = "\160thSOR\data\SOR_MechCommand_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F"; 
	backpack = "tf_rt1523g_green";		
	linkedItems[] = 
	{	
		"V_PlateCarrier2_tna_F" , 
		"rhsusf_cvc_green_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier2_tna_F", 
		"rhsusf_cvc_green_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};   
};
	
//Air Commander 	
class SOR_AirCommand_W : SOR_AirCommand_D
{
	editorPreview = "\160thSOR\data\SOR_AirCommand_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_HeliPilotCoveralls"; 
	backpack = "tf_rt1523g_green";		
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		"ItemGPS", 	
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		"ItemGPS", 	
		Airborne_Equipment
	};  
};

//Platoon RTO
class SOR_RTO_W : SOR_RTO_D
{
	editorPreview = "\160thSOR\data\SOR_RTO_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_RTO_Pack_W";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 	
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 	
		Standard_Equipment
	}; 
};	

class SOR_Teamleader_W : SOR_Teamleader_D
{
	editorPreview = "\160thSOR\data\SOR_Teamleader_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_M249_Pack_W";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F",
		"rhs_googles_clear",		
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 	
		Standard_Equipment
	};   
};

class SOR_Teamleader2_W : SOR_Teamleader2_D
{
	editorPreview = "\160thSOR\data\SOR_Teamleader_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_M249_Pack_W";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F",
		"rhs_googles_clear",		
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"ItemGPS", 	
		Standard_Equipment
	};   
};


class SOR_Medic_W : SOR_Medic_D
{
	editorPreview = "\160thSOR\data\SOR_Medic_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_Medic_Pack_W";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F",
		"rhs_googles_clear",
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F",
		"rhs_googles_clear",
		"ItemGPS",
		Standard_Equipment
	};   
};

class SOR_HMedic_W : SOR_Medic_W
{
	displayName = "Havoc Medic";
	backpack = "SOR_PJMedicPack_W";		
};

class SOR_M249AR_W : SOR_M249AR_D
{
	editorPreview = "\160thSOR\data\SOR_M249AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F" , 
		"H_HelmetB_tna_F", 
		"rhs_ess_black",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"rhs_ess_black",
		Standard_Equipment
	};   
};

class SOR_M240AR_W : SOR_M240AR_D
{
	editorPreview = "\160thSOR\data\SOR_M240AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F" , 
		"H_HelmetB_tna_F", 
		"rhs_ess_black",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"rhs_ess_black",
		Standard_Equipment
	};   
};

class SOR_Grenadier_W : SOR_Grenadier_D
{
	editorPreview = "\160thSOR\data\SOR_Grenadier_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};             
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};  
};

class SOR_Rifleman_W : SOR_Rifleman_D
{
	editorPreview = "\160thSOR\data\SOR_Rifleman_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";
	backpack = "";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F",
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F",
		"H_HelmetB_tna_F",
		"rhs_googles_clear",
		Standard_Equipment
	};
};

class SOR_Rifleman_ammo_W : SOR_Rifleman_ammo_D
{
	editorPreview = "\160thSOR\data\SOR_Rifleman_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W
	displayName = "Rifleman Ammo Bearer (M240)";
	uniformClass = "U_B_T_Soldier_F";
	backpack = "";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F",
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F",
		"H_HelmetB_tna_F",
		"rhs_googles_clear",
		Standard_Equipment
	};
};

class SOR_RiflemanAT_W : SOR_RiflemanAT_D
{
	editorPreview = "\160thSOR\data\SOR_RiflemanAT_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F"; 
	backpack = "";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F",
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_tna_F", 
		"rhs_googles_clear",  
		Standard_Equipment
	};
};	

class SOR_HeliPilot_W : SOR_HeliPilot_D
{
	editorPreview = "\160thSOR\data\SOR_HeliPilot_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "tf_rt1523g_bwmod";		
	uniformClass = "U_B_HeliPilotCoveralls"; 
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		Airborne_Equipment
	};   
};	

class SOR_HeliCrew_W : SOR_HeliCrew_D
{
	editorPreview = "\160thSOR\data\SOR_HeliCrew_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_Repair_Pack_W";		
	uniformClass = "U_B_HeliPilotCoveralls"; 
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		Airborne_Equipment
	};             
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p", 
		Airborne_Equipment
	};  
};	

class SOR_JetPilot_W : SOR_JetPilot_D
{
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
};	

// MEV Pilot & CO-Pilot
class SOR_MEVPilot_W : SOR_MEVPilot_D
{
	editorPreview = "\160thSOR\data\SOR_MEVPilot_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "tf_rt1523g_bwmod";		
	uniformClass = "U_B_HeliPilotCoveralls"; 
	linkedItems[] = 
	{	
		"V_Rangemaster_belt",			
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};   
};

class SOR_ParaJumper_W : SOR_ParaJumper_D
{
	editorPreview = "\160thSOR\data\SOR_ParaJumper_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "SOR_PJMedicPack_W";		
	uniformClass = "U_B_T_Soldier_SL_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier2_rgr", 
		"rhsusf_opscore_fg_pelt_cam",
		"rhs_googles_black", 		
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier2_rgr", 
		"rhsusf_opscore_fg_pelt_cam", 
		"rhs_googles_black", 
		Airborne_Equipment
	};   
};

//Recon Units
class SOR_ReconLeader_W : SOR_ReconLeader_D	
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";	
	backpack = "tf_rt1523g_bwmod";	
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};			
};

class SOR_ReconJTAC_W : SOR_ReconLeader_W
{
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";	
	backpack = "tf_rt1523g_green";
	displayName = "Recon JTAC";
};

class SOR_ReconRifleman_W : SOR_ReconLeader_W
{
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;	
	uniformClass = "U_B_T_Soldier_F";
	backpack = "";	
	displayName = "Recon Riflemen";
};

class SOR_Recon_M249AR_W : SOR_Recon_M249AR_D
{
	editorPreview = "\160thSOR\data\SOR_Recon_M249AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";
	backpack = "SOR_M249_Pack_W";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};			
};	

class SOR_ReconSpotter_W : SOR_ReconSpotter_D	
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};			
};

class SOR_Marksman_W : SOR_Marksman_D
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_T_Soldier_F";
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		"G_Bandanna_oli",
		Recon_Equipment
	};			
};

//Snipers
class SOR_Sniper_W : SOR_Sniper_D
{
	editorPreview = "\160thSOR\data\SOR_Sniper_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	uniformClass = "U_B_FullGhillie_lsh";		
};

class SOR_Spotter_W : SOR_Spotter_D
{
	editorPreview = "\160thSOR\data\SOR_Spotter_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;	
	uniformClass = "U_B_FullGhillie_lsh";
};

//Mechanised Crew	
class SOR_MechCrew_W : SOR_MechCrew_D
{
	editorPreview = "\160thSOR\data\SOR_MechCrew_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	backpack = "";		
	uniformClass = "U_B_T_Soldier_F"; 
	linkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"rhsusf_cvc_green_helmet", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"rhsusf_cvc_green_helmet", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};   
};	

class SOR_MechOperator_W : SOR_MechCrew_W
{
	editorPreview = "\160thSOR\data\SOR_MechOperator_W.jpg";
	displayName = "Mechanised Operator";
	backpack = "SOR_Mech_Radio_W";
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
		"V_PlateCarrier1_tna_F", 
		"rhsusf_cvc_green_ess",
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier1_tna_F", 
		"rhsusf_cvc_green_ess",
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
};	

class SOR_MechCrewCommander_W : SOR_MechOperator_W
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_Mech_Radio_W";
	cost = 100000;
};

class SOR_MechDriver_W : SOR_MechCrew_W
{
	displayName = "Mechanised Driver";
	backpack = "SOR_Repair_Pack_W";
};

//HMG Team
class SOR_HMGActual_W : SOR_Actual_W
{
	displayName = "HMG Actual";
	backpack = "tf_rt1523g_bwmod";
	icon =  "iconManLeader";		
};

class SOR_HMGGunner_W : SOR_Rifleman_ammo_W
{
	displayName = "HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};	

class SOR_HMGCarrier_W : SOR_Rifleman_ammo_W
{
	displayName = "HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";   
};	

class SOR_HMGRFL_W : SOR_Grenadier_W
{
	displayName = "HMG Rifleman M320";
	backpack = "SOR_GD_Pack_W";  
};

//Mortar Team
class SOR_MORActual_W : SOR_Actual_W
{
	displayName = "Mortar Actual";
	backpack = "tf_rt1523g_bwmod";
};

class SOR_MORGunner_W : SOR_Rifleman_ammo_W
{
	displayName = "Mortar Gunner";
	backpack = "O_Mortar_01_weapon_F";
};	

class SOR_MORCarrier_W : SOR_Rifleman_ammo_W
{
	displayName = "Mortar Carrier";
	backpack = "O_Mortar_01_support_F";
};

class SOR_MORRFL_W : SOR_Grenadier_W
{
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_GD_Pack_W";
};

//Repair Team
class SOR_Engineer_Teamleader_W : SOR_Engineer_Teamleader_D
{   
	editorPreview = "\160thSOR\data\SOR_Engineer_W.jpg";
	editorCategory = "SOR_Cat_Faction_W";
	faction = SOR_Faction_W;
	displayName = "Engineer Team Leader";
	uniformClass = "U_B_T_Soldier_F";
	backpack = "tf_rt1523g_bwmod";
	linkedItems[] =
	{
		"V_PlateCarrierGL_rgr",
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_PlateCarrierGL_rgr",
		"H_HelmetB_Enh_tna_F", 
		"rhs_googles_clear",
		Standard_Equipment
	};
};

class SOR_Engineer_W : SOR_Engineer_Teamleader_W
{   
	displayName = "Engineer";
	backpack = "SOR_Eng_Repair_Pack_W";
};