/*
	Name: 160th SOR Mod
	Author: Darce
	Date: 08/10/15 
	Description: cfgAircraft.hpp
*/

class RHS_UH60M;
class RHS_UH60M_MEV2;
class RHS_CH_47F;
class RHS_MELB_AH6M_H;
class RHS_MELB_AH6M_L;
class RHS_MELB_AH6M_M;
class RHS_MELB_H6M;
class RHS_MELB_MH6M;
class O_Heli_Transport_04_F;
class O_Heli_Transport_04_medevac_F;
class O_Heli_Transport_04_bench_F;
class O_Heli_Transport_04_covered_F;
class O_Heli_Attack_02_F;
class O_Heli_Attack_02_black_F;
class O_Heli_Light_02_v2_F;
class O_Plane_CAS_02_F;
class RHS_Mi8amt_civilian;
class I_Plane_Fighter_03_AA_F;
class I_Plane_Fighter_03_CAS_F;
class RHS_AH64D_AA;
class RHS_AH64D_CS;
class RHS_AH64D_GS;
class RHS_A10_AT;
class B_Heli_Transport_01_camo_F;
class B_T_VTOL_01_infantry_F;
class RHS_C130J;
class B_Plane_Fighter_01_F;
class B_Plane_Fighter_01_Stealth_F;

class SOR_VTOL_Troop_D : B_T_VTOL_01_infantry_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "V-44 X Blackfish (Infantry C4/P32)";
	armorStructural = 4; //was 1
	damageResistance = 0.004; //was 0.001
	Airborne_Transport_Inventory
};
// Transport Helos
class SOR_B_Heli_Transport_01_camo_F : B_Heli_Transport_01_camo_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "UH-80 Ghost Hawk (C4/P12)";
	Airborne_Transport_Inventory	
};

class SOR_UH60M : RHS_UH60M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "UH-60M (C4/P12)";
	armorStructural = 4; // Was 2	
	Airborne_Transport_Inventory
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D') && ((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class OpenCargoDoor //sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Open right cargo door";
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
			statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
			onlyforplayer = 1;
		};
		class CloseCargoDoor: OpenCargoDoor //inherits 7 parameters from bin\config.bin/CfgVehicles/RHS_UH60M/UserActions/OpenCargoDoor, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Close right cargo door";
			condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
			statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
		};
		class OpenCargoLDoor: OpenCargoDoor //inherits 7 parameters from bin\config.bin/CfgVehicles/RHS_UH60M/UserActions/OpenCargoDoor, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Open left cargo door";
			condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
			statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
			onlyforplayer = 1;
		};
		class CloseCargoLDoor: OpenCargoDoor //inherits 7 parameters from bin\config.bin/CfgVehicles/RHS_UH60M/UserActions/OpenCargoDoor, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Close left cargo door";
			condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
			statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
		};
		class ToggleLight //sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Toggle interior light";
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			condition = "player in this && (player == driver this || player == gunner this);";
			statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
			onlyforplayer = 1;
		};
	};		
};

class SOR_CH_47F : RHS_CH_47F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "CH-47F (C4/P24)";
	ace_cargo_space = 20;
	armorStructural = 4; // Was 2	
	crew = "SOR_HeliPilot_D";
	Airborne_Transport_Inventory
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D') && ((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class OpenCargoDoor //sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Open Ramp";
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			condition = "this animationSourcePhase 'ramp_anim' < 1 and (alive this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp_anim', 1];{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects this;";
			onlyforplayer = 1;
			shortcut = "user12";
		};
		class LeverRamp: OpenCargoDoor //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_CH_47F/UserActions/OpenCargoDoor, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Lever Ramp";
			condition = "this animationSourcePhase 'ramp_anim' != 0.6 and (alive this) and (alive this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp_anim', 0.6];";
			shortcut = "user13";
		};
		class CloseCargoDoor: OpenCargoDoor //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_CH_47F/UserActions/OpenCargoDoor, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Close Ramp";
			condition = "this animationSourcePhase 'ramp_anim' > 0 and (alive this) and (alive this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp_anim', 0];[this] call rhs_fnc_cargoAttach";
		};
		class VehicleParadrop: OpenCargoDoor //inherits 4 parameters from bin\config.bin/CfgVehicles/RHS_CH_47F/UserActions/MoveInside, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Paradrop cargo";
			condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "[this] spawn rhs_fnc_vehPara";
			shortcut = "";
		};
		class ToggleLight //sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Toggle interior light";
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			condition = "player in this && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
			onlyforplayer = 1;
		};
	};
};

