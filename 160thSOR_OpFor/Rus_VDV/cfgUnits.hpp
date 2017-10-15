/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgOpForVdv.hpp
*/

//////////////////////		
//Base Soldier Class//
//////////////////////

class O_Soldier_base_F;
class I_Soldier_base_F;
class C_man_1;

////////////////////////////		    
//SOR Enemy Faction Units//
////////////////////////////
class SOR_OPFor_Base_VDV	: O_Soldier_base_F	
{
	scope = 0;
	scopeCurator = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Infantry";
	vehicleclass = "SOR_OPFor_Infantry";
	faction = SOR_OPFor_Faction_VDV;
	uniformClass = "rhs_uniform_vdv_emr";		
	displayName = "SOR_OPFor_Base_VDV";
	weapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
	Items[] = {RUS_VDV_Standard_Meds};
	RespawnItems[] = {RUS_VDV_Standard_Meds};
	magazines[] = {RUS_VDV_Standard_Mags};
	respawnMagazines[] = {RUS_VDV_Standard_Mags};
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

//Commander		
class SOR_Opfor_Commander_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Havoc Commander";
	accuracy = 3.5;
	icon = "iconManOfficer";
	backpack = "tf_mr3000_rhs";
	weapons[] = {"160_rhs_weap_ak74m_1p63","rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	Items[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};  
	RespawnItems[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};  
	magazines[] = {RUS_VDV_Standard_Mags,RUS_VDV_Std_Pistol,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_Standard_Mags,RUS_VDV_Std_Pistol,"Laserbatteries"};
	linkedItems[] = 
	{
		"rhs_fieldcap_digi",
		"rhs_vest_commander",
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_fieldcap_digi",
		"rhs_vest_commander",
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
};

//Mechanised Commander 
class SOR_OpFor_MechCommand_VDV : SOR_Opfor_Commander_VDV
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_OPFor_Infantry_MECH";
	displayName = "Mechanised Commander";
	linkedItems[] = 
	{	
		"rhs_tsh4",
		"G_Balaclava_blk",
		"rhs_vest_commander",
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{
		"rhs_tsh4",
		"G_Balaclava_blk",
		"rhs_vest_commander",
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
};	

//Air Commander 
class SOR_OpFor_AirCommand_VDV : SOR_Opfor_Commander_VDV
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	displayName = "Airborne Commander";
	uniformClass = "rhs_uniform_df15";		
	backpack = "tf_mr6000l";		
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	magazines[] = {RUS_VDV_Std_Pistol,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_Std_Pistol,"Laserbatteries"};
	linkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		"ItemGPS", 
		RUS_VDV_Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_vest_pistol_holster", 
		"rhs_zsh7a_mike",
		"G_Aviator",
		"ItemGPS", 
		RUS_VDV_Airborne_Equipment
	};
};	

//Zeus unit
class SOR_Opfor_ZeusCommand_VDV : SOR_Opfor_Commander_VDV
{
	displayName = "Zeus";
	cost = 10;
	class UserActions
	{
		class SOR_CountUnitsAction
		{
			condition = "(alive this) && !(this getVariable ['ZEUSTOOLS_ACTIVE',false])";
			displayName = "<t color='#F088ff'>Initialise Zeus Tools</t>";
			priority = 8;
			showWindow = 0;
			hideOnUse = true;
			radius= 2;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_zeusTools";
		};
	};
};


//Squad Actual	
class SOR_OpFor_Actual_VDV : SOR_Opfor_Commander_VDV
{
	displayName = "Squad Actual";
	backpack = "tf_mr3000_rhs";
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
};


//Platoon RTO
class SOR_OPFor_RTO_VDV : SOR_OpFor_Actual_VDV
{
	displayName = "RTO";
	backpack = "SOR_OPFor_RTO_Pack_VDV";
	weapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put","Laserdesignator_02"};
	magazines[] = {RUS_VDV_Standard_Mags,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_Standard_Mags,"Laserbatteries"};
	linkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b28", 
		"ItemGPS", 
		RUS_VDV_Standard_Equipment
	};		
};


//Teamleader	
class SOR_OPFor_Teamleader_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	accuracy = 3.5;		
	backpack = "";
	weapons[] = {"160_rhs_weap_ak74m_pkas","rhs_weap_makarov_pmm","rhs_weap_rpg26","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas","rhs_weap_makarov_pmm","rhs_weap_rpg26","Throw","Put","rhs_pdu4"};
	magazines[] = {RUS_VDV_SL_Mags,RUS_VDV_Std_Pistol};
	respawnMagazines[] = {RUS_VDV_SL_Mags,RUS_VDV_Std_Pistol};
	Items[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};
	RespawnItems[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};
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

