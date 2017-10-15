/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/

class I_MBT_03_BASE_F;
class B_APC_Tracked_01_AA_F;
class MRAP_03_base_F;
class I_MRAP_03_F;
class I_MRAP_03_hmg_F;
class B_LSV_01_unarmed_F;
class B_T_LSV_01_armed_F;
class O_Truck_03_transport_F;
class I_APC_Wheeled_03_cannon_F;

// class DEST_gunTruck_truck_SAM; // already defined in \160thSOR_OpFor\DEST_gunTruck\cfgVehicles.hpp
// class DEST_gunTruck_truck_AAA; // already defined in \160thSOR_OpFor\DEST_gunTruck\cfgVehicles.hpp

class Nazi_MBT_Kuma: I_MBT_03_BASE_F 
{
	scope = 2;
	side = 0;	
	displayName = "Nazi MBT";
	crew = "Reich_Crew_Black";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	hiddenSelections[] = 
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"HideHull",
		"HideTurret",
		"pasoffsetl",
		"pasoffsetp"
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\TankBodyTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretMGTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTurretTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTrackTexture.paa",
		"160thSOR_OpFor\4th_Reich\data\TankTrackTexture.paa"		
	};
	class EventHandlers 
	{
		init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};		
};

class Nazi_AAA: B_APC_Tracked_01_AA_F
{
	scope=2;
	side=0;	
	displayName="Reich AAA";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	hiddenSelections[]=	
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=	
	{
		"\160thSOR_OpFor\4th_Reich\data\nazi_aaa_body.paa",
		"\160thSOR_OpFor\4th_Reich\data\MBT_body.paa",
		"\160thSOR_OpFor\4th_Reich\data\Nazi_AA_Tower.paa"
	};		
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class SS_Blitz: I_MRAP_03_F
{
	scope=2;
	side=0;
	_generalMacro = "I_MRAP_03_F";
	displayName="SS Blitz";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	vehicleClass="Car";
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\SS_Striker.paa",
		"\160thSOR_OpFor\4th_Reich\data\SS_Turret.paa"
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class SS_Blitz_HMG: I_MRAP_03_hmg_F
{
	scope=2;
	_generalMacro = "I_MRAP_03_F";
	displayName="SS Blitz HMG";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	vehicleClass="Car";
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\SS_Striker.paa",
		"\160thSOR_OpFor\4th_Reich\data\SS_Turret.paa"
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class Nazi_AA_Truck1: O_Truck_03_transport_F
{
	author="Phantom hawk";
	_generalMacro="";
	side=0;
	scope=2;	
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "EdSubcat_AAs";
	faction = "the_fourth_reich";
	forceInGarage=1;
	crew="Reich_Crew_Black";
	displayName="Reich SAM Truck";
	textureList[]={"",1};
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_gunSpawn;";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};		
};
	
class Nazi_AA_Truck2: O_Truck_03_transport_F
{
	author="Phantom hawk";
	_generalMacro="";
	side=0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "EdSubcat_AAs";
	faction = "the_fourth_reich";
	forceInGarage=1;
	crew="Reich_Crew_Black";
	scope=2;
	displayName="Reich AAA Truck";
	textureList[]={"",1};
	class EventHandlers
	{
		init = "(_this select 0) spawn SOPFOR_fnc_gunSpawn;";
	};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};		
};

class Nazi_Transport: O_Truck_03_transport_F
{
	scope=2;
	displayName="Reich Transport Truck";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	textureList[]={"",1};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext01_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_ext02_u.paa",
		"\160thSOR_OpFor\4th_Reich\data\Typhoon_cargo_u.paa"
	};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};		
};		

class Nazi_Swift_attack: B_LSV_01_unarmed_F
{
	scope=2;
	side=0;	
	displayName="Reich Rapid strike veh";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	textureList[]={"",1};
	hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_LSV_01_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_02_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_03_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_Adds_Black_CO.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
	
class Nazi_Swift_attack_armed: B_T_LSV_01_armed_F
{
	scope=2;
	side=0;	
	displayName="Reich Armed Rapid strike veh";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	textureList[]={"",1};
	hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
	hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\Nazi_LSV_01_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_02_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_03_Black_CO.paa","160thSOR_OpFor\4th_Reich\data\Nazi_LSV_Adds_Black_CO.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class Nazi_LAV: I_APC_Wheeled_03_cannon_F
{
	scope=2;
	side=0;	
	displayName="Reich LAV";
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	faction = "the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	textureList[]={"",1};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"160thSOR_OpFor\4th_Reich\data\Nazi_lav_01_ext_wd.paa",
			"160thSOR_OpFor\4th_Reich\data\Nazi_lav_02_ext_wd.paa",
			"160thSOR_OpFor\4th_Reich\data\Nazi_lav_Turret_wd.paa",
			"160thSOR_OpFor\4th_Reich\data\Nazi_lav_03_ext_wd.paa"
		};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};
