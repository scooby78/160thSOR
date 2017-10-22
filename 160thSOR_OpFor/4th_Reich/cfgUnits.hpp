/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgUnits.hpp
*/

class O_Soldier_GL_F; 
class O_recon_JTAC_F; 


class Reich_Commander: O_Soldier_GL_F
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Commander"; 
	identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
	genericNames = "NATOMen"; 
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	modelSides[] = {0,1,2, 3};
	uniformClass = "3COU"; 
	hiddenSelections[] = {"Camo", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\160thSOR_OpFor\4th_Reich\data\S_3CO_UC.paa"}; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; ///match weapons[]
	Items[] = {Reich_Standard_Meds,Reich_SL_Equip};  //define_macros.hpp
	RespawnItems[] = {Reich_Standard_Meds,Reich_SL_Equip}; //define_macros.hpp
	magazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol, 		//define_macros.hpp
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol,			//define_macros.hpp
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"3COV",
		"3COH"
	};
	respawnLinkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"3COV",
		"3COH"
	};
};

class Reich_Commander_W: O_Soldier_GL_F
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Commander woodland"; 
	identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
	genericNames = "NATOMen"; 
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	modelSides[] = {0,1,2, 3};
    uniformClass = "GERWU"; 
    hiddenSelections[] = {"Camo", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\160thSOR_OpFor\4th_Reich\Data\S_GERW_UC.paa"};
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; ///match weapons[]
	Items[] = {Reich_Standard_Meds,Reich_SL_Equip};  //define_macros.hpp
	RespawnItems[] = {Reich_Standard_Meds,Reich_SL_Equip}; //define_macros.hpp
	magazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol, 		//define_macros.hpp
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol,			//define_macros.hpp
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"GERWV",
		"GERH"
	};
	respawnLinkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"GERWV",
		"GERH"
	};
};
class Reich_Commander_S: O_Soldier_GL_F
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Commander Snow"; 
	identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
	genericNames = "NATOMen"; 
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	modelSides[] = {0,1,2,3};
    uniformClass = "GERWINU"; 
    hiddenSelections[] = {"Camo", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\160thSOR_OpFor\4th_Reich\Data\S_GERWIN_UC.paa"};
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; ///match weapons[]
	Items[] = {Reich_Standard_Meds,Reich_SL_Equip};  //define_macros.hpp
	RespawnItems[] = {Reich_Standard_Meds,Reich_SL_Equip}; //define_macros.hpp
	magazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol, 		//define_macros.hpp
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol,			//define_macros.hpp
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"WIN2H",
		"GERWINV",
		"G_Balaclava_blk"
	};
	respawnLinkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"WIN2H",
		"GERWINV",
		"G_Balaclava_blk"
	};
};


class Reich_Grenadier: Reich_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Grenadier"; 
	weapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_GL_Mags, Reich_SL_Mags};
	respawnMagazines[] = {Reich_GL_Mags, Reich_SL_Mags}; // match
};

class Reich_Grenadier_w: Reich_Commander_W 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Grenadier woodland"; 
	weapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_GL_Mags, Reich_SL_Mags};
	respawnMagazines[] = {Reich_GL_Mags, Reich_SL_Mags}; // match
};

class Reich_Grenadier_S: Reich_Commander_S 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Grenadier Snow"; 
	weapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MX_GL_Black_F_holo","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_GL_Mags, Reich_SL_Mags};
	respawnMagazines[] = {Reich_GL_Mags, Reich_SL_Mags}; // match
};

class Reich_Gunner: Reich_Grenadier 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	backpack = "reich_Desert_LMG_Pack";
	displayName = "Reich Gunner"; 
	weapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; 
	respawnWeapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
	respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"}; // match
};

class Reich_Gunner_W: Reich_Grenadier_w 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	backpack = "reich_woodland_LMG_Pack";
	displayName = "Reich Gunner woodland"; 
	weapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; 
	respawnWeapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
	respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"}; // match
};

class Reich_Gunner_S: Reich_Grenadier_S 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	backpack = "reich_snow_LMG_Pack";
	displayName = "Reich Gunner Snow"; 
	weapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; 
	respawnWeapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
	respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"}; // match
};

class Reich_AT_Rifleman: Reich_Grenadier 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich AT Rifleman"; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]

};