class SOR_UH60M_MEV : RHS_UH60M_MEV2
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "UH-60 MEV (C5/P7)";
	driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
	ejectDeadCargo = 1; //test dead eject
	crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
	getInRadius = 5;	
	radarType = 4;	
	armorStructural = 4; // Was 2			
	crew = "SOR_MEVPilot_D";
	Airborne_Medical_Inventory
};

class SOR_MELB_H6M : RHS_MELB_H6M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "H-6M (C2/P2)";
	armorStructural = 4; // Was 50
	fuelCapacity = 110; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	Airborne_Transport_Inventory
};	

class SOR_MELB_MH6M : RHS_MELB_MH6M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "MH-6M (C2/P6)";
	armorStructural = 4; // Was 50
	fuelCapacity = 110; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	Airborne_Attack_Inventory
};	

class SOR_MELB_MH6M_MEV : RHS_MELB_MH6M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "MH-6M MEV (C2/P6)";
	armorStructural = 4; // Was 50
	driverCanEject = 1; // was 0 test eject
	ejectDeadCargo = 1; //test dead eject	
	getInRadius = 5;
	Airborne_Medical_Inventory
};	

// Attack Helos	
class SOR_MELB_AH6M_L : RHS_MELB_AH6M_L
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-6M_L (C2/P1)";
	armorStructural = 4; // Was 50		
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	Airborne_Attack_Inventory
};	

class SOR_MELB_AH6M_M : RHS_MELB_AH6M_M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-6M_M (C2/P1)";
	armorStructural = 4; // Was 50
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	Airborne_Attack_Inventory
};	

class SOR_MELB_AH6M_H : RHS_MELB_AH6M_H
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-6M_H (C2/P1)";
	armorStructural = 4; // Was 50		
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	Airborne_Attack_Inventory
};	

class SOR_AH64D_AA : RHS_AH64D_AA
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-64D (AA)";
	armor = 80; //was 50 (UH-60 is 60!) 
	fuelCapacity = 200; //was 500 
	Airborne_Attack_Inventory
};	

class SOR_AH64D_CS : RHS_AH64D_CS
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-64D (Close-Support)";
	armor = 80; //was 50 (UH-60 is 60!) 
	fuelCapacity = 200; //was 500 
	Airborne_Attack_Inventory
};		

class SOR_AH64D_GS : RHS_AH64D_GS
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "AH-64D (Ground-Suppression)";
	armor = 80; //was 50 (UH-60 is 60!) 
	fuelCapacity = 200; //was 500 
	Airborne_Attack_Inventory
};		

