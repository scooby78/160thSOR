/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/

class ItemCore; 
class UniformItem; 
class U_B_CTRG_Soldier_F;
class Uniform_Base: ItemCore 
{ 
	class ItemInfo; 
}; 


class Nazi_Crew_Black: Uniform_Base 
{ 
	scope = 2; 
	displayName = "Crew"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"Camo"}; 
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_Crew_Black"};	
	class ItemInfo : UniformItem { 
		uniformClass = "Reich_Crew_Black"; 
		containerClass = "Supply150"; 
		mass = 50; 
	}; 
}; 

class SS_Uniform: Uniform_Base 
{ 
	scope = 2; 
	displayName = "SS Trooper"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\SS_Uniform"};
	class ItemInfo : UniformItem { 
		uniformClass = "SS_Commander"; 
		containerClass = "Supply150"; 
		mass = 50; 
}; 
}; 
class 3COU: Uniform_Base 
{ 
	scope = 2; 
	displayName = "Nazi Desert"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_3CO_UC.paa"};
	
	class ItemInfo : UniformItem { 
		uniformClass = "Reich_Commander"; 
		containerClass = "Supply150"; 
		mass = 50; 
}; 
}; 

class GERWU: Uniform_Base 
{ 
	scope = 2; 
	displayName = "Nazi Woodland"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERW_UC.paa"};
	
	class ItemInfo : UniformItem { 
		uniformClass = "Reich_Commander_W"; 
		containerClass = "Supply150"; 
		mass = 50; 
}; 
}; 

class GERWINU: Uniform_Base 
{ 
	scope = 2; 
	displayName = "Nazi Woodland"; 
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERWIN_UC.paa"};
	
	class ItemInfo : UniformItem { 
		uniformClass = "Reich_Commander_S"; 
		containerClass = "Supply150"; 
		mass = 50; 
}; 
}; 

class Stealth_uniform: U_B_CTRG_Soldier_F 
{ 
	scope = 2; 
	displayName = "stealth"; 
	model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	hiddenSelections[] = {"camo","insignia"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\stealth"};
	
	class ItemInfo : UniformItem { 
		uniformClass = "Reich_Shock_trp"; 
		containerClass = "Supply50"; 
		mass = 50; 
}; 
}; 
