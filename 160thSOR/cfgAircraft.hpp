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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,4);
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
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};
// Transport Helos
class SOR_B_Heli_Transport_01_camo_F : B_Heli_Transport_01_camo_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "UH-80 Ghost Hawk (C4/P12)";
/*	
	class eventHandlers
	{
		Init = "[_this select 0] call ace_fastroping_fnc_equipFRIES;";
	};
*/	
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,4);
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
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};	
};

class SOR_UH60M : RHS_UH60M
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	displayName = "UH-60M (C4/P12)";
	armorStructural = 4; // Was 2	
//		ace_fastroping_enabled = 1;
//		ace_fastroping_ropeOrigins[] = {{1.4, 1.9, -.4}};
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
		item_xx(V_RebreatherB,4);
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
		pack_xx(SOR_Repair_Pack_veh_D,1)			
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
//		transportFuel = 30000;
//		supplyRadius = 30;
//		ace_fastroping_enabled = 1;
//		ace_fastroping_ropeOrigins[] = {{0,-0.6,-3}};		
//		ace_refuel_fuelCargo = 10000;
//		ace_refuel_hooks[] = {[0.28,-4.99,-0.3],[-0.25,-4.99,-0.3]};
	armorStructural = 4; // Was 2	
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
			condition = "[this,'ramp_anim'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			displayName = "Close Ramp";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			shortcut = "user12";
			showwindow = 0;
			statement = "this animateSource ['ramp_anim', 0];[this] call rhs_fnc_cargoAttach";
		};
		class OpenCargoDoor
		{
			condition = "this animationSourcePhase 'ramp_anim' < 1 and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0)";
			displayName = "Open Ramp";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			shortcut = "user12";
			showwindow = 0;
			statement = "this animateSource ['ramp_anim', 1];{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects this;";
		};
		class LeverRamp
		{
			condition = "this animationSourcePhase 'ramp_anim' != 0.6 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
			displayName = "Lever Ramp";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			shortcut = "user13";
			showwindow = 0;
			statement = "this animateSource ['ramp_anim', 0.6];";
		};
		class VehicleParadrop
		{
			condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
			displayName = "Paradrop cargo";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			shortcut = "";
			showwindow = 0;
			statement = "[this] spawn rhs_fnc_vehPara";
		};
	};
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,4);			
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
		pack_xx(SOR_Repair_Pack_veh_D,1)			
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
//		ace_fastroping_enabled = 1;
//		ace_fastroping_ropeOrigins[] = {{1.4, 1.9, -.4}};		
	class TransportItems
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_Diving,3)
		item_xx(U_B_Wetsuit,3)
		item_xx(V_RebreatherB,5)
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
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
//		ace_fastroping_enabled = 1;
//		ace_fastroping_ropeOrigins[] = {{1.2,.8,0},{-1.2,.8,0}}; // outwards from ctr, forwards from ctr, vertical	(Gets stuck on seat)
//		ace_fastroping_ropeOrigins[] = {{1,1.2,-1.9},{-1,1.2,-1.9}}; // outwards from ctr, forwards from ctr, vertical	
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
//		ace_fastroping_enabled = 1;
//		ace_fastroping_ropeOrigins[] = {{1.2,.8,0},{-1.2,.8,0}};
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
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	ace_cargo_space = 40;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
};

//class SOR_A10 : RHS_A10_AT temporary change due to A-10 eject bug
class SOR_A10 : B_Plane_Fighter_01_F

{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	armor = 70; // was 60
	armorStructural = 5; //was 1
/*
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
*/	
};

//Fighters
class SOR_FIGHTER : B_Plane_Fighter_01_Stealth_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;	
	armor = 70; // was 60
	armorStructural = 5; //was 1
};

class SOR_STRIKE_FIGHTER : B_Plane_Fighter_01_Stealth_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_D;
	armor = 70; // was 60
	armorStructural = 5; //was 1
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,3);			
	};	
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
};	

class SOR_O_Heli_Attack_02_black_F : O_Heli_Attack_02_black_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "MI-48 Kajman (Black C2/P8)";
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
};

class SOR_O_Heli_Light_02_v2_F : O_Heli_Light_02_v2_F
{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Aircraft_Captured";
	vehicleclass = "SOR_Aircraft_Captured";
	faction = SOR_Faction_D;
	side=1;	
	displayName = "PO-30 Orca (B&W C2/P8)";
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
		item_xx(V_RebreatherB,2);			
	};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)
	};
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

