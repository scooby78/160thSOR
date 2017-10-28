/*
	Name: 160th SOR Mod
	Author: Scooby & Yettie
	Date: 28/09/15 01:09
	Description: cfgTroopsWoodland.hpp
*/
//////////////////////////////
//SOR Nam Faction Units//
//////////////////////////////		
class O_Soldier_GL_F;

class SOR_Nam_VC : O_Soldier_GL_F
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	identityTypes[] = {"LanguageCHI_F","Head_Asian","NoGlasses"};
	backpack = "";
	side = 0;
	allowedFacewear[] = {};
	displayName = "VC Commander";
	uniformClass = "VC_Uniform_1";
	model="\A3\characters_F\OPFOR\o_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\vc3.paa"};
	weapons[] = {"arifle_AKM_F", "Throw", "put"};
	respawnweapons[] = {"arifle_AKM_F", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"vietsh_Head",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"vietsh_Head", 
		"V_TacChestrig_cbr_F", 
		Standard_Equipment_Nam
	};   
};
	
class SOR_Nam_VC_1 : SOR_Nam_VC
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "VC Soldier PKM";
	backpack = "";
	side = 0;
	uniformClass = "VC_Uniform_1";
	model="\A3\characters_F\OPFOR\o_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\vc3.paa"};
	weapons[] = {"rhs_weap_pkm", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_pkm", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_AR_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_AR_Nam
	};
	linkedItems[] = 
	{	
		"V_BandollierB_khk", 
		"vietsh_Head",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_BandollierB_khk", 
		"vietsh_Head", 
		Standard_Equipment_Nam
	};   
};

class SOR_Nam_VC_2 : SOR_Nam_VC
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "VC Soldier Kar98";
	backpack = "";
	side = 0;
	weapons[] = {"rhs_weap_kar98k", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_kar98k", "Throw", "put"};
	magazines[]=
	{
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k"
	};
	respawnMagazines[]=
	{
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k"
	};
	linkedItems[] = 
	{	
		"rhs_6sh46", 
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"rhs_6sh46", 
		Standard_Equipment_Nam
	};   
};
class SOR_Nam_VC_3 : SOR_Nam_VC
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "VC Soldier GL";
	backpack = "";
	side = 0;
	weapons[] = {"rhs_weap_akm_gp25", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_akm_gp25", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_GL_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_GL_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"vietsh_Head",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"vietsh_Head",
		Standard_Equipment_Nam
	};   
};
//NVA

class SOR_Nam_NVA : SOR_Nam_VC
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	backpack = "";
	side = 0;
	displayName = "NVA Soldier AKM";
	uniformClass = "NVA_Uniform";
	model="\A3\characters_F\OPFOR\o_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\NVA.paa"};
	weapons[] = {"arifle_AKM_F", "Throw", "put"};
	respawnweapons[] = {"arifle_AKM_F", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};   
};

class SOR_Nam_NVA_2 : SOR_Nam_NVA
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "NVA Soldier PKM";
	backpack = "";
	side = 0;
	weapons[] = {"rhs_weap_pkm", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_pkm", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_AR_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_AR_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F",
		"rhsgref_M56",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};   
};
class SOR_Nam_NVA_3 : SOR_Nam_NVA
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "NVA Soldier Kar98";
	backpack = "";
	side = 0;
	weapons[] = {"rhs_weap_kar98k", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_kar98k", "Throw", "put"};
	magazines[]=
	{
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k"
	};
	respawnMagazines[]=
	{
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k",
		"rhsgref_5Rnd_792x57_kar98k"
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	}; 
};
class SOR_Nam_NVA_4 : SOR_Nam_NVA
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "NVA Soldier RPG";
	backpack = "SOR_Nam_RPG";
	side = 0;
	weapons[] = {"arifle_AKM_F", "Throw", "put"};
	respawnweapons[] = {"arifle_AKM_F", "Throw", "put"};
	magazines[]=
	{
 Standard_Mags_VC_Nam
	};
	respawnMagazines[]=
	{
 Standard_Mags_VC_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};  	
};
class SOR_Nam_NVA_5 : SOR_Nam_NVA
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	displayName = "NVA Soldier AT";
	backpack = "SOR_Nam_RPG";
	side = 0;
	weapons[] = {"rhs_weap_akm_gp25","launch_RPG7_F", "Throw", "put"};
	respawnweapons[] = {"rhs_weap_akm_gp25","launch_RPG7_F", "Throw", "put"};
	magazines[]=
	{
	Standard_Mags_VC_Nam
	};
	respawnMagazines[]=
	{
	Standard_Mags_VC_Nam
	};
	linkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};              
	respawnLinkedItems[] = 
	{	
		"V_TacChestrig_cbr_F", 
		"rhsgref_M56",
		Standard_Equipment_Nam
	};   
};