class Reich_AT_Rifleman_w: Reich_Grenadier_w 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich AT Rifleman woodland"; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
};
class Reich_AT_Rifleman_S: Reich_Grenadier_S 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich AT Rifleman Snow"; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","launch_NLAW_F","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
};

class Reich_Heavy_MG: Reich_Grenadier 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	backpack = "reich_Desert_MMG_Pack";
	displayName = "Reich HMG"; 
	weapons[] = {"MMG_02_sand_F","Throw","Put"}; 
	respawnWeapons[] = {"MMG_02_sand_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"130Rnd_338_Mag"};
	respawnMagazines[] = {"130Rnd_338_Mag"}; // match magazines[]
};

class Reich_Heavy_MG_w: Reich_Grenadier_w 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2;
	backpack = "reich_woodland_MMG_Pack"; // backpack
	displayName = "Reich HMG woodland"; 
	weapons[] = {"MMG_02_black_F","Throw","Put"}; 
	respawnWeapons[] = {"MMG_02_black_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"130Rnd_338_Mag"};
	respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"}; // match magazines[]
};

class Reich_Heavy_MG_S: Reich_Grenadier_S 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	backpack = "reich_Snow_MMG_Pack";
	displayName = "Reich HMG Snow"; 
	weapons[] = {"MMG_02_black_F","Throw","Put"}; 
	respawnWeapons[] = {"MMG_02_black_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"130Rnd_338_Mag"};
	respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"}; // match magazines[]
};

class Reich_MM: Reich_Grenadier 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Marksman"; 
	weapons[] = {"EN_arifle_MXM_Black_MM","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Black_MM","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
};

class Reich_MM_w: Reich_Grenadier_w 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Marksman woodland"; 
	weapons[] = {"EN_arifle_MXM_Black_MM","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Black_MM","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
};

class Reich_MM_S: Reich_Grenadier_S 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Marksman Snow"; 
	weapons[] = {"EN_arifle_MXM_Black_MM","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Black_MM","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
};

class Reich_Crew_Black: Reich_Grenadier 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Vehicle Crewman"; 
	backpack = ""; // backpack
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
	uniformClass = "Nazi_Crew_Black"; 
	hiddenSelections[] = {"Camo","Insignia"}; 
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_Crew_Black"}; 
	weapons[] = {"arifle_MXC_Black_F","Throw","Put"}; 
	respawnWeapons[] = {"arifle_MXC_Black_F","Throw","Put"}; ///match weapons[]
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags}; // match magazines[]
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","Trp_helm","G_Balaclava_TI_G_blk_F"};
	respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","Trp_helm","G_Balaclava_TI_G_blk_F"};
};

class Reich_Commander_Black: Reich_Crew_Black 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Vehicle Commander"; 
};

class SS_Commander: O_recon_JTAC_F  
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Commander"; 
	identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
	genericNames = "NATOMen"; 
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	backpack = ""; // backpack
	uniformClass = "SS_Uniform"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\SS_Uniform"};  
	weapons[] = {"SMG_05_F","Throw","Put"}; 
	respawnWeapons[] = {"SMG_05_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ACE_M84","ACE_M84"}; // match magazines[]
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrier2_blk","SS_helmet","rhs_ess_black"};
	respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrier2_blk","SS_helmet","rhs_ess_black"};	
};

class SS_Trooper_MG: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper MG"; 
	backpack = "reich_SS_MMG_Pack"; // backpack
	weapons[] = {"MMG_02_black_RCO_BI_F","hgun_Rook40_F","Throw","Put"}; 
	respawnWeapons[] = {"MMG_02_black_RCO_BI_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","ACE_M84","ACE_M84"}; // match magazines[]
};

class SS_Officer: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Officer"; 
	backpack = ""; // backpack
	weapons[] = {"rhsusf_weap_m9","Throw","Put"}; 
	respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","ACE_M84","ACE_M84"}; // match magazines[]
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Beret_blk","G_Aviator"};
	respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Beret_blk","G_Aviator"};	
};
class SS_Trooper_EXP: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper Explosive"; 
	weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"}; 
	respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ClaymoreDirectionalMine_Remote_Mag","ATMine_Range_Mag","rhsusf_m112_mag","rhsusf_m112_mag","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ClaymoreDirectionalMine_Remote_Mag","ATMine_Range_Mag","rhsusf_m112_mag","rhsusf_m112_mag","ACE_M84","ACE_M84"}; // match magazines[]

};

