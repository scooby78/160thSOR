/*
	Name: SOR_Nam
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/

class ItemCore; 
class UniformItem; 
class Uniform_Base: ItemCore 
{ 
	class ItemInfo; 
}; 

class US_ARMY_Uniform : Uniform_Base 
{
        scope = 2;
		displayName = "US ARMY Uniform";
		modelsides[] = {3,2,1,0};
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\1.paa","160thSOR_Vietnam\data\ia_soldier_01_clothing_cw.paa"};
		author = "Yettie";
	      
        class ItemInfo : UniformItem 
		{
            uniformModel = "-";
            uniformClass = "SOR_Actual_Nam";
            containerClass = "Supply120";
            mass = 20;
		};
};	

class VC_Uniform_1 : Uniform_Base 
{
        scope = 2;
		displayName = "VC Uniform";
		modelsides[] = {3,2,1,0};
		model="\A3\characters_F\OPFOR\o_officer.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\vc3.paa"};
		author = "Yettie";
	      
        class ItemInfo : UniformItem 
		{
            uniformModel = "-";
            uniformClass = "SOR_Nam_VC_1";
            containerClass = "Supply120";
            mass = 20;
		};
};	