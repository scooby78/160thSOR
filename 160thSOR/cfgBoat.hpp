/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 29/01/17 
	Description:cfgBoat.hpp 
	Note: Only Sea units that are proven not "buggy" should be put in here.
*/

class B_Boat_Transport_01_F;
class B_SDV_01_F;

////////////////////////////////////////////////////////////////
// Desert //////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

//rubber duck
class SOR_Boat_Transport_01 : B_Boat_Transport_01_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;	
    armor = 60; // was 10
	driverCanEject = 0; //was 1
	cargoCanEject = 0; //was 1
	maxSpeed = 70; //was 70
	enginePower = 40; //was 18.5
	engineShiftY = 0; //was 0
	waterResistance = 10; //was 10
	waterResistanceCoef = 0.01; // was 0.01
	waterLinearDampingCoefX = 2; //was 2
	rudderForceCoef = 0.08; //was 0.08
	rudderForceCoefAtMaxSpeed = 0.001; //was 0.001
	ejectDeadDriver = 1; // was 0
	ejectDeadCargo = 1; // was 0
	cost = 50;
	threat[] = {0.0, 0.0, 0.0};	
    accuracy = 0.5;
    maximumLoad = 1000;	
	class TransportItems
	{
		item_xx(G_Diving,4)
		item_xx(U_B_Wetsuit,4)
		item_xx(V_RebreatherB,4)
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

//Sub	
class SOR_SUB : B_SDV_01_F
{
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;	
    maximumLoad = 2000;
	class TransportItems
	{
		item_xx(G_Diving,4)
		item_xx(U_B_Wetsuit,4)
		item_xx(V_RebreatherB,4)
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

////////////////////////////////////////////////////////////////
// Woodland ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

//Rubber duck
class SOR_Boat_Transport_01_wd : SOR_Boat_Transport_01
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;	
};

//Sub	
class SOR_SUB_wd : SOR_SUB
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;	
};

	