class SS_Trooper_MM: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper Marksman"; 
	weapons[] = {"srifle_GM6_SOS_F","hgun_Rook40_F","Throw","Put"}; 
	respawnWeapons[] = {"srifle_GM6_SOS_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84"}; // match magazines[]
};

class SS_Trooper_BR: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper Breacher"; 
	weapons[] = {"rhs_weap_M590_8RD","hgun_Rook40_F","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_M590_8RD","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
	magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
	respawnMagazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","ACE_M84","ACE_M84","ACE_M84","ACE_M84"}; // match magazines[]
};

class SS_Trooper_GD: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper Grenadier"; 
	weapons[] = {"rhs_weap_M320","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_M320","Throw","Put"};
	magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"};
	respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE"};// match magazines[]
};

class SS_Trooper_RM: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "SS Trooper Rifleman"; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","Throw","Put"};
	magazines[] = 
	{
		Reich_SL_Mags,			
		Reich_Std_Pistol, 		
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Reich_SL_Mags,			
		Reich_Std_Pistol,			
		"Laserbatteries"
	};
};

class Reich_Pilot: Reich_Crew_Black 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Pilot"; 
	weapons[] = {"rhs_weap_pp2000","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_pp2000","Throw","Put"};
	magazines[] = {"rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20"};
	respawnMagazines[] = {"rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n21_20"};// match magazines[]
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","H_CrewHelmetHeli_B"};
	respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","SS_helmet","H_CrewHelmetHeli_B"};	
};
	
class Reich_Shock_trp_leader: SS_Commander 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Shock Trooper Leader"; 
	uniformClass = "Stealth_uniform"; 
	model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Stealth"};  
	backpack = "B_Carryall_khk"; // backpack
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Binocular","Throw","Put"}; ///match weapons[]
	Items[] = {Reich_Standard_Meds,Reich_SL_Equip};  //define_macros.hpp
	RespawnItems[] = {Reich_Standard_Meds,Reich_SL_Equip}; //define_macros.hpp
	magazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol, 		//define_macros.hpp
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Reich_SL_Mags,			//define_macros.hpp
		Reich_Std_Pistol,			//define_macros.hpp
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"Shock_Trp_helm",
		"V_PlateCarrier1_rgr_noflag_F",
		"G_Balaclava_TI_G_blk_F"
	};
	respawnLinkedItems[] = 
	{
		Reich_Standard_Equipment,	//define_macros.hpp
		"Shock_Trp_helm",
		"V_PlateCarrier1_rgr_noflag_F",
		"G_Balaclava_TI_G_blk_F"
	};
};

class Reich_Shock_trp_AA: Reich_Shock_trp_leader 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Shock Trooper AA"; 
	backpack = "reich_AA_Pack1"; // backpack
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","Throw","rhs_weap_fim92","hgun_Rook40_F","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","rhs_weap_fim92","hgun_Rook40_F","Throw","Put"};
	magazines[] = {Reich_SL_Mags,"rhs_fim92_mag"};
	respawnMagazines[] = {Reich_SL_Mags,"rhs_fim92_mag"};
};
	
class Reich_Shock_trp_AT: Reich_Shock_trp_leader 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Shock Trooper AT"; 
	backpack = "reich_AT_Pack1"; // backpack
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","Throw","rhs_weap_smaw","hgun_Rook40_F","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","rhs_weap_smaw","hgun_Rook40_F","Throw","Put"};
	magazines[] = {Reich_SL_Mags,"rhs_mag_smaw_HEDP"};
	respawnMagazines[] = {Reich_SL_Mags,"rhs_mag_smaw_HEDP"};
};	
	
class Reich_Shock_trp: Reich_Shock_trp_leader 
{
	author = "Yettie"; 
	_generalMacro = "O_T_Recon_F"; 
	scope = 2; 
	displayName = "Reich Shock Trooper"; 
	weapons[] = {"EN_arifle_MXM_Blk_F_ARCO","Throw","hgun_Rook40_F","Put"}; 
	respawnWeapons[] = {"EN_arifle_MXM_Blk_F_ARCO","hgun_Rook40_F","Throw","Put"};
	magazines[] = {Reich_SL_Mags};
	respawnMagazines[] = {Reich_SL_Mags};
};
