/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgAircraft.hpp
*/

class RHS_Mi24P_AT_vdv;
class RHS_Mi24P_CAS_vdv;
class RHS_Mi24P_vdv;
class RHS_Mi24V_UPK23_vdv;
class RHS_Mi8AMT_vdv;
class RHS_Su25SM_KH29_vvsc;
class RHS_T50_vvs_generic;
class rhs_ka60_grey;
class O_Heli_Transport_04_F;
class O_Heli_Transport_04_medevac_F;
class O_Heli_Transport_04_bench_F;
class O_Heli_Transport_04_covered_F;
class I_Plane_Fighter_03_AA_F;
class I_Plane_Fighter_03_CAS_F;
class O_Plane_Fighter_02_F;
class I_Plane_Fighter_04_F;
class O_Plane_Fighter_02_Stealth_F;

// Transport Helos	
class SOR_OpFor_Heli_1 : RHS_Mi24P_AT_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_Heli_2 : RHS_Mi24P_CAS_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_Heli_3 : RHS_Mi24P_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_Heli_4 : RHS_Mi24V_UPK23_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
			displayName = "Close Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['Door_Cargo',0]";
		};
		class openDoor
		{
			condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
			displayName = "Open Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['Door_Cargo',1]";
		};
	};		
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks {pack_xx(SOR_OPFor_Repair_Pack_VDV,1)};
};

class SOR_OpFor_Heli_5 : RHS_Mi8AMT_vdv
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "Mi-8AMT (Refuel)";
	transportFuel = 30000;
	supplyRadius = 30;
	crew = "SOR_OPFor_HeliPilot_VDV_AI";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class closeDoor
		{
			condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
			displayName = "Close Rear Doors";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "[this,15,16] call rhs_fnc_mi8_checkDoor";
		};
		class openDoor
		{
			condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
			displayName = "Open Rear Doors";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			showwindow = 0;
			radius = 3;
			statement = "[this,15,16] call rhs_fnc_mi8_checkDoor";
		};
		class closeDoor_L
		{
			condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
			displayName = "Close Left Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			statement = "this animateDoor ['LeftDoor',0]";
		};
		class openDoor_L
		{
			condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
			displayName = "Open Left Door";
			onlyforplayer = 1;
			position = "";
			priority = 0.05;
			radius = 3;
			showwindow = 0;
			statement = "this animateDoor ['LeftDoor',1]";
		};
	};
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,2)	
	};
	class TransportWeapons {weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)};
	class TransportMagazines {mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};

//Transport (This is the only one that can attach and drop pods)
class SOR_OpFor_Heli_6 : O_Heli_Transport_04_F
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "MI-290 Taru (C3/POD)";
	crew = "SOR_OPFor_HeliPilot_VDV_AI";	
	class eventHandlers
	{
		init="_this call SLX_XEH_EH_Init;";
	};
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10)
		item_xx(V_RebreatherIR,3)	
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks 
	{
		pack_xx(SOR_OPFor_Repair_Pack_VDV,1)
	};
};
	
class SOR_OpFor_Heli_MEV : rhs_ka60_grey
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	displayName = "Ka-60 (MEV)";
	driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
	ejectDeadCargo = 1; //test dead eject
	crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
	getInRadius = 4;
	crew = "SOR_OPFor_MEVPilot_VDV";
	class TransportItems
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_O_Diving,3)
		item_xx(U_O_Wetsuit,3)
		item_xx(V_RebreatherIR,3)
	};		
	class TransportWeapons {weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)};
	class TransportMagazines {mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};
	
////////////	
// Planes //
////////////
class SOR_OPFOR_FIGHTER_BASE: O_Plane_Fighter_02_F
{
	scope = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
	class Components;
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class SOR_OPFOR_FIGHTER_BASE2: O_Plane_Fighter_02_Stealth_F
{
	scope = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
	class Components;
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
};

class SOR_IND_FIGHTER_BASE: I_Plane_Fighter_04_F
{
	scope = 0;
	side = 0;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
	class Components;
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};		
};

