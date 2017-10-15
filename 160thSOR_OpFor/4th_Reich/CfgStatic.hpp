/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgVehicles.hpp
*/
class B_SAM_System_01_F; 
class B_AAA_System_01_F; 
class B_SAM_System_02_F;
class B_HMG_01_high_F;
class B_HMG_01_A_F;
class B_Mortar_01_F;

class Nazi_SAM: B_SAM_System_01_F
{
	scope=2;
	side=0;	
	displayName="reich SAM";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
};

class Nazi_SAA: B_AAA_System_01_F
{
	scope=2;
	side=0;	
	displayName="reich SAA";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
};

class Nazi_GBAD: B_SAM_System_02_F
{
	scope=2;
	side=0;		
	displayName="reich GBAD";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
};

class Nazi_HMG_high: B_HMG_01_high_F
{
	scope=2;
	side=0;		
	displayName="Reich HMG High";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
};

class Nazi_Mortar: B_Mortar_01_F
{
	scope=2;
	side=0;		
	displayName="Reich Mortar";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
};