class SOR_OPFor_Teamleader2_VDV : SOR_OPFor_Teamleader_VDV
{
	displayName = "Team Leader 2";
	magazines[] = 
	{
		RUS_VDV_SL_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"		
	};
	respawnMagazines[] = 
	{
		RUS_VDV_SL_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"		
	};
};

//Combat Medics
class SOR_OPFor_Medic_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Medic";
	icon = "iconManMedic";
	backpack = "SOR_OPFor_Medic_Pack_VDV";
	weapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put"};
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

class SOR_OPFor_Havoc_Medic_VDV : SOR_OPFor_Medic_VDV
{
	displayName = "Havoc Medic";
	backpack = "SOR_OPFor_PJMedicPack_VDV";
};

class SOR_OPFor_PKM_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKM";
	icon = "iconManMG";	
	backpack = "";
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green",
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

class SOR_OPFor_PKP_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "AutoRifleman PKP";
	icon = "iconManMG";	
	backpack = "";
	weapons[] = {"rhs_weap_pkp","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"};
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green",
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"rhs_100Rnd_762x54mmR_green",
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

class SOR_OPFor_Grenadier_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	backpack = "";
	weapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_gp25_dtk","Throw","Put"};
	magazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		RUS_VDV_GL_Mags		
	};
	respawnMagazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		RUS_VDV_GL_Mags		
	};
};

class SOR_OPFor_Rifleman_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman AT Ammo Bearer (PKP)";
	backpack = "";
	magazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"
	};
};					

class SOR_OPFor_Rilfeman_Ammo_VDV : SOR_OPFor_Rifleman_VDV	
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman Ammo Bearer (PKM)";
	backpack = "";
	magazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"
	};
	respawnMagazines[] = 
	{
		RUS_VDV_Standard_Mags,
		RUS_VDV_Std_Pistol,
		"rhs_100Rnd_762x54mmR_green"
	};
};
	
//Heli Pilot & CO-Pilot
class SOR_OPFor_HeliPilot_VDV : SOR_OPFor_Base_VDV
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
	weapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw","Put","Laserdesignator_02"};
	Items[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};  
	RespawnItems[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip}; 
	magazines[] = 
	{
		RUS_VDV_Std_Pistol,
		"Laserbatteries",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white"
	};
	respawnMagazines[] =
	{
		RUS_VDV_Std_Pistol,
		"Laserbatteries",
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
class SOR_OPFor_HeliCrew_VDV : SOR_OPFor_HeliPilot_VDV
{
	displayName = "Heli Crew";
	backpack = "";
	weapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"rhs_weap_ak74m_folded_dtk","rhsusf_weap_m9","Throw","Put","Laserdesignator_02"};
	magazines[] = 
	{
		RUS_VDV_Std_Pistol,
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_30Rnd_545x39_AK_green",
		"rhs_mag_rdg2_white",
		"rhs_mag_rdg2_white",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		RUS_VDV_Std_Pistol,
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
class SOR_OPFor_JetPilot_VDV : SOR_OPFor_HeliPilot_VDV
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
class SOR_OPFor_MEVPilot_VDV : SOR_OPFor_HeliPilot_VDV
{
	displayName = "MEV Pilot";
};

class SOR_OPFor_ParaJumper_VDV : SOR_OPFor_Medic_VDV
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_AIR";
	vehicleclass = "SOR_OPFor_Infantry_AIR";
	displayName = "Para Jumper";
	backpack = "SOR_OPFor_PJMedicPack_VDV";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 		
	weapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_1p63","Throw","Put","Laserdesignator_02"};
	magazines[] = {RUS_VDV_Standard_Mags,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_Standard_Mags,"Laserbatteries"};
	Items[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};  
	RespawnItems[] = {RUS_VDV_Standard_Meds,RUS_VDV_SL_Equip};  
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
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1)) && (player isKindOf 'SOR_OPFor_ParaJumper_VDV')";
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
class SOR_OPFor_ReconLeader_VDV : SOR_OPFor_Base_VDV	
{
	scope = 2;
	scopeCurator = 2;
	uniformClass = "rhs_uniform_vdv_emr";
	displayName = "Recon Lead";
	accuracy = 3.5;
	cost = 500000;
	camouflage = 0.6;
	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_ak74m_camo","rhs_weap_rpg26","Throw","Put","Laserdesignator_02"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","rhs_weap_rpg26","Throw","Put","Laserdesignator_02"};
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   
	magazines[] = {RUS_VDV_Recon_Mags,"Laserbatteries"};
	respawnMagazines[] = {RUS_VDV_Recon_Mags,"Laserbatteries"};
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
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1)) && (player isKindOf 'SOR_OPFor_ReconLeader_VDV')";
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