class SOR_Opfor_Fighter_AA : SOR_OPFOR_FIGHTER_BASE
{
	scope = 2;
	displayName = "Sukhoi Su-35 (AA)";
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class pylons1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77"};
					attachment = "PylonMissile_Missile_AA_R77_x1";
					priority = 13;
					maxweight = 300;
					UIposition[] = {0.6, 0.45};
				};
				class pylons2: pylons1 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.05, 0.45};
					mirroredMissilePos = 1;
				};
				class pylons3 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77", "O_KH25", "O_KAB250_BOMB"};
					attachment = "PylonMissile_Missile_AA_R77_x1";
					priority = 11;
					maxweight = 1050;
					UIposition[] = {0.55, 0.35};
				};
				class pylons4: pylons3 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons3, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.1, 0.35};
					mirroredMissilePos = 3;
				};
				class pylons5 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77", "O_KH25", "O_KAB250_BOMB"};
					attachment = "PylonMissile_Missile_AA_R77_x1";
					priority = 9;
					maxweight = 1200;
					UIposition[] = {0.5, 0.25};
				};
				class pylons6: pylons5 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons5, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.15, 0.25};
					mirroredMissilePos = 5;
				};
				class pylonBayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73"};
					priority = 7;
					attachment = "";
					maxweight = 300;
					UIposition[] = {0.45, 0.15};
					bay = 2;
				};
				class pylonBayLeft1: pylonBayRight1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayRight1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.2, 0.15};
					mirroredMissilePos = 7;
					bay = 1;
				};
				class pylonBayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77"};
					priority = 5;
					attachment = "";
					maxweight = 750;
					UIposition[] = {0.33, 0.3};
					bay = 4;
				};
				class pylonBayLeft2: pylonBayRight2 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayRight2, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.35};
					mirroredMissilePos = 9;
					bay = 3;
				};
				class pylonBayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT"};
					priority = 2;
					attachment = "";
					maxweight = 750;
					UIposition[] = {0.33, 0.45};
					bay = 5;
				};
				class pylonBayCenter2: pylonBayCenter1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayCenter1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.5};
					mirroredMissilePos = 11;
				};
				class pylonBayCenter3 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT", "O_KH25_INT", "O_KAB250_BOMB"};
					priority = 1;
					attachment = "";
					maxweight = 1200;
					UIposition[] = {0.33, 0.55};
					bay = 5;
				};
			};
			class Bays //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class BayLeft1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayLeft2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
				class BayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
			};
			class Presets //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class Empty //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Empty";
					attachment[] = {};
				};
				class Default //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Default";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Bomb_KAB250_x1"};
				};
				class AA //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "AA";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1"};
				};
				class CAS //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "CAS";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AGM_KH25_INT_x1"};
				};
			};
		};
	};	
};

class SOR_Ind_Fighter_AA : SOR_IND_FIGHTER_BASE
{
	scope = 2;
	displayName = "JAS 39 Gripen (AA)";	
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
			{
				class pylon1 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X", "I_AMRAAM_C_RAIL"};
					attachment = "PylonMissile_Missile_BIM9X_x1";
					priority = 5;
					maxweight = 300;
					UIposition[] = {0.55, 0.4};
				};
				class pylon2: pylon1 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon1, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.1, 0.4};
					mirroredMissilePos = 1;
				};
				class pylon3 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X_RAIL", "I_AMRAAM_C_RAIL", "I_AGM65_RAIL"};
					priority = 4;
					attachment = "PylonRack_Missile_AMRAAM_C_x1";
					maxweight = 750;
					UIposition[] = {0.5, 0.35};
				};
				class Pylon4: pylon3 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon3, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.15, 0.35};
					mirroredMissilePos = 3;
				};
				class pylon5 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X_RAIL", "I_BIM9X_DUAL_RAIL", "I_AMRAAM_C_RAIL", "I_AMRAAM_C_DUAL_RAIL", "I_AGM65_RAIL", "I_AGM65_DUAL_RAIL", "I_GBU12"};
					priority = 3;
					attachment = "PylonRack_Missile_AMRAAM_C_x1";
					maxweight = 1200;
					UIposition[] = {0.45, 0.3};
				};
				class Pylon6: pylon5 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon5, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.2, 0.3};
					mirroredMissilePos = 5;
				};
			};
			class Presets //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
			{
				class Empty //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "Empty";
					attachment[] = {};
				};
				class Default //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "Default";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x1"};
				};
				class AA //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "AA";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x2", "PylonRack_Missile_AMRAAM_C_x2"};
				};
				class AT //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "AT";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x2", "PylonRack_Missile_AGM_02_x2"};
				};
				class CAS //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "CAS";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonMissile_Bomb_GBU12_x1", "PylonMissile_Bomb_GBU12_x1"};
				};
			};
		};
	};	
};