////////////	
// Planes //
////////////
class SOR_Transport : RHS_C130J
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "C130J (C2/P25)";
	ace_cargo_space = 40;
    maximumLoad = 5000;
	crew = "SOR_HeliPilot_D";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
		pack_xx(B_Parachute,27)
	};
	class UserActions //sources - ["RHS_US_A2_AirImport"]
	{
		class OpenRamp //sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Open Cargo Ramp";
			position = "pos_gunner";
			onlyforplayer = 1;
			showWindow = 0;
			radius = 6;
			condition = "(this animationSourcePhase 'ramp' <= 0.65) AND Alive(this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp',1];{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects this";
			shortcut = "user12";
		};
		class LeverRamp: OpenRamp //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/OpenRamp, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Lever Ramp";
			condition = "this animationSourcePhase 'ramp' != 0.65 and (alive this) && player in this && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp', 0.65];";
			shortcut = "user13";
		};
		class CloseRamp: OpenRamp //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/OpenRamp, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Close Cargo Ramp";
			condition = "(this animationSourcePhase 'ramp' >= 0.65) AND Alive(this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "this animateSource ['ramp',0];[this] call rhs_fnc_cargoAttach";
			shortcut = "user12";
		};
		class MoveInside: OpenRamp //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/OpenRamp, sources - ["RHS_US_A2_AirImport"]
		{
			priority = 11.007;
			displayName = "<t color='#03F243'>Move inside</t>";
			showWindow = 1;
			hideOnUse = 1;
			condition = "!(player == driver this) && ((call rhsusf_fnc_findPlayer) in this) and SOR_MoveInsideOK";
			statement = "SOR_TroopParaJump_Active = false; [this] spawn SOR_fnc_parajumpTroop; [this] spawn rhs_fnc_moveInside";
			shortcut = "";
		};
		class MoveInsideOK: OpenRamp //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/OpenRamp, sources - ["RHS_US_A2_AirImport"]
		{
			priority = 11.007
			displayName = "<t color='#03F243'>Troop Jump Ready</t>";
			condition = "(player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D') && ((getPosATL this) select 2 > 300) && !SOR_MoveInsideOK && (this animationSourcePhase 'ramp' >= 0.65)";
			statement = "SOR_MoveInsideOK = true; publicVariable 'SOR_MoveInsideOK'";
			shortcut = "";
		};
		class MoveInsideNotOK: OpenRamp //inherits 8 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/OpenRamp, sources - ["RHS_US_A2_AirImport"]
		{
			priority = 11.007;
			displayName = "<t color='#FF0000'>Troop Jump Stop</t>";
			condition = "(player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D') && ((getPosATL this) select 2 > 300) && SOR_MoveInsideOK";
			statement = "SOR_MoveInsideOK = false; publicVariable 'SOR_MoveInsideOK'";
			shortcut = "";
		};		
		class VehicleParadrop: OpenRamp //inherits 4 parameters from bin\config.bin/CfgVehicles/RHS_C130J/UserActions/MoveInside, sources - ["RHS_US_A2_AirImport"]
		{
			displayName = "Paradrop cargo";
			condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D')";
			statement = "[this] spawn rhs_fnc_vehPara";
			shortcut = "";
		};
		class OpenMenu //sources - ["RHS_US_A2_AirImport"]
		{
			userActionID = 74;
			priority = 11.008;
			displayName = "<t color='#FDDE00'>Open control panel</t>";
			position = "pos_gunner";
			radius = 10;
			animPeriod = 2;
			onlyForplayer = 1;
			showWindow = 0;
			condition = "((call rhsusf_fnc_findPlayer) in this) && (player == driver this || player == gunner this || player isKindOf 'B_Pilot_F' || player isKindOf 'B_crew_F' || player isKindOf 'SOR_AirCommand_D' || player isKindOf 'SOR_ParaJumper_D')";
			statement = "[this] call rhs_fnc_c130j_openMenu";
		};
	};
};

//Fighters
class SOR_FIGHTER_BASE: B_Plane_Fighter_01_Stealth_F
{
	class Components;
};

class SOR_FIGHTER : SOR_FIGHTER_BASE
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;	
	armor = 70; // was 60
	armorStructural = 5; //was 1
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
			{
				class pylonDummy1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					attachment = "";
					UIposition[] = {10, 10};
				};
				class pylonDummy2: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy3: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonDummy4: pylonDummy1 //inherits 2 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonDummy1, sources - []
				{
				};
				class pylonBayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_BIM9X"};
					priority = 10;
					attachment = "PylonMissile_Missile_BIM9X_x1";
					maxweight = 1200;
					UIposition[] = {0.5, 0.25};
					bay = 2;
				};
				class pylonBayLeft1: pylonBayRight1 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayRight1, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.16, 0.25};
					mirroredMissilePos = 5;
					bay = 1;
				};
				class pylonBayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT"};
					priority = 9;
					attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.3};
					bay = 3;
				};
				class pylonBayCenter2: pylonBayCenter1 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayCenter1, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.35};
					mirroredMissilePos = 7;
				};
				class pylonBayCenter3 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT"};
					priority = 7;
					attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.4};
					bay = 3;
				};
				class pylonBayCenter4: pylonBayCenter3 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayCenter3, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.45};
					mirroredMissilePos = 9;
				};
				class pylonBayCenter5 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT", "B_GBU12"};
					priority = 5;
					attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.5};
					bay = 3;
				};
				class pylonBayCenter6: pylonBayCenter5 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_Stealth_F/Components/TransportPylonsComponent/pylons/pylonBayCenter5, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.55};
					mirroredMissilePos = 11;
				};
			};
		};
	};	
};

class SOR_STRIKE_FIGHTER_BASE: B_Plane_Fighter_01_F
{
	class Components;
};