class SOR_OPFor_ReconJTAC_VDV : SOR_OPFor_ReconLeader_VDV	
{
	icon =  "iconMan";
	backpack = "tf_mr3000_rhs";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};		
};

class SOR_OPFor_ReconRifleman_VDV : SOR_OPFor_ReconLeader_VDV	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_camo","Throw","Put","rhs_pdu4"};
	magazines[] = {RUS_VDV_Recon_Mags};						
	respawnMagazines[] = {RUS_VDV_Recon_Mags};	
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_OPFor_MechCrew_VDV : SOR_OPFor_Base_VDV
{
	scope = 2;
	scopeCurator = 2;
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_MECH";
	vehicleclass = "SOR_OPFor_Infantry_MECH";
	displayName = "Mechanised Gunner";
	backpack = "";
	weapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_makarov_pmm","Throw", "Put"};
	magazines[] = {RUS_VDV_Std_Pistol};
	respawnMagazines[] = {RUS_VDV_Std_Pistol};
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

class SOR_OPFor_MechOperator_VDV : SOR_OPFor_MechCrew_VDV
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
		RUS_VDV_Std_Pistol
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
		RUS_VDV_Std_Pistol
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

class SOR_OPFor_MechCrewCommander_VDV : SOR_OPFor_MechOperator_VDV
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_OPFor_Mech_Radio";
	cost = 100000;
};	

class SOR_OPFor_MechDriver_VDV : SOR_OPFor_MechCrew_VDV
{
	displayName = "Mechanised Driver";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
};	

//HMG Team
class SOR_OPFor_HMGActual_VDV : SOR_OPFor_Actual_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_HMGGunner_VDV : SOR_OPFor_Rifleman_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_DShkM_Gun_Bag";
};	

class SOR_OPFor_HMGCarrier_VDV : SOR_OPFor_Rifleman_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_DShkM_TripodLow_Bag";
};

class SOR_OPFor_HMGRFL_VDV : SOR_OPFor_Grenadier_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};	

//Mortar Team
class SOR_OPFor_MORActual_VDV : SOR_OPFor_Actual_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_mr3000_rhs";
};

class SOR_OPFor_MORGunner_VDV : SOR_OPFor_Rifleman_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "RHS_Podnos_Gun_Bag";
};	

class SOR_OPFor_MORCarrier_VDV : SOR_OPFor_Rifleman_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "RHS_Podnos_Bipod_Bag";
};

class SOR_OPFor_MORRFL_VDV : SOR_OPFor_Grenadier_VDV
{
	vehicleclass = "SOR_OPFor_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_OPFor_GD_Pack_VDV";
};		

//Repair Team
class SOR_OPFor_Engineer_Teamleader_VDV : SOR_OPFor_Base_VDV
{
	editorSubcategory = "SOR_OPFor_SubCat_Infantry_Support";
	vehicleclass = "SOR_OPFor_Infantry_Support";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	magazines[] = 
	{
		RUS_VDV_Standard_Mags
	};
	respawnMagazines[] = 
	{
		RUS_VDV_Standard_Mags
	};
	Items[] = 
	{
		"ACE_EntrenchingTool",
		RUS_VDV_Standard_Meds
	};
	RespawnItems[] =
	{
		"ACE_EntrenchingTool",
		RUS_VDV_Standard_Meds
	};	
	linkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Repair",
		"H_HelmetSpecB_paint2", 
		"rhs_googles_clear",
		RUS_VDV_Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Repair",
		"H_HelmetSpecB_paint2",
		"rhs_googles_clear",
		RUS_VDV_Standard_Equipment
	};	
};	

class SOR_OPFor_Engineer_VDV : SOR_OPFor_Engineer_Teamleader_VDV
{
	displayName = "Engineer";
	backpack = "SOR_OPFor_Repair_Pack_VDV";
};