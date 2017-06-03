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

////////////////////////////		    
//SOR Desert Faction Units//
////////////////////////////

//Squad Actual	
class SOR_Actual_D : B_officer_F
{
	editorPreview = "\160thSOR\data\SOR_Actual_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "Squad Actual";
	accuracy = 3.5;
	backpack = "tf_rt1523g_rhs";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		SL_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		SL_Mags,
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

//Commander		
class SOR_Commander_D : B_officer_F
{
	editorPreview = "\160thSOR\data\SOR_Commander_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "Havoc Commander";
	accuracy = 3.5;
	backpack = "tf_rt1523g_rhs";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip
	};  
	RespawnItems[] = 
	{
		Standard_Meds,
		SL_Equip
	};
	magazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

//Mechanised Commander 
class SOR_MechCommand_D : SOR_Commander_D
{
	editorPreview = "\160thSOR\data\SOR_MechCommand_D.jpg";
	editorSubcategory = "SOR_SubCat_Infantry_MECH";
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "Mechanised Commander";
	uniformClass = "U_B_CombatUniform_mcam";
	weapons[] = {"160_weap_inf_basic", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_basic", "160_weap_inf_handgun", "Throw", "Put", "Laserdesignator"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Mech_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};	

//Air Commander 
class SOR_AirCommand_D : SOR_Commander_D
{
	editorPreview = "\160thSOR\data\SOR_AirCommand_D.jpg";
	editorSubcategory = "SOR_SubCat_Infantry_AIR";
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "Air Commander";
	backpack = "tf_anarc210";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	weapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		"B_UavTerminal",
		Standard_Meds,
		SL_Equip
	};  
	RespawnItems[] = 
	{
		"B_UavTerminal",
		Standard_Meds,
		SL_Equip
	};
	magazines[] = 
	{
		Std_Pistol,
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Std_Pistol,
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		"Laserbatteries"
	};
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Air_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};
};	

//Zeus unit
class SOR_ZeusCommand_D : SOR_Commander_D
{
	displayName = "Zeus";
	cost = 10;
	editorPreview = "\160thSOR\data\SOR_ZeusCommand_D.jpg";
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};	

//Platoon RTO
class SOR_RTO_D : B_Soldier_F
{
	editorPreview = "\160thSOR\data\SOR_RTO_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	displayName = "RTO";		
	uniformClass = "U_B_CombatUniform_mcam";
	backpack = "SOR_RTO_Pack_D";
	weapons[] = {"160_weap_inf_gl","160_weap_inf_handgun","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_gl","160_weap_inf_handgun","Throw","Put","Laserdesignator"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};
	
//Teamleader	
class SOR_Teamleader_D : B_Soldier_TL_F
{
	editorPreview = "\160thSOR\data\SOR_Teamleader_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	displayName = "Team Leader";
	uniformClass = "U_B_CombatUniform_mcam";
	accuracy = 3.5;		
	backpack = "SOR_M249_Pack_D";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","Throw","Put","Rangefinder"};
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
	magazines[] = 
	{
		SL_Mags,
		Std_Pistol		
	};
	respawnMagazines[] = 
	{
		SL_Mags,
		Std_Pistol				
	};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};		
};

class SOR_Teamleader2_D : SOR_Teamleader_D
{
	displayName = "Team Leader 2";
};

//Combat Medics
class SOR_Medic_D : B_medic_F
{
	editorPreview = "\160thSOR\data\SOR_Medic_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	displayName = "Combat Medic";
	uniformClass = "U_B_CombatUniform_mcam";
	backpack = "SOR_Medic_Pack_D";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun", "Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","Throw", "Put"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Med_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_HMedic_D : SOR_Medic_D
{
	displayName = "Havoc Medic";
	backpack = "SOR_PJMedicPack_D";
};

// Auto rifleman
class SOR_M249AR_D : B_soldier_AR_F
{
	editorPreview = "\160thSOR\data\SOR_M249AR_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "AutoRifleman M249";
	backpack = "";
	weapons[] = {"160_weap_inf_AR1", "160_weap_inf_handgun", "Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_AR1", "160_weap_inf_handgun","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};		
	magazines[] =
	{
		Standard_Mags_AR1
	};
	respawnMagazines[] =
	{
		Standard_Mags_AR1
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_M240AR_D : B_soldier_AR_F
{
	editorPreview = "\160thSOR\data\SOR_M240AR_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "AutoRifleman M240";
	backpack = "";
	weapons[] = {"160_weap_inf_AR2", "160_weap_inf_handgun", "Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_AR2", "160_weap_inf_handgun","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};	
	magazines[] =
	{
		Standard_Mags_AR2
	};
	respawnMagazines[] =
	{
		Standard_Mags_AR2
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_Grenadier_D : B_Soldier_GL_F
{
	editorPreview = "\160thSOR\data\SOR_Grenadier_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	backpack = "";
	weapons[] = {"160_weap_inf_gl","160_weap_inf_handgun","Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_gl","160_weap_inf_handgun","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		GL_Mags		
	};
	respawnMagazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		GL_Mags		
	};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_Rifleman_D : B_Soldier_F
{
	editorPreview = "\160thSOR\data\SOR_Rifleman_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "Rifleman AT Ammo Bearer (M249)";
	backpack = "";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","160_weap_inf_RPG","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","160_weap_inf_RPG","Throw","Put","Rangefinder"};
	Items[] = 
	{
		"ACE_EntrenchingTool",
		Standard_Meds
	};
	RespawnItems[] =
	{
		"ACE_EntrenchingTool",
		Standard_Meds
	};
	magazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		Standard_Mags_AR1_ammo
	};
	respawnMagazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		Standard_Mags_AR1_ammo
	};	
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};					

class SOR_Rifleman_ammo_D : SOR_Rifleman_D	
{
	displayName = "Rifleman AT Ammo Bearer (M240)";
	backpack = "";
	weapons[] = {"160_weap_inf_std","160_weap_inf_handgun","160_weap_inf_RPG","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_std","160_weap_inf_handgun","160_weap_inf_RPG","Throw","Put","Rangefinder"};
	magazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		Standard_Mags_AR2_ammo
	};
	respawnMagazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		Standard_Mags_AR2_ammo
	};	
};
	
class SOR_RiflemanAT_D : B_soldier_AT_F
{
	editorPreview = "\160thSOR\data\SOR_RiflemanAT_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "Rifleman AT";
	backpack = "SOR_RFLAT_Pack_D";
	weapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","160_weap_inf_RPG", "Throw", "Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_std", "160_weap_inf_handgun","160_weap_inf_RPG","Throw", "Put","Rangefinder"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};	
		
//Heli Pilot & CO-Pilot
class SOR_HeliPilot_D : B_Pilot_F
{
	editorPreview = "\160thSOR\data\SOR_HeliPilot_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_AIR";
	vehicleclass = "SOR_Infantry_AIR";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Heli Pilot";
	backpack = "tf_rt1523g_rhs";
	weapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};	
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Air_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

//Heli Crew Engineers
class SOR_HeliCrew_D : B_crew_F
{
	editorPreview = "\160thSOR\data\SOR_HeliCrew_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_AIR";
	vehicleclass = "SOR_Infantry_AIR";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	displayName = "Heli Crew";
	backpack = "SOR_Repair_Pack_D";
	uavHacker = 1; // allows UAV control		
	engineer = 1; // allows unit to repair 
	weapons[] = {"160_weap_inf_basic", "160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_basic", "160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		Standard_Mags_crew
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		Standard_Mags_crew
	};		
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O", 
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O", 
		Airborne_Equipment
	};
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Air_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

//Jet Pilots
class SOR_JetPilot_D : B_Pilot_F
{
	editorPreview = "\160thSOR\data\SOR_JetPilot_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_AIR";
	vehicleclass = "SOR_Infantry_AIR";
	faction = SOR_Faction_D;
	displayName = "Jet Pilot";		
	backpack = "B_Parachute";
	weapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	linkedItems[] = 
	{	
		"V_Rangemaster_belt",
		"H_PilotHelmetFighter_B",
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetFighter_B",
		Airborne_Equipment
	};
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Air_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};
	
// MEV Pilot & CO-Pilot
class SOR_MEVPilot_D : 	SOR_HeliPilot_D
{
	editorPreview = "\160thSOR\data\SOR_MEVPilot_D.jpg";
	displayName = "MEV Pilot";
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
		"ItemGPS",
		Airborne_Equipment
	};   
};
	
class SOR_ParaJumper_D : B_medic_F
{
	editorPreview = "\160thSOR\data\SOR_ParaJumper_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_AIR";
	vehicleclass = "SOR_Infantry_AIR";
	faction = SOR_Faction_D;
	displayName = "Para Jumper";
	backpack = "SOR_PJMedicPack_D";
	uniformClass = "U_B_CombatUniform_mcam_vest";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 		
	weapons[] = {"160_weap_inf_pj", "160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_pj", "160_weap_inf_handgun","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip,"rhsusf_acc_ACOG"};  
	RespawnItems[] = {Standard_Meds,SL_Equip,"rhsusf_acc_ACOG"}; 
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
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"rhs_googles_black", 
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"rhs_googles_black", 
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Med_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

//Recon Units
class SOR_ReconLeader_D : B_recon_TL_F	
{
	editorPreview = "\160thSOR\data\SOR_ReconLeader_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_Recon";
	vehicleclass = "SOR_Infantry_Recon";
	faction = SOR_Faction_D;
	uniformClass = "U_B_CombatUniform_mcam";
	backpack = "tf_anarc210";
	displayName = "Recon Lead";
	accuracy = 3.5;
//		cost = 500000;
//		camouflage = 0.6;
//		threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Laserdesignator"};
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
			condition = "((getPosVisual player) select 2 > 50) && SOR_ParaJump_Active";
			priority = 8;
			showWindow = 1;
			hideOnUse = 1;
			radius= 1;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_parajump; SOR_ParaJump_Active = false;";
		};
	};	
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};		
};

class SOR_ReconJTAC_D : SOR_ReconLeader_D	
{
	icon =  "iconMan";
	backpack = "tf_anarc210";
	displayName = "Recon JTAC";	
	weapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};		
};

class SOR_ReconRifleman_D : SOR_ReconLeader_D	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	backpack = "";
	weapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};
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
	weapons[] = {"160_weap_inf_recon_AR", "Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_recon_AR", "Throw", "Put"};
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
		"rhs_200rnd_556x45_M_SAW",
		"rhs_200rnd_556x45_M_SAW"	
	};
	respawnMagazines[] =
	{
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_200rnd_556x45_M_SAW",
		"rhs_200rnd_556x45_M_SAW"	
	};			
};	