class SOR_STRIKE_FIGHTER : SOR_STRIKE_FIGHTER_BASE
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	armor = 70; // was 60
	armorStructural = 5; //was 1
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
	class Components: Components //inherits 4 parameters from bin\config.bin/CfgVehicles/Plane_Fighter_01_Base_F/Components, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
	{
		class TransportPylonsComponent //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
		{
			UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
			class pylons //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
			{
				class pylon1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_BIM9X_RAIL", "B_BIM9X_DUAL_RAIL", "B_AMRAAM_D_RAIL", "B_AMRAAM_D_DUAL_RAIL", "B_AGM65_RAIL", "B_GBU12"};
					attachment = "PylonMissile_Bomb_GBU12_x1";
					priority = 12;
					maxweight = 300;
					UIposition[] = {0.6, 0.45};
				};
				class pylon2: pylon1 //inherits 5 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylon1, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.05, 0.45};
					mirroredMissilePos = 1;
				};
				class pylon3 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_BIM9X_RAIL", "B_BIM9X_DUAL_RAIL", "B_AMRAAM_D_RAIL", "B_AMRAAM_D_DUAL_RAIL", "B_AGM65_RAIL", "B_AGM65_DUAL_RAIL", "B_GBU12", "B_GBU12_DUAL_RAIL"};
					priority = 11;
					attachment = "PylonRack_Missile_AGM_02_x2";
					maxweight = 1050;
					UIposition[] = {0.55, 0.35};
				};
				class pylon4: pylon3 //inherits 5 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylon3, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.1, 0.35};
					mirroredMissilePos = 3;
				};
				class pylonBayRight1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_BIM9X"};
					priority = 10;
					attachment = "PylonMissile_Missile_BIM9X_x1";
					maxweight = 1200;
					UIposition[] = {0.5, 0.25};
					bay = 2;
				};
				class pylonBayLeft1: pylonBayRight1 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylonBayRight1, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.16, 0.25};
					mirroredMissilePos = 5;
					bay = 1;
				};
				class pylonBayCenter1 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT"};
					priority = 9;
					attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.3};
					bay = 3;
				};
				class pylonBayCenter2: pylonBayCenter1 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylonBayCenter1, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.35};
					mirroredMissilePos = 7;
				};
				class pylonBayCenter3 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT"};
					priority = 7;
					attachment = "";
					maxweight = 1200;
					UIposition[] = {0.33, 0.4};
					bay = 3;
				};
				class pylonBayCenter4: pylonBayCenter3 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylonBayCenter3, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.45};
					mirroredMissilePos = 9;
				};
				class pylonBayCenter5 //sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					hardpoints[] = {"B_AMRAAM_D_INT", "B_GBU12"};
					priority = 5;
					attachment = "PylonMissile_Bomb_GBU12_x1";
					maxweight = 1200;
					UIposition[] = {0.33, 0.5};
					bay = 3;
				};
				class pylonBayCenter6: pylonBayCenter5 //inherits 6 parameters from bin\config.bin/CfgVehicles/B_Plane_Fighter_01_F/Components/TransportPylonsComponent/pylons/pylonBayCenter5, sources - ["A3_Air_F_Jets_Plane_Fighter_01"]
				{
					UIposition[] = {0.33, 0.55};
					mirroredMissilePos = 11;
				};
			};
		};
	};
};

//class SOR_A10 : RHS_A10_AT temporary change due to A-10 eject bug
class SOR_A10 : SOR_STRIKE_FIGHTER
{
/*
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	armor = 70; // was 60
	armorStructural = 5; //was 1
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
*/	
};
/////////////////////
//Captured Aircraft//
/////////////////////

//Transport (This is the only one that can attach and drop pods)
class SOR_O_Heli_Transport_04_F : O_Heli_Transport_04_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;		
	displayName = "MI-290 Taru (C3/POD)";
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class eventHandlers
	{
		init="_this call SLX_XEH_EH_Init;";
	};
	Airborne_Transport_Inventory
};

// Civilial troop transport	
class SOR_Mi8amt_civ : RHS_Mi8amt_civilian
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "MI-8AMT (C2/P20)";
	Airborne_Transport_Inventory
};


//Attack
class SOR_O_Heli_Attack_02_F : O_Heli_Attack_02_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "MI-48 Kajman (C2/P8)";
	Airborne_Transport_Inventory
};	

class SOR_O_Heli_Attack_02_black_F : O_Heli_Attack_02_black_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "MI-48 Kajman (Black C2/P8)";
	Airborne_Transport_Inventory
};

class SOR_O_Heli_Light_02_v2_F : O_Heli_Light_02_v2_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "PO-30 Orca (B&W C2/P8)";
	Airborne_Transport_Inventory
};	

//Jets	
class SOR_O_Plane_CAS_02_B : O_Plane_CAS_02_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "Yak-130 [CAS]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

class SOR_I_Plane_Fighter_03_AA_B : I_Plane_Fighter_03_AA_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "L159 ALCA [AA]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

class SOR_I_Plane_Fighter_03_CAS_B : I_Plane_Fighter_03_CAS_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "L159 ALCA [CAS]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};