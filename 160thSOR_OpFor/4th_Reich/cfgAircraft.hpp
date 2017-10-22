/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgAircraft.hpp
*/


class sfp_bo105_pah1;
class sfp_bo105_rmp;
//class O_Plane_Fighter_02_Stealth_F; // defined already in 160thSOR_OpFor\Rus_VDV\CfgAircraft.hpp
class B_T_VTOL_01_armed_F;
class B_T_VTOL_01_vehicle_F;
class B_T_VTOL_01_infantry_F;

class Nazi_Bo105_Armed : sfp_bo105_pah1
{
    displayName = "Reich BO105 PAH1";
	side = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	typicalCargo[]=	{"Reich_Pilot"};
	class TransportItems 
	{

	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportBackpacks
	{
		
	};
};

class Nazi_Bo105_rpm: sfp_bo105_rmp
{
    displayName = "Reich BO105 RMP 250 ";
	side = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	typicalCargo[]=	{"Reich_Pilot"};
	weapons[] = {"sfp_hmp250","sfp_hydraPod"};

	class TransportItems 
	{

	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{

	};
	class TransportBackpacks
	{
		
	};
};

class Nazi_FIGHTER_BASE: O_Plane_Fighter_02_Stealth_F
{
	scope = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	displayName = "Reich PAK FA";	
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Grey_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
	class Components;
};

class Nazi_Fighter: Nazi_FIGHTER_BASE
{
	scope = 2;
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
class Nazi_Gunship: B_T_VTOL_01_armed_F
{
    displayName = "Reich VTOL Gunship";
	side = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};
class Nazi_VTOL_Transport: B_T_VTOL_01_infantry_F
{
    displayName = "Reich VTOL INF Transport";
	side = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};
class Nazi_VTOL_Transport2: B_T_VTOL_01_vehicle_F
{
    displayName = "Reich VTOL VEH Transport";
	side = 0;
	editorCategory = "SOR_Reich_Cat_Faction_VDV_AI";
	editorSubcategory = "SOR_OPFor_SubCat_Aircraft";
	faction = "the_fourth_reich";
	vehicleclass = "SOR_Aircraft";
	crew="Reich_Pilot";
	armorStructural = 4;
	hiddenSelections[] = 
	{
		"Camo_1",
		"Camo_2",
		"Camo_3",
		"Camo_4",
	};
	hiddenSelectionsTextures[] = 
	{
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT01.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT02.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT03.paa",
		"160thSOR_OpFor\4th_Reich\data\Nazi_VTOL_EXT04.paa"
	};
};