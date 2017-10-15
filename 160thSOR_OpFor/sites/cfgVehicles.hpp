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
	displayName = "Barracks Lge (R:700,A:600,S:80)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_FT_2']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_Barracks_Small_Reich : Land_Mil_Barracks_i 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (R:700,A:600,S:10)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_FT_2']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Medium_Reich : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Sml (R:700,A:600,S:6)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_FT_2']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Large_Reich : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_Reich";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Lge (R:700,A:600,S:12)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'reich_groups' >> 'Infantry' >> 'the_fourth_reich_FT_2']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
//ISIS
class SOR_Barracks_Large_ISIS : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Lge (R:700,A:600,S:80)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Patrol_section']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_Barracks_Small_ISIS : Land_Mil_Barracks_i 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (R:700,A:600,S:10)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Patrol_section']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Medium_ISIS : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Sml (R:700,A:600,S:6)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Patrol_section']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Large_ISIS : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_ISIS";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Lge (R:700,A:600,S:12)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_ISIS_Groups' >> 'SOR_ISIS_Infantry' >> 'SOR_ISIS_Patrol_section']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};

//Russian
class SOR_Barracks_Large_VDV_AI : Land_Barracks_01_grey_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Lge (R:700,A:600,S:80)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 40, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_Patrol_VDV_AI']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_Barracks_Small_VDV_AI : Land_Mil_Barracks_i 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Barracks Sml (R:700,A:600,S:10)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 5, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_Patrol_VDV_AI']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Medium_VDV_AI : Land_Cargo_HQ_V1_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Sml (R:700,A:600,S:6)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 3, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_Patrol_VDV_AI']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};
class SOR_HQ_Large_VDV_AI : Land_Bunker_01_HQ_F 
{
	editorCategory = "SOR_OPFor_Cat_Sites";
	editorSubcategory = "SOR_OPFor_SubCat_Barracks_VDV_AI";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Reich HQ Lge (R:700,A:600,S:12)";
	class eventHandlers
	{
		init = "null = [(_this select 0), 'SoldierWB', 6, 700, 600, configfile >> 'CfgGroups' >> 'East' >> 'SOR_Opfor_Groups_VDV_AI' >> 'SOR_Opfor_InfGroups_VDV_AI' >> 'SOR_Opfor_Patrol_VDV_AI']  execvm '160thSOR_OpFor\functions\fn_buildingSpawn.sqf';";
	};	
};

