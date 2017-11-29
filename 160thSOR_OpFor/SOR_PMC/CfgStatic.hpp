/*
	Name: SOR_ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgVehicles.hpp
*/

class SOR_FACTION_PMC_Mortar_D: rhs_2b14_82mm_Base
{
	scope=2;
	side=2;
	editorCategory = "SOR_PMC_Cat_Faction";
	faction = "SOR_FACTION_PMC";
	displayName="Mortar Desert (Scripted)";
	crew="PMC_Grenadier_D";
	typicalCargo[]=
	{
		"PMC_Grenadier_D"
	};
	class eventHandlers
	{
		init = "nul= [(_this select 0), 1000, 400 ,'SoldierWB'] spawn SOPFOR_fnc_mortar;";
	};	
};
class SOR_FACTION_PMC_Mortar_W: rhs_2b14_82mm_Base
{
	scope=2;
	side=2;
	editorCategory = "SOR_PMC_Cat_Faction";
	faction = "SOR_FACTION_PMC";
	displayName="Mortar Woodland (Scripted)";
	crew="PMC_Grenadier_W";
	typicalCargo[]=
	{
		"PMC_Grenadier_W"
	};
	class eventHandlers
	{
		init = "nul= [(_this select 0), 1000, 400 ,'SoldierWB'] spawn SOPFOR_fnc_mortar;";
	};		
};