class SOR_Opfor_Fighter_AA2 : SOR_OPFOR_FIGHTER_BASE2
{
	scope = 2;
	displayName = "Sukhoi PAK FA (AA)";	
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class pylonDummy1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					attachment = "";
					UIposition[] = {10, 10};
				};
				class pylonDummy2: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy3: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy4: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy5: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy6: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonBayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73"};
					priority = 7;
					attachment = "PylonMissile_Missile_AA_R73_x1";
					maxweight = 300;
					UIposition[] = {0.45, 0.15};
					bay = 2;
				};
				class pylonBayLeft1: pylonBayRight1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayRight1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.2, 0.15};
					mirroredMissilePos = 7;
					bay = 1;
				};
				class pylonBayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77"};
					priority = 5;
					attachment = "PylonMissile_Missile_AA_R77_x1";
					maxweight = 750;
					UIposition[] = {0.33, 0.3};
					bay = 4;
				};
				class pylonBayLeft2: pylonBayRight2 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayRight2, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.35};
					mirroredMissilePos = 9;
					bay = 3;
				};
				class pylonBayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT"};
					priority = 2;
					attachment = "PylonMissile_Missile_AA_R77_INT_x1";
					maxweight = 750;
					UIposition[] = {0.33, 0.45};
					bay = 5;
				};
				class pylonBayCenter2: pylonBayCenter1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayCenter1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.5};
					mirroredMissilePos = 11;
				};
				class pylonBayCenter3 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT", "O_KH25_INT", "O_KAB250_BOMB"};
					priority = 1;
					attachment = "PylonMissile_Missile_AA_R77_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.55};
					bay = 5;
				};
			};
			class Bays //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class BayLeft1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayLeft2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
				class BayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
			};
			class Presets //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class Empty //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Empty";
					attachment[] = {};
				};
				class Default //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Default";
					attachment[] = {"", "", "", "", "", "", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Bomb_KAB250_x1"};
				};
				class AA //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "AA";
					attachment[] = {"", "", "", "", "", "", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1"};
				};
				class CAS //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "CAS";
					attachment[] = {"", "", "", "", "", "", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AGM_KH25_INT_x1"};
				};
			};
		};
	};	
};

class SOR_Opfor_Fighter_CAS : SOR_OPFOR_FIGHTER_BASE
{
	scope = 2;
	displayName = "Sukhoi Su-35 (CAS)";
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class pylons1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77"};
					attachment = "PylonMissile_Missile_AGM_KH25_x1";
					priority = 13;
					maxweight = 300;
					UIposition[] = {0.6, 0.45};
				};
				class pylons2: pylons1 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.05, 0.45};
					mirroredMissilePos = 1;
				};
				class pylons3 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77", "O_KH25", "O_KAB250_BOMB"};
					attachment = "PylonMissile_Missile_AGM_KH25_x1";
					priority = 11;
					maxweight = 1050;
					UIposition[] = {0.55, 0.35};
				};
				class pylons4: pylons3 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons3, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.1, 0.35};
					mirroredMissilePos = 3;
				};
				class pylons5 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73", "O_R77", "O_KH25", "O_KAB250_BOMB"};
					attachment = "PylonMissile_Missile_AA_R77_x1";
					priority = 9;
					maxweight = 1200;
					UIposition[] = {0.5, 0.25};
				};
				class pylons6: pylons5 //inherits 5 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylons5, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.15, 0.25};
					mirroredMissilePos = 5;
				};
				class pylonBayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R73"};
					priority = 7;
					attachment = "";
					maxweight = 300;
					UIposition[] = {0.45, 0.15};
					bay = 2;
				};
				class pylonBayLeft1: pylonBayRight1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayRight1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.2, 0.15};
					mirroredMissilePos = 7;
					bay = 1;
				};
				class pylonBayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77"};
					priority = 5;
					attachment = "";
					maxweight = 750;
					UIposition[] = {0.33, 0.3};
					bay = 4;
				};
				class pylonBayLeft2: pylonBayRight2 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayRight2, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.35};
					mirroredMissilePos = 9;
					bay = 3;
				};
				class pylonBayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT"};
					priority = 2;
					attachment = "PylonMissile_Missile_AGM_KH25_INT_x1";
					maxweight = 750;
					UIposition[] = {0.33, 0.45};
					bay = 5;
				};
				class pylonBayCenter2: pylonBayCenter1 //inherits 6 parameters from bin\config.bin/CfgVehicles/O_Plane_Fighter_02_F/Components/TransportPylonsComponent/pylons/pylonBayCenter1, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					UIposition[] = {0.33, 0.5};
					mirroredMissilePos = 11;
				};
				class pylonBayCenter3 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					hardpoints[] = {"O_R77_INT", "O_KH25_INT", "O_KAB250_BOMB"};
					priority = 1;
					attachment = "PylonMissile_Missile_AGM_KH25_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.55};
					bay = 5;
				};
			};
			class Bays //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class BayLeft1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 0;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayLeft2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
				class BayRight2 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 1;
				};
				class BayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					bayOpenTime = 0.5;
					openBayWhenWeaponSelected = 1;
					autoCloseWhenEmptyDelay = 2;
				};
			};
			class Presets //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
			{
				class Empty //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Empty";
					attachment[] = {};
				};
				class Default //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "Default";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Bomb_KAB250_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Bomb_KAB250_x1"};
				};
				class AA //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "AA";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1"};
				};
				class CAS //sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
				{
					displayName = "CAS";
					attachment[] = {"PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AGM_KH25_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R73_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AA_R77_INT_x1", "PylonMissile_Missile_AGM_KH25_INT_x1"};
				};
			};
		};
	};	
};

