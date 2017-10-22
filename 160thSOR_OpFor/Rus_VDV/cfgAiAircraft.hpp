/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/06/17
	Description: cfgAiAircraft.hpp
*/

////////////	
// Planes //
////////////
class SOR_Opfor_Fighter_AA_AI : SOR_OPFOR_FIGHTER_BASE
{
	scope = 2;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV_AI";
	faction = SOR_OPFor_Faction_VDV_AI;
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

class SOR_Opfor_Fighter_CAS_AI : SOR_OPFOR_FIGHTER_BASE
{
	scope = 2;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV_AI";
	faction = SOR_OPFor_Faction_VDV_AI;
	displayName = "Sukhoi Su-35 (CAS)";
	hiddenSelectionsTextures[] = {"a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa", "a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
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

class SOR_Ind_Fighter_AA_AI : SOR_IND_FIGHTER_BASE
{
	scope = 2;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV_AI";
	faction = SOR_OPFor_Faction_VDV_AI;
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

class SOR_Ind_Fighter_CAS_AI : SOR_IND_FIGHTER_BASE
{
	scope = 2;
	editorCategory = "SOR_OPFor_Cat_Faction_VDV_AI";
	faction = SOR_OPFor_Faction_VDV_AI;
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