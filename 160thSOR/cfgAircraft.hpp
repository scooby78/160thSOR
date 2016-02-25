/*
	Name: 160th SOR Mod
	Author: Darce
	Date: 08/10/15 
	Description: cfgAircraft.hpp
*/

	class RHS_UH60M;
	class RHS_UH60M_MEV2;
	class RHS_CH_47F;
	class MELB_AH6M_H;
	class MELB_AH6M_L;
	class MELB_AH6M_M;
	class MELB_H6M;
	class MELB_MH6M;
	class FIR_F16C_TWAS;
	class FIR_F16C_TWAS2;
	class FIR_F16C;
	class FIR_F16C_Polish_CFT;
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
	class RHS_C130J;
	class RHS_A10;

// Transport Helos	
class SOR_UH60M : RHS_UH60M
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-60M (C4/P12)";
		hiddenSelections[] = {"camo1","camo2","160thSOR_Air_Logo"};
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
			class CloseCargoDoor
			{
				condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
				displayName = "Close right cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
			};
			class CloseCargoLDoor
			{
				condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
				displayName = "Close left cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
			};
			class OpenCargoDoor
			{
				condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
				displayName = "Open right cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
			};
			class OpenCargoLDoor
			{
				condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
				displayName = "Open left cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
			};
		};		
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
class SOR_CH_47F : RHS_CH_47F
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "CH-47F (C4/P24)[Refuel]";
		transportFuel = 30000;
		supplyRadius = 30;
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
			class CloseCargoDoor
			{
				condition = "this doorPhase 'ramp_anim' > 0 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
				displayName = "Close Ramp";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['ramp_anim', 0];";
			};
			class OpenCargoDoor
			{
				condition = "this doorPhase 'ramp_anim' == 0 and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0)";
				displayName = "Open Ramp";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['ramp_anim', 1];";
			};
		};
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
class SOR_UH60M_MEV2 : RHS_UH60M_MEV2
	{
		faction = SOR_Faction_D;
		vehicleClass = "SOR_Aircraft";
		displayName = "UH-60 MEV (C5/P7)";
		driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
		ejectDeadCargo = 1; //test dead eject
		crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
		getInRadius = 4;
		crew = "SOR_MEVPilot_D";
		class TransportItems
		{
			item_xx(ACE_Fielddressing,24)
			item_xx(ACE_morphine,16)
			item_xx(ACE_epinephrine,16)
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};		
		class TransportWeapons
		{
			weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
class SOR_MELB_H6M : MELB_H6M
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "H-6M (C2/P2)";
		fuelCapacity = 110; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
class SOR_MELB_MH6M : MELB_MH6M
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "MH-6M (C2/P6)";
		fuelCapacity = 110; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
class SOR_MELB_MH6M_MEV : MELB_MH6M
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "MH-6M MEV (C2/P6)";
		driverCanEject = 1; // was 0 test eject
		ejectDeadCargo = 1; //test dead eject	
		getInRadius = 4;
		class TransportItems 
		{
			item_xx(ACE_Fielddressing,24)
			item_xx(ACE_morphine,16)
			item_xx(ACE_epinephrine,16)
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
// Attack Helos	
class SOR_MELB_AH6M_L : MELB_AH6M_L
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_L (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
class SOR_MELB_AH6M_M : MELB_AH6M_M
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_M (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

class SOR_MELB_AH6M_H : MELB_AH6M_H
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_H (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
class SOR_RHS_AH64D_AA : RHS_AH64D_AA
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (AA)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

class SOR_RHS_AH64D_CS : RHS_AH64D_CS
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (Close-Support)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};		
	
class SOR_RHS_AH64D_GS : RHS_AH64D_GS
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (Ground-Suppression)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};		
	
////////////	
// Planes //
////////////
class SOR_RHS_A10 : RHS_A10
	{
		faction = SOR_Faction_D;
		vehicleClass = "SOR_Aircraft";
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
/*
C130 broken and buggy do not use 25/02/2016

class SOR_RHS_C130J : RHS_C130J
	{
		faction = SOR_Faction_D;
		vehicleClass = "SOR_Aircraft";
		displayName = "C130J (C3/P24/V1)";
		class UserActions
		{
			class SOR_AutoDrop
			{
				condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
				displayName = "<t color='#008000'>Start Drop!</t>";
				displayNameDefault = "<t color='#008000'>Start Drop!</t>";
				onlyForPlayer = 0;
				position = "";
				radius= 8;				
				priority = 1;
				showWindow = 0;
				hideOnUse = 1;
				statement = "[this] spawn sor_fnc_autoparadrop";
			};
			class closefdoor
			{
				condition = "(this doorPhase 'door_1' == 1) AND Alive(this)";
				displayName = "Close Crew Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_1',0]";
			};
			class Closeldoor
			{
				condition = "(this doorPhase 'door_2_1' == 1) AND Alive(this)";
				displayName = "Close Left Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_2_1',0];this setVariable ['doorhandler_L',0,true]";
			};
			class CloseRamp
			{
				condition = "(this doorPhase 'ramp' == 1) AND Alive(this)";
				displayName = "Close Cargo Ramp";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['ramp',0];[this] call rhs_fnc_cargoAttach";
			};
			class Closerdoor
			{
				condition = "(this doorPhase 'door_2_2' == 1) AND Alive(this)";
				displayName = "Close Right Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_2_2',0];this setVariable ['doorhandler_R',0,true]";
				
			};
			class openfdoor
			{
				condition = "(this doorPhase 'door_1' == 0) AND Alive(this)";
				displayName = "Open Crew Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_1',1]";
			};
			class OpenLdoor
			{
				condition = "(this doorPhase 'door_2_1' == 0) AND Alive(this)";
				displayName = "Open Left Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_2_1',1];this setVariable ['doorhandler_L',1,true]";
			};
			class OpenRamp
			{
				condition = "(this doorPhase 'ramp' == 0) AND Alive(this)";
				displayName = "Open Cargo Ramp";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['ramp',1];{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects this";
			};
			class OpenRdoor
			{
				condition = "(this doorPhase 'door_2_2' == 0) AND Alive(this)";
				displayName = "Open Right Door";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "this animateDoor ['door_2_2',1];this setVariable ['doorhandler_R',1,true]";
			};
			class VehicleParadrop
			{
				condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
				displayName = "Paradrop cargo";
				onlyforplayer = 1;
				position = "pos_gunner";
				radius = 6;
				statement = "[this] spawn rhs_fnc_vehPara";
			};
		};
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
*/

/*  

Currently broken since latest FIR F16 mod update


//Training ammo (non leathal)
class SOR_FIR_F16C_TWAS : FIR_F16C_TWAS
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C Non-Lethal Training Aircraft [Blue Team]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	
//Attack Jets

/* F16C custom loadout function by Firewill

how to use
"hardpoint1","hardpoint2","hardpoint3","hardpoint4","hardpoint5","hardpoint5A","hardpoint6","hardpoint7","hardpoint8","hardpoint9"

example
[(_this select 0),"aim9l","","","fueltank","ecmjammer","","fueltank","","","aim9l"] call FIR_Fnc_F16_SetLoadout;

support weapon classname list
hardpoint 1,2,8,9 = aim9l / aim9x / aim120 / aim9twas / aim120twas
hardpoint 3,7 = aim9l / aim9x / aim120 /aim9twas/aim120twas / gbu10 / gbu12x1 / gbu12x2 / gbu31 / gbu32 / gbu38x1 / gbu38x2 / gbu38x3 / agm65dx1 / agm65dx3 / agm65g / agm65l / agm88 / mk82x3 / cbu103 / hydrax1 / hydrax2 / hydrax3 / zuni / mk82gpx3
hardpoint 4,6 = fueltank / gbu10 / gbu12x1 / gbu12x2 / gbu12x3 / gbu31 / gbu32 / gbu38x1 / gbu38x2 / gbu38x3 / agm65dx1 / agm65g / agm65l / mk82x3 / cbu103 / hydrax1 / hydrax2 / hydrax3 / zuni / mk82gpx3
hardpoint 5 = ecmpod / twaspod / fueltank_300gal
hardpoint 5a = htspod / lantirnpod

if you want don't add weapon in hardpoint, just leave empty.


class SOR_FIR_F16C_AA : FIR_F16C
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C [AA]";
		maxSpeed = 1200; //test
		threat[] = {0.1,0.8,1};
		class eventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_F16\sqs\init\init.sqf"";_null = [(_this select 0),""aim9x"",""aim120"",""agm88"","""","""",""htspod"","""",""agm88"",""aim120"",""aim9x""] call FIR_Fnc_F16_SetLoadout;";
		};
		class UserActions
		{
			class Eject
			{
				condition = "player in this and isengineon this";
				displayName = "<t color='#a72121'>Ejection Seat</t>";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pos cano";
				priority = 6;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] execVM ""\FIR_F16\sqs\Ejection\Ejection.sqf"";";
			};
			class F16_Gui_Open
			{
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				displayName = "<t color='#739eff'>Open Dialog</t>";
				onlyforplayer = "false";
				position = "pos cano";
				priority = 6;
				radius = 15;
				shortcut = "User6";
				statement = "this execVM ""\FIR_F16\sqs\loadout\F16_GUI_Open.sqf""";
			};
			class ClearRadarTGT
			{
				condition = "currentweapon this == ""FIR_AGM88"" and this animationPhase ""WWSwitch"" >= 0.9 ;";
				displayName = "Clear Radar Target";
				onlyforplayer = "False";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				statement = "[this] execVM ""\FIR_F16\sqs\SEAD\harmoff.sqf"";";
			};
			class FindRadarTGT
			{
				condition = "currentweapon this == ""FIR_AGM88"" and this animationPhase ""WWSwitch"" <= 0.1";
				displayName = "Find Radar Target";
				onlyforplayer = "False";
				position = "pos cano";
				radius = 15;
				shortcut = "User5";
				statement = "[this] execVM ""\FIR_F16\sqs\SEAD\harm.sqf"";";
			};
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_FIR_F16C_CAS : FIR_F16C
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C [CAS]";
		maxSpeed = 1200; //test
		threat[] = {0.5,1,0.8};
		class eventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_F16\sqs\init\init.sqf"";_null = [(_this select 0),""aim9x"","""",""agm65l"",""gbu38x3"","""","""",""gbu38x3"",""agm65l"","""",""aim9x""] call FIR_Fnc_F16_SetLoadout; _null = (_this select 0) setvariable [""F16_Tex"",""ROKAF""];";
		};
		class UserActions
		{
			class Eject
			{
				condition = "player in this and isengineon this";
				displayName = "<t color='#a72121'>Ejection Seat</t>";
				hideOnUse = 1;
				onlyforplayer = 1;
				position = "pos cano";
				priority = 6;
				radius = 10;
				shortcut = "Eject";
				showWindow = 0;
				statement = "[this] execVM ""\FIR_F16\sqs\Ejection\Ejection.sqf"";";
			};
			class F16_Gui_Open
			{
				condition = "((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1))";
				displayName = "<t color='#739eff'>Open Dialog</t>";
				onlyforplayer = "false";
				position = "pos cano";
				priority = 6;
				radius = 15;
				shortcut = "User6";
				statement = "this execVM ""\FIR_F16\sqs\loadout\F16_GUI_Open.sqf""";
			};			
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	

class SOR_FIR_F16C_TWAS3 : FIR_F16C_TWAS2
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C Non-Lethal Training Aircraft [Red Team]";
		maxSpeed = 1200; //test
		class eventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_F16\sqs\init\init.sqf"";_null = (_this select 0) setvariable [""F16_Tex"",""Ag_Flanker""];";
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};		

*/	
/////////////////////
//Captured Aircraft//
/////////////////////

//Transport (This is the only one that can attach and drop pods)
class SOR_O_Heli_Transport_04_F : O_Heli_Transport_04_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleClass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (C3/POD)";
		class eventHandlers
		{
			init="_this call SLX_XEH_EH_Init;";
		};
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
// Medivac Taru (Fixed pod)
class SOR_O_Heli_Transport_04_medevac_F : O_Heli_Transport_04_medevac_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleClass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (Medical C3/P4)";
		class TransportItems
		{
			item_xx(ACE_Fielddressing,24)
			item_xx(ACE_morphine,16)
			item_xx(ACE_epinephrine,16)
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

// Troop transport Taru (fixed pod)	
class SOR_O_Heli_Transport_04_bench_F : O_Heli_Transport_04_bench_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (Bench C3/P8)";
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
		};		
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

// Covered Troop transport Taru (fixed pod)
class SOR_O_Heli_Transport_04_covered_F : O_Heli_Transport_04_covered_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (Covered C3/P16)";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

// Civilial troop transport	
class SOR_RHS_Mi8amt_civilian : RHS_Mi8amt_civilian
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-8AMT (C2/P20)";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	

//Attack
class SOR_O_Heli_Attack_02_F : O_Heli_Attack_02_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-48 Kajman (C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,16);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

class SOR_O_Heli_Attack_02_black_F : O_Heli_Attack_02_black_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-48 Kajman (Black C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,16);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

class SOR_O_Heli_Light_02_v2_F : O_Heli_Light_02_v2_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "PO-30 Orca (B&W C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,16);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

//Jets	
class SOR_O_Plane_CAS_02_B : O_Plane_CAS_02_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "Yak-130 [CAS]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_I_Plane_Fighter_03_AA_B : I_Plane_Fighter_03_AA_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "L159 ALCA [AA]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_I_Plane_Fighter_03_CAS_B : I_Plane_Fighter_03_CAS_F
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "L159 ALCA [CAS]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

//////////////////
//OpFor Versions//	
//////////////////

//Live ammo
/*
class SOR_FIR_F16C_OPFOR : FIR_F16C_Polish_CFT
	{
		side=0;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C OpFor";
		maxSpeed = 1200; //test
		class eventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_F16\sqs\init\init.sqf"";_null = (_this select 0) setvariable [""F16_Tex"",""Ag_Flanker""];";
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	
//Training ammo (non leathal)	
class SOR_FIR_F16C_TWAS2 : FIR_F16C_TWAS2
	{
		side=0;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "F16-C Non-Lethal Training Aircraft [Red Team OpFor]";
		maxSpeed = 1200; //test		
		class eventHandlers
		{
			Init = "[_this select 0] execVM ""\FIR_F16\sqs\init\init.sqf"";_null = (_this select 0) setvariable [""F16_Tex"",""Ag_Flanker""];";
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	
*/
class SOR_I_Plane_Fighter_03_AA_F : I_Plane_Fighter_03_AA_F
	{
		side=0;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "L159 ALCA [AA] OpFor";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_I_Plane_Fighter_03_CAS_F : I_Plane_Fighter_03_CAS_F
	{
		side=0;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Aircraft";
		displayName = "L159 ALCA [CAS] OpFor";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	