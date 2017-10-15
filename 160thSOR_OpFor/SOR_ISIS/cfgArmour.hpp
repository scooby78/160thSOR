/*
	Name: SOR ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/

class rhsusf_m1025_w_m2;
class rhsusf_m1025_w;
class I_G_Offroad_01_armed_F;
class rhsusf_m998_d_2dr;
class rhs_bmp2e_msv;
class rhs_bmp1_msv;
class rhsgref_ins_zsu234;
class rhs_btr60_msv;
class rhs_t72ba_tv;
class rhsusf_m1025_d_m2;
class rhs_gaz66o_flat_msv;



class SOR_ISIS_M1025_D1_M2: rhsusf_m1025_d_m2
{
	scope=2;
	side=0;
	displayName="M1025 M2";
	faction="SOR_FACTION_ISIS";
	editorCategory = "SOR_ISIS_Cat_Faction";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
};
class SOR_ISIS_M1025_D: rhsusf_m1025_w
{
	scope=2;
	displayName="Painted M1025";
	editorCategory = "SOR_ISIS_Cat_Faction";
	side=0;
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	HiddenSelectionsTextures[]=
	{
		"160thSOR_OpFor\SOR_ISIS\data\m998_exterior_b_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\A2_parts_b_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\wheel_wranglermt_b_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\m998_mainbody_b_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\gratting_b_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\tile_exmetal_b_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\m1025_b_co.paa",
		"",
		""
	};
};


class SOR_ISIS_Offroad_M2: I_G_Offroad_01_armed_F
{
	scope=2;
	side=0;
	faction="SOR_FACTION_ISIS";
	editorCategory = "SOR_ISIS_Cat_Faction";
	crew="SOR_ISIS_Infantry_TL";
	model = "\A3\soft_f_gamma\Offroad_01\Offroad_01_hmg_F.p3d";
	hiddenSelections[] = {"Camo","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_ISIS\data\ISIS_offroad_01_ext_IG_01_CO.paa","160thSOR_OpFor\SOR_ISIS\data\ISIS_offroad_01_ext_IG_01_CO.paa"};
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	textureList[]=
	{
		"LOP_Black",
		1
	};
};

class SOR_ISIS_OPF_M1025_G: rhsusf_m998_d_2dr
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};

};
class SOR_ISIS_Transport: rhs_gaz66o_flat_msv
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","n1","n2","n3","n4","i1","i2","i3","i4"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};

};
class SOR_ISIS_BMP2: rhs_bmp2e_msv
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	hiddenSelectionsTextures[]=
	{
		"160thSOR_OpFor\SOR_ISIS\data\bmp_1_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_2_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_3_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_4_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_5_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_6_ia_co.paa"
	};
	rhs_decalParameters[]=
	{
		"['Number', cBMP3NumberPlaces, 'Iraqi']",
		"['Label', cBMPPlatoon, 'Platoon',[0,0]]",
		"['Label', cBMPLeftBack, 'Army', [21,1]]"
	};
};
class SOR_ISIS_BMP1: rhs_bmp1_msv
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	hiddenSelectionsTextures[]=
	{
		"160thSOR_OpFor\SOR_ISIS\data\bmp_1_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_2_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_3_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_4_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_5_ia_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\bmp_6_ia_co.paa"
	};
	rhs_decalParameters[]=
	{
		"['Number', cBMP3NumberPlaces, 'Iraqi']",
		"['Label', cBMPPlatoon, 'Platoon',[0,0]]",
		"['Label', cBMPLeftBack, 'Army', [21,1]]"
	};
};
class SOR_ISIS_ZSU234: rhsgref_ins_zsu234
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	hiddenSelectionsTextures[]=
	{
		"160thSOR_OpFor\SOR_ISIS\data\zsu_01_aa_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\zsu_02_ists_co.paa",
		"160thSOR_OpFor\SOR_ISIS\data\zsu_03_aa_co.paa"
	};
};
class SOR_ISIS_BTR60: rhs_btr60_msv
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	hiddenSelectionsTextures[]=
	{
		"160thSOR_OpFor\SOR_ISIS\data\btr60_body_ists_co.paa",
		"\rhsafrf\addons\rhs_a2port_armor\data\btr60_details_co.paa"
	};
};
class SOR_ISIS_T72BA: rhs_t72ba_tv
{
	scope=2;
	side=0;
	editorCategory = "SOR_ISIS_Cat_Faction";
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
		"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\flags\fl_jihad001_ca.paa"
	};
	faction="SOR_FACTION_ISIS";
	crew="SOR_ISIS_Infantry_TL";
	typicalCargo[]=
	{
		"SOR_ISIS_Infantry_TL"
	};
	rhs_decalParameters[]=
	{
		"['Number',cRHST72NumberPlaces,'Iraqi']",
		"['Label',cRHST72PlnSymPlaces, 'Platoon',0]"
	};
};