/*
	Name: 160th SOR Mod
	Author: AmTheAgent & Scooby
	Date: 27/09/15 01:09
	Description: cfgPatches.hpp
*/

class CfgPatches 
{
	class SOR_Desert_Loadouts 
	{
		units[] = {"SOR_Base","SOR_Actual_D","SOR_TeamLeader_D","SOR_Medic_D","SOR_M249AR_D","SOR_M240AR_D","SOR_Grenadier_D","SOR_Rifleman_D","SOR_RiflemanAT_D","SOR_Teamleader_DT"
					,"SOR_ReconSpotter_D","SOR_Recon_M249AR_D","SOR_Marksman_D","SOR_ReconRifleman_D","SOR_ReconJTAC_D","SOR_ReconLeader_D","SOR_Spotter_D","SOR_Sniper_D"
					,"SOR_HeliPilot_D","SOR_HeliCrew_D","SOR_RTO_D","SOR_Commander_D","SOR_JetPilot_D","SOR_MEVPilot_D","SOR_ParaJumper_D","SOR_MechOperator_D","SOR_MechCrewCommander_D"
					,"SOR_MechCrew_D","SOR_MechCommand_D","SOR_M2A3_BUSKIII","SOR_HelipadRescue_F","SOR_Land_HelipadCircle_F","SOR_MechService","SOR_MechDriver_D","SOR_Engineer_D"
					,"SOR_MORRFL_D","SOR_MORCarrier_D","SOR_MORGunner_D","SOR_MORActual_D","SOR_HMGRFL_D","SOR_HMGCarrier_D","SOR_HMGGunner_D","SOR_HMGActual_D","SOR_Rilfeman_Ammo_D"
					,"SOR_UH60M","SOR_CH_47F","SOR_UH60M_MEV2","SOR_MELB_H6M","SOR_MELB_MH6M","SOR_MELB_AH6M_L","SOR_MELB_AH6M_M","SOR_FIR_F16C_TWAS","SOR_FIR_F16C_TWAS2","SOR_FIR_F16C_OPFOR","SOR_FIR_F16C_AA";"SOR_FIR_F16C_TWAS3","SOR_MELB_MH6M_MEV"
					,"SOR_O_Heli_Transport_04_medevac_F","SOR_O_Heli_Transport_04_covered_F","SOR_O_Heli_Attack_02_F","SOR_O_Heli_Attack_02_black_F","SOR_O_Plane_CAS_02_F","SOR_O_Heli_Light_02_v2_F"
					,"SOR_I_Plane_Fighter_03_CAS_F","SOR_I_Plane_Fighter_03_AA_F","SOR_I_Plane_Fighter_03_AA_B","SOR_I_Plane_Fighter_03_CAS_B","SOR_RHS_Mi8amt_civilian","SOR_RHS_AH64D_AA","SOR_FIR_F16C_CAS"
					,"SOR_Land_Medevac_HQ_V1_F","SOR_B_Slingload3","SOR_B_Slingload2","SOR_B_Slingload","SOR_RHS_AH64D_CS","SOR_RHS_AH64D_GS","SOR_MELB_AH6M_H","SOR_Box_NATO_WpsSpecial_F"
					,"SOR_M2A3_BUSKIII","SOR_rhsusf_m113d_usarmy","SOR_rhsusf_m1a2sep1tuskid_usarmy","SOR_rhsusf_m1a2sep1tuskiid_usarmy","SOR_rhsusf_m1025_d_Mk19","SOR_HW_Box_F"
					,"SOR_Land_Flush_Light_green_F","SOR_Land_Flush_Light_red_F","SOR_Land_Flush_Light_yellow_F","SOR_Land_PortableLight_double_F","SOR_B_Slingload_01_Cargo_F",
					,"SOR_Gunrack1","SOR_PJ_Box_F","SOR_Air_LP","SOR_A_Box_F","SOR_M_Box_F","SOR_E_Box_F","SOR_G_Box_F","SOR_S_Box_F","SOR_divegear","SOR_A_Crate_F","SOR_AM_Crate_F","SOR_HMG_Crate_F","SOR_MOR_Crate_F"
					,"SOR_rhsusf_m1025_d","SOR_rhsusf_m1025_d_m2","SOR_B_SDV_01_F","SOR_rhsusf_m1025_d_s","SOR_B_APC_Tracked_01_rcws_F","SOR_Box_NATO_WpsSpecial_F_Training"
					,"SOR_Land_Pod_Heli_Transport_04_medevac_F","SOR_O_Heli_Transport_04_F","SOR_Land_Pod_Heli_Transport_04_ammo_F","SOR_Land_Pod_Heli_Transport_04_bench_F","SOR_Land_Pod_Heli_Transport_04_covered_F"};

		weapons[] = {"160_m4a1_carryhandle_grip_acog"
					,"160_m4a1_grip2"
					,"160_m4a1_m320"
					,"160_rhs_weap_m249_pip_L_para"
					,"160_rhs_weap_m240B"
					,"160_srifle_LRR_camo_F"
					,"160_rhs_weap_sr25"
					,"160_m4a1_blockII_M203"
					,"160_m4a1_blockII_grip2_KAC"
					,"160_m4a1_carryhandle_grip_holo"
					,"160_rhs_weap_m16a4_carryhandle_grip_pmag"
					,"160_rhs_weap_m16a4_carryhandle"};

					requiredVersion = 0.1;

					requiredAddons[] = 
					{
						"rhsusf_main"
						,"rhsusf_c_weapons"
						,"A3_Characters_F"
						,"task_force_radio_items"
						,"ace_medical"
						,"ace_common"
						,"MELB"
						,"FIR_F16_F"
						,"aia_misc3_config"
					};
	};

};
