/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgHelmets.hpp
*/

class H_HelmetIA;
class HeadgearItem;
class Headgear_base_f;
class H_HelmetB: ItemCore 
{ 
	class ItemInfo; 
}; 
 
class SS_helmet: H_HelmetB
{
	displayName = "SS helmet";
	scope = 2;
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\SS_Helmet.paa"};
	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		modelSides[] = {3,1};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};
class Trp_helm: H_HelmetB
{
	displayName = "Trooper Helmet";
	scope = 2;
	model = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\CP_Helmet_Khaki.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		modelSides[] = {3,1,2,0};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};

class Shock_Trp_helm: H_HelmetB
{
	displayName = "Shock Trooper Helmet";
	scope = 2;
	model = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\stealthhelm"};

	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		modelSides[] = {3,1,2,0};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
	};
};

	  class 3COH: H_HelmetB{
		scope=2;
		weaponPoolAvailable = 1;
		displayName = "Nazi Desert Helmet";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_3CO_HEL.paa"};
        hiddenSelections[] = {"Camo"};
        author = "Yettie";
		
         class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3,1,2,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
               hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_3CO_HEL.paa"};
               hiddenSelections[] = {"Camo"};

};
};

	  class GERH: ItemCore{
		scope=2;
		weaponPoolAvailable = 1;
		displayName = "Nazi Woodland Helmet";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
                hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_GERW_HEL.paa"};
                hiddenSelections[] = {"Camo"};
                author = "Smill";
              
                  

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3,1,2,0};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
                        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_GERW_HEL.paa"};
                        hiddenSelections[] = {"Camo"};

};
};

	  class WIN2H: ItemCore{
		scope=2;
		weaponPoolAvailable = 1;
		displayName = "Nazi Snow Helmet";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_WIN2_HEL.paa"};
        hiddenSelections[] = {"Camo"};
        author = "Smill";
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
                        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_WIN2_HEL.paa"};
                        hiddenSelections[] = {"Camo"};

};
};