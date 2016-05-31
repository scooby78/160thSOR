/*
	Name: 160th SOR Mod
	Author: Darce & Scooby
	Date: 27/09/15 01:09
	Description: cfgObjects.hpp
*/

class Land_HelipadRescue_F;
class Land_PortableLight_double_F;
class Land_Medevac_HQ_V1_F;
class B_Slingload_01_Cargo_F;
class Land_HelipadEmpty_F;
class Land_HelipadSquare_F;
class FlagPole_F;
class Land_Flush_Light_yellow_F;
class Land_Flush_Light_red_F;
class Land_Flush_Light_green_F;
class Land_HelipadCircle_F;
class B_Slingload_01_Fuel_F;
class B_Slingload_01_Ammo_F;
class B_Slingload_01_Repair_F;

////////////////////////
// Objects (Scripted) //
////////////////////////

// Helipads	(Scripted)
class SOR_Land_HelipadCircle_F  : Land_HelipadCircle_F 
{
	editorCategory = "SOR_Cat_Objects_Scripted";
	editorSubcategory = "SOR_SubCat_Pads";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Helipad (Service)";
	class eventHandlers
	{
		init="_null = [(_this select 0)] call SOR_fnc_trigger;";
	};
};
	
class SOR_HelipadRescue_F : Land_HelipadRescue_F
{
	editorCategory = "SOR_Cat_Objects_Scripted";
	editorSubcategory = "SOR_SubCat_Pads";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Helipad (Rescue)";
/*
	// script issue spawns lights per player	
	class eventHandlers
	{
		init="_null = [(_this select 0)] call SOR_fnc_attachLights;";
	};
*/	
};	

// Containers (Scripted)
class SOR_MechService : B_Slingload_01_Repair_F 
{
	editorCategory = "SOR_Cat_Objects_Scripted";
	editorSubcategory = "SOR_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_Faction_CRATE;
	displayName = "Mech Service Container";
	class eventHandlers
	{
		init="_null = [(_this select 0)] call SOR_fnc_trigger_mech;";
	};
	class TransportItems
	{
		item_xx(Toolkit,2)
		item_xx(ACE_Track,10)
		item_xx(ACE_Wheel,10)
	};	
};

////////////////////////////
// Objects (Non-Scripted) //
////////////////////////////

//Fuel (ACE interactive)
class SOR_FuelContainer : B_Slingload_01_Fuel_F 
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_Faction_CRATE;
	displayName = "Fuel Container";
};

//Ammo (ACE interactive)
class SOR_AmmoContainer : B_Slingload_01_Ammo_F 
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_Faction_CRATE;
	displayName = "Ammunition Container";
};

//Repair (ACE interactive)
class SOR_RepairContainer : B_Slingload_01_Repair_F 
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyContainers";
	vehicleClass = "SOR_SupplyContainers";
	faction = SOR_Faction_CRATE;
	displayName = "Service Container";
};

// Buildings
class SOR_Land_Medevac_HQ_V1_F : Land_Medevac_HQ_V1_F
{
	side=1;
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_Cat_Objects";
	editorSubcategory = "SOR_SubCat_Objects";
	vehicleClass = "SOR_Objects";
	faction = SOR_Faction_OBJ;
	displayName = "Medevac HQ";
};

//////////
//Lights//	
//////////
class SOR_Land_Flush_Light_green_F : Land_Flush_Light_green_F
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_Cat_Objects";
	editorSubcategory = "SOR_SubCat_Lights";
	vehicleClass = "SOR_Lights";
	faction = SOR_Faction_OBJ;
	displayName = "Green Runway Light";
};

class SOR_Land_Flush_Light_red_F : Land_Flush_Light_red_F
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_Cat_Objects";
	editorSubcategory = "SOR_SubCat_Lights";
	vehicleClass = "SOR_Lights";
	faction = SOR_Faction_OBJ;
	displayName = "Red Runway Light";
};

class SOR_Land_Flush_Light_yellow_F  : Land_Flush_Light_yellow_F 
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_Cat_Objects";
	editorSubcategory = "SOR_SubCat_Lights";
	vehicleClass = "SOR_Lights";
	faction = SOR_Faction_OBJ;
	displayName = "Yellow Runway Light";
};

class SOR_Land_PortableLight_double_F : Land_PortableLight_double_F
{
	scope = 2;
	scopeCurator = 2;
	editorCategory = "SOR_Cat_Objects";
	editorSubcategory = "SOR_SubCat_Lights";
	vehicleClass = "SOR_Lights";
	faction = SOR_Faction_OBJ;
	displayName = "Twin Portable Light";
};

