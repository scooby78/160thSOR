/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 12/07/17
	Description: cfgVehicles.hpp
*/

class Land_Radar_Small_F;
class Land_Barracks_01_grey_F;
class Land_Mil_Barracks_i;
class Land_Cargo_HQ_V1_F;
class Land_Bunker_01_HQ_F;
class Land_Garbage_square3_F;

class SOR_OpFor_NoFlyZone4km : Land_Radar_Small_F
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_NoFlyZone";
	displayName="No Fly Zone 4km";
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_NoFlySite4km;";
	};
};
class SOR_OpFor_NoFlyZone3km : Land_Radar_Small_F
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_NoFlyZone";
	displayName="No Fly Zone 3km";
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_NoFlySite3km;";
	};
};
// 4th Reich
class SOR_Barracks_Large_Reich : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Lge (80 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_Barracks_Small_Reich : Land_Mil_Barracks_i 
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (10 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 500, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Medium_Reich : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Sml (6 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 400, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Large_Reich : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Lge (12 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 500, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_INV_Garbage_Reich : Land_Garbage_square3_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Invisable Sml (50 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 10, 800, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_5Spawner',10,0,60]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
//ISIS
class SOR_Barracks_Large_ISIS : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Lge (80 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Rifle_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_Barracks_Small_ISIS : Land_Mil_Barracks_i 
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (10 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 500, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Rifle_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Medium_ISIS : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Sml (6 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 400, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Rifle_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Large_ISIS : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Lge (12 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 500, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Rifle_2Spawner',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_INV_Garbage_ISIS : Land_Garbage_square3_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Invisable Sml (50 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 10, 800, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Rifle_5Spawner',10,0,60]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};

//Russian
class SOR_Barracks_Large_VDV_AI : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Lge (80 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_2Spawner_VDV_AI',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_Barracks_Small_VDV_AI : Land_Mil_Barracks_i 
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (10 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 500, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_2Spawner_VDV_AI',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Medium_VDV_AI : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Sml (6 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 400, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_2Spawner_VDV_AI',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_HQ_Large_VDV_AI : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "HQ Lge (12 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 500, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_2Spawner_VDV_AI',10,25]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};
class SOR_INV_Garbage_VDV_AI : Land_Garbage_square3_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Invisable Sml (50 Soldiers)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 10, 800, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_5Spawner_VDV_AI',10,0,60]  execvm '160thSOR_OpFor\functions\fn_spawner.sqf';";
	};	
};