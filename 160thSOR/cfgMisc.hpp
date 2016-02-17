/*
	Name: 160th SOR Mod
	Author: Darce
	Date: 27/09/15 01:09
	Description: cfgMisc.hpp
*/

	class Land_HelipadRescue_F;
	class Land_PortableLight_double_F;
	class Land_Medevac_HQ_V1_F;
	class B_Slingload_01_Cargo_F;
	class Land_HelipadEmpty_F;
	class Land_HelipadSquare_F;
	class FlagPole_F;
	class B_Slingload_01_Repair_F;
	class Land_Flush_Light_yellow_F;
	class Land_Flush_Light_red_F;
	class Land_Flush_Light_green_F;
	class Land_HelipadCircle_F;
	
// Helipads	
	class SOR_Land_HelipadCircle_F  : Land_HelipadCircle_F 
	{
		displayName = "Helipad (Service)";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;
		class eventHandlers
		{
			init="_null = [(_this select 0)] call SOR_fnc_trigger;";
		};
	};
		
	class SOR_HelipadRescue_F : Land_HelipadRescue_F
	{
		displayName = "Helipad (Rescue)";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;
/*
		// script issue spawns lights per player	
		class eventHandlers
		{
			init="_null = [(_this select 0)] call SOR_fnc_attachLights;";
		};
*/	
	};	

	
// Containers
	class SOR_MechService : B_Slingload_01_Repair_F 
	{
		displayName = "Mech Service Container";
		vehicleClass = "SOR_SupplyContainers";
		faction = SOR_Faction_CRATE;
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

// Buildings
	class SOR_Land_Medevac_HQ_V1_F : Land_Medevac_HQ_V1_F
	{
		side=1;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "SOR_Objects";
		displayName = "Medevac HQ";
		faction = SOR_Faction_OBJ;
	};

//Lights	
	class SOR_Land_Flush_Light_green_F : Land_Flush_Light_green_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Green Runway Light";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;
		
	};
	
	class SOR_Land_Flush_Light_red_F : Land_Flush_Light_red_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Red Runway Light";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;
	
	};
	
	class SOR_Land_Flush_Light_yellow_F  : Land_Flush_Light_yellow_F 
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Yellow Runway Light";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;

	};
	
	class SOR_Land_PortableLight_double_F : Land_PortableLight_double_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Twin Portable Light";
		vehicleClass = "SOR_Objects";
		faction = SOR_Faction_OBJ;
		
	};
	
