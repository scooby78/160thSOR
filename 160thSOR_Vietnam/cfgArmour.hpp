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


