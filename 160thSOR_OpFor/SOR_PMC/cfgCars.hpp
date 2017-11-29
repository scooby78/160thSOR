/*
	Name: PMC 
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/


class C_Offroad_02_unarmed_F_black;
class C_Scooter_Transport_01_F;
class B_T_Boat_Transport_01_F;
class C_Hatchback_01_F;
class B_Heli_Light_01_F;

class PMC_Jeep: C_Offroad_02_unarmed_F_black
{
	scope=2;
	displayName="Jeep";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction="SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	side=2;
	features = "";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsMaterials[] = {"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat","\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"};
	hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};
};

class PMC_Scooter: C_Scooter_Transport_01_F
{
	scope=2;
	displayName="Water Scooter";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction="SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	side=2;
	features = "";
	hiddenSelections[] = {"Camo_1","Camo_2"};
	hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};
	
};
class PMC_Boat_Transport: B_T_Boat_Transport_01_F
{
	scope=2;
	displayName="Boat";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction="SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	typicalCargo[]=	{"PMC_Gunner_W"};
	side=2;
	
};

class PMC_Hatchback: C_Hatchback_01_F
{
	scope=2;
	displayName="Hatchback";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction="SOR_FACTION_PMC";
	crew="PMC_Gunner_W";
	typicalCargo[]=	{"PMC_Gunner_W"};
	side=2;
	features = "";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_CO.paa"};
};
class PMC_little_bird: B_Heli_Light_01_F
{
	scope=2;
	displayName="little bird";
	editorCategory = "SOR_PMC_Cat_Faction";
	faction="SOR_FACTION_PMC";
	crew="PMC_Pilot_D";
	side=2;

};