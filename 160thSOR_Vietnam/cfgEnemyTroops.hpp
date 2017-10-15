/*
	Name: 160th SOR Mod
	Author: Scooby & Yettie
	Date: 28/09/15 01:09
	Description: cfgTroopsWoodland.hpp
*/
//////////////////////////////
//SOR Nam Faction Units//
//////////////////////////////		
class I_C_Soldier_Bandit_2_F;

class SOR_Nam_VC : I_C_Soldier_Bandit_2_F
{
	editorCategory = "SOR_Cat_Faction_VC";
	faction = "SOR_Faction_VC";
	backpack = "";
	side = 0;
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
	displayName = "VC LMG";
	backpack = "";
	side = 0;
	uniformClass = "VC_Uniform_1";
	model="\A3\characters_F\OPFOR\o_officer.p3d";
	modelsides[] = {3,2,1,0};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\vc3.paa"};
	weapons[] = {"arifle_AKM_F", "Throw", "put"};
	respawnweapons[] = {"arifle_AKM_F", "Throw", "put"};
	
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
	displayName = "VC LMG";
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