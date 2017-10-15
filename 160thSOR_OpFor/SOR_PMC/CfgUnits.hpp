/*
	Name: PMC
	Author: Yettie
	Date: 25/04/17
	Description: CfgUnits.hpp
*/

class B_Soldier_A_F; 

class PMC_Commander_D: B_Soldier_A_F
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	side = 2; 
	displayName = "PMC Commander Desert";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction = "SOR_FACTION_PMC";
	Backpack = "";
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "SOR_PMC_DESERT"; 
	hiddenSelections[] = {"Camo"}; 
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_PMC\data\SOR_milsec1_u_co.paa"};
	weapons[] = {"rhs_weap_ak74m_zenitco01","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m_zenitco01","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	Items[] = {"MilSec_Vest_1","rhsusf_opscore_ut"};  //define_macros.hpp
	RespawnItems[] = {"MilSec_Vest_1","rhsusf_opscore_ut"}; //define_macros.hpp
	magazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",		
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",		
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		"MilSec_Vest_1",
		"rhsusf_opscore_ut"
	};
	respawnLinkedItems[] = 
	{
		"MilSec_Vest_1",
		"rhsusf_opscore_ut"
	};
};

class PMC_Grenadier_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Grenadier Desert"; 
	weapons[] = {"SMA_AUG_EGLM","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"SMA_AUG_EGLM","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {};
	respawnMagazines[] = {}; // match

};

class PMC_Gunner_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Gunner Desert";
	Backpack = "B_Carryall_khk";
	weapons[] = {"rhs_weap_m249","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_m249","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_M_SAW"};
	respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_M_SAW"}; // match

};

class PMC_AT_Rifleman_D: PMC_Grenadier_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC AT Rifleman Desert"; 
	weapons[] = {"SMA_AUG_A3_F","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"SMA_AUG_A3_F","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
	respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"}; // match magazines[]

};

	class PMC_MM_D: PMC_Grenadier_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Marksman Desert"; 
	weapons[] = {"rhs_weap_XM2010PMC","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_XM2010PMC","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"}; 
	respawnMagazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"}; // match magazines[]

};
	class PMC_Soldier_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier M27 Desert"; 
	weapons[] = {"rhs_weap_m27iar","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_m27iar","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"}; 
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"}; // match magazines[]

};
	class PMC_Soldier2_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier M14 Desert"; 
	weapons[] = {"srifle_DMR_06_olive_F","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"srifle_DMR_06_olive_F","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"}; 
	respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"}; // match magazines[]

};
	class PMC_Soldier3_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier Shotgun Desert"; 
	weapons[] = {"rhs_weap_M590_8RD","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_M590_8RD","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug"}; 
	respawnMagazines[] = {"rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug"}; // match magazines[]
};
	class PMC_Sniper_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	Backpack = "";
	displayName = "PMC Sniper Desert"; 
	weapons[] = {"PMC_weap_M107","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"PMC_weap_M107","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33"}; 
	respawnMagazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33"};
};
	class PMC_Pilot_D: PMC_Commander_D {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Pilot"; 
	weapons[] = {"rhsusf_weap_MP7A2","Throw","Put"}; 
	respawnWeapons[] = {"rhsusf_weap_MP7A2","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"}; 
	respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"}; // match magazines[]

};

class PMC_Commander_W: B_Soldier_A_F
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	side = 2; 
	displayName = "PMC Commander Woodland";	
	editorCategory = "SOR_PMC_Cat_Faction";
	faction = "SOR_FACTION_PMC";
	Backpack = "";
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	uniformClass = "SOR_PMC_Woodland"; 
	hiddenSelections[] = {"Camo"}; 
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_PMC\data\SOR_milsec2_u_co.paa"};
	weapons[] = {"rhs_weap_ak74m_zenitco01","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m_zenitco01","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",		
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK",		
		"Laserbatteries"
	};
	linkedItems[] = 
	{

		"MilSec_Vest_2",
		"rhsusf_opscore_mar_fg_pelt"
	};
	respawnLinkedItems[] = 
	{
		"MilSec_Vest_2",
		"rhsusf_opscore_mar_fg_pelt"
	};
};
class PMC_Grenadier_W: PMC_Commander_W {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Grenadier Woodland"; 
	weapons[] = {"SMA_AUG_EGLM","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"SMA_AUG_EGLM","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {};
	respawnMagazines[] = {}; // match

};

class PMC_Gunner_W: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Gunner Woodland";
	Backpack = "B_Carryall_khk";
	weapons[] = {"rhs_weap_m249","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_m249","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_M_SAW"};
	respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_M_SAW"}; // match

};

class PMC_AT_Rifleman_W: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC AT Rifleman Woodland"; 
	weapons[] = {"SMA_AUG_A3_F","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"SMA_AUG_A3_F","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"};
	respawnMagazines[] = {"SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1","SMA_30Rnd_556x45_M855A1"}; // match magazines[]

};

	class PMC_MM_W: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Marksman Woodland"; 
	weapons[] = {"rhs_weap_XM2010PMC","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_XM2010PMC","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"}; 
	respawnMagazines[] = {"rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"}; // match magazines[]

};
	class PMC_Soldier_W: PMC_Commander_W {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier M27 Woodland"; 
	weapons[] = {"rhs_weap_m27iar","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_m27iar","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"}; 
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"}; // match magazines[]

};
	class PMC_Soldier2_W: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier M14 Woodland"; 
	weapons[] = {"srifle_DMR_06_olive_F","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"srifle_DMR_06_olive_F","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"}; 
	respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"}; // match magazines[]

};
	class PMC_Soldier3_w: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "PMC Soldier Shotgun Woodland"; 
	weapons[] = {"rhs_weap_M590_8RD","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_M590_8RD","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug"}; 
	respawnMagazines[] = {"rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug"}; // match magazines[]

};
	class PMC_Sniper_W: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	Backpack = "";
	displayName = "PMC Sniper Woodland"; 
	weapons[] = {"PMC_weap_M107","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"PMC_weap_M107","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33"}; 
	respawnMagazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33"};

};
	class PMC_CPP1: PMC_Commander_w {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	Backpack = "";
	displayName = "PMC CPPT MP5"; 
	weapons[] = {"SMG_05_F","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"SMG_05_F","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"}; 
	respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
	linkedItems[] = 
	{
		"rhs_googles_black",
		"rhsusf_opscore_bk",
		"V_PlateCarrier1_blk"
	};
	respawnLinkedItems[] = 
	{
		"rhs_googles_black",
		"rhsusf_opscore_bk",
		"V_PlateCarrier1_blk"
	};
};
	class PMC_CPP2: PMC_CPP1 {
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	Backpack = "";
	displayName = "PMC CPPT MP7"; 
	weapons[] = {"rhsusf_weap_MP7A2","hgun_Pistol_heavy_01_F","Throw","Put"}; 
	respawnWeapons[] = {"rhsusf_weap_MP7A2","hgun_Pistol_heavy_01_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP"}; 
	respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_JHP"};

};