class SOR_ReconSpotter_D : SOR_ReconLeader_D	
{
	icon =  "iconMan";
	displayName = "Recon Spotter";
	weapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_recon_rifle","Throw","Put","Rangefinder"};
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
class SOR_Sniper_D : B_sniper_F		
{
	editorPreview = "\160thSOR\data\SOR_Sniper_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_Recon";
	vehicleclass = "SOR_Infantry_Recon";
	faction = SOR_Faction_D;
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	weapons[] = {"160_weap_inf_sniper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_sniper","Throw","Put","Laserdesignator"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_Spotter_D : B_spotter_F
{
	editorPreview = "\160thSOR\data\SOR_Spotter_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_Recon";
	vehicleclass = "SOR_Infantry_Recon";
	faction = SOR_Faction_D;
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "SOR_Spotter_Radio";
	weapons[] = {"160_weap_inf_spotter","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_spotter","Throw","Put","Rangefinder"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Inf_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};		
};

//Mechanised Crew
class SOR_MechCrew_D : B_crew_F
{
	editorPreview = "\160thSOR\data\SOR_MechCrew_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_MECH";
	vehicleclass = "SOR_Infantry_MECH";
	faction = SOR_Faction_D;
	displayName = "Mechanised Gunner";
	uniformClass = "U_B_CombatUniform_mcam"; 
	backpack = "";
	weapons[] = {"160_weap_inf_handgun","Throw", "Put"};
	respawnWeapons[] = {"160_weap_inf_handgun","Throw", "Put"};
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
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Mech_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_MechOperator_D : SOR_MechCrew_D
{
	editorPreview = "\160thSOR\data\SOR_MechOperator_D.jpg";
	displayName = "Mechanised Operator";
	backpack = "SOR_Mech_Radio";
	weapons[] = {"160_weap_inf_basic","160_weap_inf_handgun","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_weap_inf_basic","160_weap_inf_handgun","Throw","Put","Laserdesignator"};
	magazines[] = 	
	{
		Standard_Mags_crew,
		Std_Pistol
	};						
	respawnMagazines[] =
	{
		Standard_Mags_crew,
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
	Items[] =
	{
		Standard_Meds,
		"ACE_epinephrine",
		"ACE_epinephrine"
	};  
	RespawnItems[] = 
	{
		Standard_Meds,
		"ACE_epinephrine",
		"ACE_epinephrine"
	};
};	

class SOR_MechDriver_D : SOR_MechCrew_D
{
	displayName = "Mechanised Driver";
	backpack = "SOR_Repair_Pack_D";
	icon = "iconManEngineer";
	engineer = 1; // allows unit to repair 	
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Mech_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP; [(_this select 0)] spawn SOR_fnc_ExternalView;";	
	};	
};	

//HMG Team
class SOR_HMGActual_D : SOR_Actual_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_rt1523g_rhs";
};

class SOR_HMGGunner_D : SOR_Rifleman_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};	

class SOR_HMGCarrier_D : SOR_Rifleman_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_HMGRFL_D : SOR_Grenadier_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_GD_Pack_D";
};	

//Mortar Team
class SOR_MORActual_D : SOR_Actual_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_rt1523g_rhs";
};

