/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/

class rhsgref_nat_ural;
class rhsgref_nat_ural_open;
class rhsgref_nat_uaz_open;
class SOR_M113_UNARMED_WD;
class SOR_M113_SUPPLY_WD;

class SOR_MOG_Nam: rhsgref_nat_ural
{
	scope=2;
	side=1;	
	displayName="M35 Military Truck";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","numplate","numplate2","n1","n2","n3","n4","i1","i2","i3","i4"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\SOR_MOG_NAM.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
class SOR_MOG_open_Nam: rhsgref_nat_ural_open
{
	scope=2;
	side=1;	
	displayName="M35 Military Truck Open";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","numplate","numplate2","n1","n2","n3","n4","i1","i2","i3","i4"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\SOR_MOG_NAM.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
class SOR_FORDGP_open_Nam: rhsgref_nat_uaz_open
{
	scope=2;
	side=1;	
	displayName="FORD GP Willys Jeep";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2g","n1","n2","n3","n4","i1","i2","i3","i4"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\SOR_Nam_Jeep.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class SOR_Rice_paddy_daddy: SOR_M113_SUPPLY_WD
{
	scope=2;
	side=1;	
	displayName="M113 Rice paddy daddy";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\Sor_m113_rsp.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"};
};
class SOR_M11GetSome: SOR_M113_SUPPLY_WD
{
	scope=2;
	side=1;	
	displayName="M113 M11GetSome";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\M11GetSome.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"};

};
class SOR_M113_SPW: SOR_M113_SUPPLY_WD
{
	scope=2;
	side=1;	
	displayName="M113 SPW";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\M113_SPW.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"};
};

class SOR_Rice_paddy_daddy_U: SOR_M113_UNARMED_WD
{
	scope=2;
	side=1;	
	displayName="M113 Rice paddy daddy Unarmed";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\Sor_m113_rsp.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
class SOR_M11GetSome_u: SOR_M113_UNARMED_WD
{
	scope=2;
	side=1;	
	displayName="M113 M11GetSome Unarmed";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\M11GetSome.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
class SOR_M113_SPW_U: SOR_M113_UNARMED_WD
{
	scope=2;
	side=1;	
	displayName="M113 SPW Unarmed";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_Rifleman_Nam";
	typicalCargo[]=	{"SOR_Rifleman_Nam"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\M113_SPW.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};