/*
	Name: SOR_ISIS
	Author: SOR OPS
	Date: 25/04/17
	Description: CfgHelmets.hpp
*/

	class H_Shemag_khk;
	class H_Bandanna_gry;
	class H_Shemag_olive;

	
	class ISIS_Shemag: H_Shemag_olive
	{
	displayName="ISIS Shemag";
	scope = 2;
	picture = "\A3\characters_f_gamma\Guerrilla\Data\UI\icon_H_Shemag_basic_CA.paa";
	model = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_ISIS\data\h_shemag_olive_co.paa"};
		
		class ItemInfo: HeadgearItem
		{
		mass = 20;
		allowedSlots[] = {901,605};
		uniformModel = "\A3\Characters_F_gamma\Guerrilla\headgear_shemagmask";
		modelSides[] = {3,1};
		hiddenSelections[] = {"Camo"};
		armor = "3*0.4";
		passThrough = 0.65;
		};
	};
	class ISIS_Bandanna_blk: H_Bandanna_gry 
	{
		scope = 2;
		displayName = "ISIS Bandanna";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_ISIS\data\ISIS_bandanna_blk_co.paa"};
		mass = 4;
	};