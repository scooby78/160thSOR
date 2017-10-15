/*
	Name: 160th SOR Mod
	Author: Scooby & AmTheAgent
	Date: 28/09/15 01:09
	Description: cfgTroopsWoodland.hpp
*/
//////////////////////////////
//SOR Nam Faction Units//
//////////////////////////////		

class SOR_Actual_D;
class SOR_Commander_D;
class SOR_ZeusCommand_D;
class SOR_MechCommand_D;
class SOR_AirCommand_D;
class SOR_RTO_D;
class SOR_Teamleader_D;
class SOR_Teamleader2_D;
class SOR_Medic_D;
class SOR_Medic_W;
class SOR_M249AR_D;
class SOR_M240AR_D;
class SOR_Grenadier_D;
class SOR_Rifleman_D;
class SOR_Rifleman_ammo_D;
class SOR_RiflemanAT_D;
class SOR_HeliPilot_D;
class SOR_HeliCrew_D;
class SOR_JetPilot_D;
class SOR_MEVPilot_D;
class SOR_ParaJumper_D;
class SOR_ReconLeader_D;
class SOR_ReconJTAC_D;
class SOR_Recon_M249AR_D;
class SOR_ReconGrenadier_D;
class SOR_Marksman_D;
class SOR_Sniper_D;
class SOR_Spotter_D;
class SOR_MechCrew_D;
class SOR_Engineer_Teamleader_D;


class SOR_Actual_Nam : SOR_Actual_D
{
	editorPreview = "\160thSOR\data\SOR_Actual_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Spotter_Radio_W";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};   
};

//Commander	
class SOR_Commander_Nam : SOR_Commander_D
{
	editorPreview = "\160thSOR\data\SOR_Commander_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Spotter_Radio_W";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};             
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	}; 
};
	
//Zeus unit
class SOR_ZeusCommand_Nam : SOR_ZeusCommand_D
{
	editorPreview = "\160thSOR\data\SOR_Commander_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Spotter_Radio_W";
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};	
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};             
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	}; 	
};
	
//Mechanised Commander 	
class SOR_MechCommand_Nam : SOR_MechCommand_D
{
	editorPreview = "\160thSOR\data\SOR_MechCommand_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "SOR_Spotter_Radio_W";		
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing" , 
		"H_HelmetCrew_I", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"H_HelmetCrew_I", 
		"rhs_balaclava",
		Standard_Equipment_Nam
	};   
};
	
//Air Commander 	
class SOR_AirCommand_Nam : SOR_AirCommand_D
{
	editorPreview = "\160thSOR\data\SOR_AirCommand_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "SOR_Spotter_Radio_W";		
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam_Nam
	};  
};

//Platoon RTO
class SOR_RTO_Nam : SOR_RTO_D
{
	editorPreview = "\160thSOR\data\SOR_RTO_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_RTO_Pack_W";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1M203", "Throw", "put"};
	respawnweapons[] = {"BOM16A1M203", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	}; 
};	

class SOR_Teamleader_Nam : SOR_Teamleader_D
{
	editorPreview = "\160thSOR\data\SOR_Teamleader_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};   
};

class SOR_Teamleader2_Nam : SOR_Teamleader2_D
{
	editorPreview = "\160thSOR\data\SOR_Teamleader_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};   
};


class SOR_Medic_Nam : SOR_Medic_D
{
	editorPreview = "\160thSOR\data\SOR_Medic_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Medic_Pack_Nam";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};   
};

class SOR_HMedic_Nam : SOR_Medic_Nam
{
	displayName = "Havoc Medic";
	backpack = "SOR_PJMedicPack_Nam";		
};

class SOR_M249AR_Nam : SOR_M249AR_D
{
	editorPreview = "\160thSOR\data\SOR_M249AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOm60e3", "Throw", "put"};
	respawnweapons[] = {"BOm60e3", "Throw", "put"};
	magazines[] = {Standard_Mags_AR_Nam};
	respawnmagazines[] = {Standard_Mags_AR_Nam};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing" , 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};   
};