class SOR_MORGunner_D : SOR_Rifleman_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "B_Mortar_01_weapon_F";
};	

class SOR_MORCarrier_D : SOR_Rifleman_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "B_Mortar_01_support_F";
};

class SOR_MORRFL_D : SOR_Grenadier_D
{
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_GD_Pack_D";
};	

//Repair Team
class SOR_Engineer_Teamleader_D : B_engineer_F
{
	editorPreview = "\160thSOR\data\SOR_Engineer_D.jpg";
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry_Support";
	vehicleclass = "SOR_Infantry_Support";
	faction = SOR_Faction_D;		
	displayName = "Engineer Team Leader";
	uniformClass = "U_B_CombatUniform_mcam";
	backpack = "tf_anarc210";
	weapons[] = {"160_weap_inf_basic","Throw","Put","Rangefinder"};
	respawnWeapons[] = {"160_weap_inf_basic","Throw","Put","Rangefinder"};
	magazines[] = 
	{
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		Standard_Mags		
	};
	respawnMagazines[] = 
	{
		"rhs_mag_m18_green",
		"rhs_mag_m18_green",
		Standard_Mags		
	};
	Items[] = 
	{
		"ACE_EntrenchingTool",
		Standard_Meds
	};
	RespawnItems[] =
	{
		"ACE_EntrenchingTool",
		Standard_Meds
	};
	linkedItems[] = 
	{	
		"ItemGPS",
		"V_PlateCarrierGL_mtp",
		"H_HelmetSpecB_paint2", 
		"rhs_googles_clear",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"ItemGPS",
		"V_PlateCarrierGL_mtp",
		"H_HelmetSpecB_paint2",
		"rhs_googles_clear",
		Standard_Equipment
	};
	class eventHandlers
	{
		init="_null = [[(_this select 0), '160thSOR_Eng_Badge'], 'BIS_fnc_setUnitInsignia', nil, true, true] call BIS_fnc_MP;";	
	};	
};

class SOR_Engineer_D : SOR_Engineer_Teamleader_D
{
	displayName = "Engineer";
	backpack = "";
	magazines[] = 
	{
		"rhs_mag_m18_green",
		Standard_Mags		
	};
	respawnMagazines[] = 
	{
		"rhs_mag_m18_green",
		Standard_Mags		
	};	
};