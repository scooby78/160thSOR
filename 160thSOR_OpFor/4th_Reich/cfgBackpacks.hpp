/*
	Name: The_Fourth_Reich Mod
	Author: Scooby
	Date: 29/06/2017
	Description: cfgBackpacks.hpp
*/

//Custom Backpacks
class Bag_Base;
class B_Carryall_khk;


class B_Carryall_Base : Bag_Base {
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
	
	
class B_FieldPack_Base : Bag_Base {
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"};
		maximumLoad = 200;
		mass = 30;
	};

class D3COB: B_Carryall_Base {
		author = "Smill";
		_generalMacro = "B_Carryall_ocamo";
		scope = 2;
		displayName = "Nazi Desert Carryall";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_3CO_B.paa"};
	};
	
	
class D3COFP: B_FieldPack_Base {
		author = "Smill";
		_generalMacro = "B_FieldPack_khk";
		scope = 2;
		displayName = "Nazi Desert Field pack";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Gorod_khk_ca.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_3CO_FP.paa"};
	};	
	
class GERWB : B_Carryall_Base {
		author = "Smill";
		_generalMacro = "Nazi Winter Carryall";
		scope = 2;
		displayName = "Smill German Woodland Carryall";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERW_B.paa"};
	};
	
	
class GERWFP : B_FieldPack_Base {
		author = "Smill";
		_generalMacro = "B_FieldPack_khk";
		scope = 2;
		displayName = "Nazi Woodland Field pack";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Gorod_khk_ca.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERW_FP.paa"};
	};	
	
class GERWINB : B_Carryall_Base {
		author = "Smill";
		_generalMacro = "B_Carryall_ocamo";
		scope = 2;
		displayName = "Nazi Winter Carryall";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERWIN_B.paa"};
	};
	
class GERWINFP : B_FieldPack_Base {
		author = "Smill";
		_generalMacro = "B_FieldPack_khk";
		scope = 2;
		displayName = "Nazi Winter Field pack";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Gorod_khk_ca.paa";
		hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_GERWIN_FP.paa"};
	};	

class reich_AT_Pack1 : B_Carryall_khk
{
	displayName = "Pack Reich AT";
	class TransportMagazines
	{
		mag_xx(rhs_mag_smaw_HEAA,1);
		mag_xx(rhs_mag_smaw_HEDP,1);		
	};		
};

class reich_AA_Pack1 : B_Carryall_khk
{
	displayName = "Pack Reich AA";
	class TransportMagazines
	{
		mag_xx(rhs_fim92_mag,2);
	};		
};

class reich_Desert_MMG_Pack : D3COB
{
	displayName = "Pack Desert MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};

class reich_woodland_MMG_Pack : GERWB
{
	displayName = "Pack Woodland MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};

class reich_Snow_MMG_Pack : GERWINB
{
	displayName = "Pack Snow MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};
class reich_Desert_LMG_Pack : D3COB
{
	displayName = "Pack Desert LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};

class reich_woodland_LMG_Pack : GERWB
{
	displayName = "Pack Woodland LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};

class reich_Snow_LMG_Pack : GERWINB
{
	displayName = "Pack Snow LMG";
	class TransportMagazines
	{
		mag_xx(200Rnd_65x39_cased_Box,1);
	};		
};
class reich_SS_MMG_Pack : B_AssaultPack_blk
{
	displayName = "Pack SS Black MMG";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,1);
	};		
};