class SOR_M240AR_Nam : SOR_M240AR_D
{
	editorPreview = "\160thSOR\data\SOR_M240AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOm60e3", "Throw", "put"};
	respawnweapons[] = {"BOm60e3", "Throw", "put"};
	magazines[] = {Standard_Mags_AR_Nam};
	respawnmagazines[] = {Standard_Mags_AR_Nam};

	linkedItems[] = 
	{	
		"rhsgref_alice_webbing" , 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};   
};

class SOR_Grenadier_Nam : SOR_Grenadier_D
{
	editorPreview = "\160thSOR\data\SOR_Grenadier_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1M203", "Throw", "put"};
	respawnweapons[] = {"BOM16A1M203", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};             
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};  
};

class SOR_Rifleman_Nam : SOR_Rifleman_D
{
	editorPreview = "\160thSOR\data\SOR_Rifleman_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "";
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing",
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing",
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};
};

class SOR_Rifleman_ammo_Nam : SOR_Rifleman_ammo_D
{
	editorPreview = "\160thSOR\data\SOR_Rifleman_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	displayName = "Rifleman Ammo Bearer (M240)";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "";
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing",
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing",
		"rhsgref_helmet_M1_bare",
		Standard_Equipment_Nam
	};
};

class SOR_RiflemanAT_Nam : SOR_RiflemanAT_D
{
	editorPreview = "\160thSOR\data\SOR_RiflemanAT_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1","rhs_weap_m72a7","Throw", "put"};
	respawnweapons[] = {"BOM16A1","rhs_weap_m72a7","Throw", "put"};
	backpack = "";
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing",
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		Standard_Equipment_Nam
	};
};	

class SOR_HeliPilot_Nam : SOR_HeliPilot_D
{
	editorPreview = "\160thSOR\data\SOR_HeliPilot_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Spotter_Radio_W";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam
	};   
};	

class SOR_HeliCrew_Nam : SOR_HeliCrew_D
{
	editorPreview = "\160thSOR\data\SOR_HeliCrew_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Repair_Pack_W";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green", 
		Airborne_Equipment_Nam
	};  
};	

class SOR_JetPilot_Nam : SOR_JetPilot_D
{
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
};	

// MEV Pilot & CO-Pilot
class SOR_MEVPilot_Nam : SOR_MEVPilot_D
{
	editorPreview = "\160thSOR\data\SOR_MEVPilot_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_Spotter_Radio_W";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1","Throw", "put"};
	respawnweapons[] = {"BOM16A1","Throw", "put"};
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster",			
		"rhsusf_hgu56p_green_mask",
		Airborne_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhsusf_hgu56p_green_mask",
		Airborne_Equipment_Nam
	};   
};

class SOR_ParaJumper_Nam : SOR_ParaJumper_D
{
	editorPreview = "\160thSOR\data\SOR_ParaJumper_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "SOR_PJMedicPack_Nam";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1","Throw", "put"};
	respawnweapons[] = {"BOM16A1","Throw", "put"};
	linkedItems[] = 
	{	
		"V_PlateCarrier2_rgr", 
		"rhsusf_opscore_fg_pelt_cam",
		Airborne_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier2_rgr", 
		"rhsusf_opscore_fg_pelt_cam", 
		Airborne_Equipment_Nam
	};   
};

//Recon Units
class SOR_ReconLeader_Nam : SOR_ReconLeader_D	
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1","rhs_weap_m72a7","Throw", "put"};
	respawnweapons[] = {"BOM16A1","rhs_weap_m72a7","Throw", "put"};	
	backpack = "SOR_Spotter_Radio_W";	
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};			
};

class SOR_ReconJTAC_Nam : SOR_ReconLeader_Nam
{
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "SOR_Spotter_Radio_W";
	displayName = "Recon JTAC";
};

class SOR_ReconRifleman_Nam : SOR_ReconLeader_Nam
{
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";	
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "";	
	displayName = "Recon Riflemen";
};

class SOR_Recon_M249AR_Nam : SOR_Recon_M249AR_D
{
	editorPreview = "\160thSOR\data\SOR_Recon_M249AR_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOm60e3", "Throw", "put"};
	respawnweapons[] = {"BOm60e3", "Throw", "put"};
	backpack = "";
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};			
};	

class SOR_ReconGrenadier_Nam : SOR_ReconGrenadier_D	
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};			
};