class SOR_Ind_Fighter_CAS : SOR_IND_FIGHTER_BASE
{
	scope = 2;
	displayName = "JAS 39 Gripen (CAS)";
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_02"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_04\Data\UI\Fighter_04_3DEN_CA.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
			{
				class pylon1 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X", "I_AMRAAM_C_RAIL"};
					attachment = "PylonMissile_Missile_BIM9X_x1";
					priority = 5;
					maxweight = 300;
					UIposition[] = {0.55, 0.4};
				};
				class pylon2: pylon1 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon1, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.1, 0.4};
					mirroredMissilePos = 1;
				};
				class pylon3 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X_RAIL", "I_AMRAAM_C_RAIL", "I_AGM65_RAIL"};
					priority = 4;
					attachment = "PylonRack_Missile_AGM_02_x1";
					maxweight = 750;
					UIposition[] = {0.5, 0.35};
				};
				class Pylon4: pylon3 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon3, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.15, 0.35};
					mirroredMissilePos = 3;
				};
				class pylon5 //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					hardpoints[] = {"I_BIM9X_RAIL", "I_BIM9X_DUAL_RAIL", "I_AMRAAM_C_RAIL", "I_AMRAAM_C_DUAL_RAIL", "I_AGM65_RAIL", "I_AGM65_DUAL_RAIL", "I_GBU12"};
					priority = 3;
					attachment = "PylonRack_Missile_AGM_02_x2";
					maxweight = 1200;
					UIposition[] = {0.45, 0.3};
				};
				class Pylon6: pylon5 //inherits 5 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_04_Base_F/Components/TransportPylonsComponent/pylons/pylon5, sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					UIposition[] = {0.2, 0.3};
					mirroredMissilePos = 5;
				};
			};
			class Presets //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
			{
				class Empty //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "Empty";
					attachment[] = {};
				};
				class Default //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "Default";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x1"};
				};
				class AA //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "AA";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x1", "PylonRack_Missile_AMRAAM_C_x2", "PylonRack_Missile_AMRAAM_C_x2"};
				};
				class AT //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "AT";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x2", "PylonRack_Missile_AGM_02_x2"};
				};
				class CAS //sources - ["A3_Air_F_Jets_Plane_Fighter_04"]
				{
					displayName = "CAS";
					attachment[] = {"PylonMissile_Missile_BIM9X_x1", "PylonMissile_Missile_BIM9X_x1", "PylonRack_Missile_AGM_02_x1", "PylonRack_Missile_AGM_02_x1", "PylonMissile_Bomb_GBU12_x1", "PylonMissile_Bomb_GBU12_x1"};
				};
			};
		};
	};	
};

class SOR_Opfor_Fighter_CAS2 : RHS_Su25SM_KH29_vvsc
{
	editorCategory = "SOR_OPFor_Cat_Faction_VDV";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = SOR_OPFor_Faction_VDV;
	vehicleclass = "SOR_Aircraft";
	crew = "SOR_OPFor_JetPilot_VDV_AI";
	class TransportItems {item_xx(ACE_FieldDressing,10)};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks {pack_xx(SOR_Repair_Pack_D,1)};
};