class SOR_Marksman_Nam : SOR_Marksman_D
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsgref_helmet_M1_bare", 
		"G_Bandanna_oli",
		Recon_Equipment_Nam
	};			
};

//Snipers
class SOR_Sniper_Nam : SOR_Sniper_D
{
	editorPreview = "\160thSOR\data\SOR_Sniper_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};	
};

class SOR_Spotter_Nam : SOR_Spotter_D
{
	editorPreview = "\160thSOR\data\SOR_Spotter_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";	
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
};

//Mechanised Crew	
class SOR_MechCrew_Nam : SOR_MechCrew_D
{
	editorPreview = "\160thSOR\data\SOR_MechCrew_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	backpack = "";		
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsusf_cvc_green_helmet", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"rhsusf_cvc_green_helmet", 
		Standard_Equipment_Nam
	};   
};	

class SOR_MechOperator_Nam : SOR_MechCrew_Nam
{
	editorPreview = "\160thSOR\data\SOR_MechOperator_W.jpg";
	displayName = "Mechanised Operator";
	backpack = "SOR_Mech_Radio_W";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	magazines[] = 	
	{
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
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
		Std_Pistol
	};
	linkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"H_HelmetCrew_I",

		Standard_Equipment_Nam
	};
	respawnLinkedItems[] = 
	{	
		"rhsgref_alice_webbing", 
		"H_HelmetCrew_I",
		Standard_Equipment_Nam
	};
};	

class SOR_MechCrewCommander_Nam : SOR_MechOperator_Nam
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_Spotter_Radio_W";
	cost = 100000;
};

class SOR_MechDriver_Nam: SOR_MechCrew_Nam
{
	displayName = "Mechanised Driver";
	backpack = "SOR_Repair_Pack_W";
};

//HMG Team
class SOR_HMGActual_Nam : SOR_Actual_Nam
{
	displayName = "HMG Actual";
	backpack = "SOR_Spotter_Radio_W";
	icon =  "iconManLeader";		
};

class SOR_HMGGunner_Nam : SOR_Rifleman_ammo_Nam
{
	displayName = "HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};	

class SOR_HMGCarrier_Nam : SOR_Rifleman_ammo_Nam
{
	displayName = "HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";   
};	

class SOR_HMGRFL_Nam : SOR_Grenadier_Nam
{
	displayName = "HMG Rifleman M320";
	backpack = "SOR_GD_Pack_W";  
};

//Mortar Team
class SOR_MORActual_Nam : SOR_Actual_Nam
{
	displayName = "Mortar Actual";
	backpack = "SOR_Spotter_Radio_W";
};

class SOR_MORGunner_Nam : SOR_Rifleman_ammo_Nam
{
	displayName = "Mortar Gunner";
	backpack = "O_Mortar_01_weapon_F";
};	

class SOR_MORCarrier_Nam : SOR_Rifleman_ammo_Nam
{
	displayName = "Mortar Carrier";
	backpack = "O_Mortar_01_support_F";
};

class SOR_MORRFL_Nam : SOR_Grenadier_Nam
{
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_GD_Pack_W";
};

//Repair Team
class SOR_Engineer_Teamleader_Nam : SOR_Engineer_Teamleader_D
{   
	editorPreview = "\160thSOR\data\SOR_Engineer_W.jpg";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	displayName = "Engineer Team Leader";
	uniformClass = "US_ARMY_Uniform";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\160thSOR_Vietnam\data\1.paa","\160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
	weapons[] = {"BOM16A1", "Throw", "put"};
	respawnweapons[] = {"BOM16A1", "Throw", "put"};
	backpack = "SOR_Spotter_Radio_W";
	linkedItems[] =
	{
		"rhs_vest_pistol_holster",
		"rhsgref_helmet_M1_bare", 
		"removeGoggles",
		Standard_Equipment_Nam
	};
	respawnLinkedItems[] =
	{
		"rhs_vest_pistol_holster",
		"rhsgref_helmet_M1_bare", 
		"removeGoggles",
		Standard_Equipment_Nam
	};
};

class SOR_Engineer_Nam : SOR_Engineer_Teamleader_Nam
{   
	displayName = "Engineer";
	backpack = "SOR_Eng_Repair_Pack_W";
};

