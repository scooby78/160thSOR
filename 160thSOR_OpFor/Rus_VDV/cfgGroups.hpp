/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgGroups.hpp
*/
class SOR_Opfor_Groups_VDV
{
	name = "160th Russian (VDV)";
	
	class SOR_Opfor_InfGroups_VDV 
	{
		name = "Infantry";
		aliveCategory = "Infantry";
		
		class SOR_Opfor_HavocGroup_VDV 
		{
			name = "HAVOC";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Commander_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Commander_VDV";
				rank = SERGEANT;
				position[] = {-2, 0, 0};
			};					
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_RTO_VDV";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};	
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Medic_VDV";
				rank = CORPORAL;
				position[] = {-6, 0, 0};
			};
		};
		class SOR_Opfor_INFSquadA_VDV
		{
			name = "10 Man Squad";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Actual_VDV";
				rank = SERGEANT;
				position[] = {0, -0, 0};
			};					
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Medic_VDV";
				rank = PRIVATE;
				position[] = {0, -2, 0};
			};					
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV";
				rank = CORPORAL;
				position[] = {0, -6, 0};
			};
			class Unit3 
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKM_VDV";
				rank = PRIVATE;
				position[] = {0, -8, 0};
			};
			class Unit4 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV";
				rank = PRIVATE;
				position[] = {0, -10, 0};
			};
			class Unit5
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rilfeman_Ammo_VDV";
				rank = PRIVATE;
				position[] = {0, -12, 0 };
			};
			class Unit6 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV";
				rank = CORPORAL;
				position[] = {0, -16, 0};
			};
			class Unit7 
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKP_VDV";
				rank = PRIVATE;
				position[] = {0, -18, 0};
			};
			class Unit8 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV";
				rank = PRIVATE;
				position[] = {0, -20, 0};
			};
			class Unit9 
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rifleman_VDV";
				rank = PRIVATE;
				position[] = {0, -22, 0};
			};
		};
		class SOR_Opfor_FireTeamLead_VDV
		{
			name = "Fire Team Lead/Medic";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Actual_VDV";
				rank = CAPTAIN;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Medic_VDV";
				rank = CAPTAIN;
				position[] = {0, -2, 0};
			};					
		};				
		class SOR_Opfor_FireTeam1_VDV
		{
			name = "Fire Team (1)";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKM_VDV";
				rank = CORPORAL;
				position[] = {0, -2, 0};
			};
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV";
				rank = PRIVATE;
				position[] = {0, -4, 0};
			};
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rilfeman_Ammo_VDV";
				rank = PRIVATE;
				position[] = {0, -6, 0};
			};
		};					
		class SOR_Opfor_FireTeam2_VDV
		{
			name = "Fire Team (2)";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKP_VDV";
				rank = CORPORAL;
				position[] = {0, -2, 0};
			};
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV";
				rank = PRIVATE;
				position[] = {0, -4, 0};
			};
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rifleman_VDV";
				rank = PRIVATE;
				position[] = {0, -6, 0};
			};
		};					
	};
	class SOR_Opfor_InfGroups_Support_VDV 
	{
		name = "Infantry (Support)";
		aliveCategory = "Infantry";
		class SOR_Opfor_Recon_VDV
		{
			name = "Viper Team";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconLeader_VDV";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconJTAC_VDV";
				rank = SERGEANT;
				position[] = {0, -2, 0};
			};
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconRifleman_VDV";
				rank = SERGEANT;
				position[] = {0, -4, 0};
			};						
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconRifleman_VDV";
				rank = SERGEANT;
				position[] = {0, -6, 0};
			};
		};	
		class SOR_Opfor_SupGroup2_VDV
		{
			name = "HMG Team";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;	
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGActual_VDV";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGGunner_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGCarrier_VDV";
				rank = PRIVATE;
				position[] = {-4, 0, 0};
			};
			class Unit3 						
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGRFL_VDV";
				rank = PRIVATE;
				position[] = {-6, 0, 0};
			};		
		};
		class SOR_Opfor_SupGroup3_VDV
		{
			name = "Mortar Team";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;	
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORActual_VDV";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};							
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORGunner_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};							
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORCarrier_VDV";
				rank = PRIVATE;
				position[] = {-4, 0, 0};
			};
			class Unit3 							
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORRFL_VDV";
				rank = PRIVATE;
				position[] = {-6, 0, 0};
			};	
		};				
	};
	class SOR_Opfor_InfGroups_Mech_VDV 
	{
		name = "Infantry (Mech)";
		aliveCategory = "Infantry";
	
		class SOR_Opfor_SabGroup2_VDV 
		{
			name = "Saber Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrew_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechOperator_VDV";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};
			class Unit3 						
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV";
				rank = CORPORAL;
				position[] = {-6, 0, 0};
			};		
		};
		class SOR_Opfor_RhinoGroup_VDV 
		{
			name = "Rhino Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrew_VDV";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};
		};
		class SOR_Opfor_OutlawGroup_VDV 
		{
			name = "Outlaw Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
		}				
	};
	class SOR_Opfor_InfGroups_Air_VDV 
	{
		name = "Infantry (Air)";
		aliveCategory = "Infantry";

		class SOR_Opfor_AngGroup1_VDV 
		{
			name = "Angel Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;

			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliPilot_VDV";
				rank = LIEUTENANT;
				position[] = {-0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliPilot_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliCrew_VDV";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};
			class Unit3 						
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliCrew_VDV";
				rank = CORPORAL;
				position[] = {-6, 0, 0};
			};
		};		
		class SOR_Opfor_PegGroup2_VDV 
		{
			name = "Pegasus Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliPilot_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};					
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HeliPilot_VDV";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};
		};	
		class SOR_Opfor_MEVGroup2_VDV 
		{
			name = "Medivac Crew";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MEVPilot_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};					
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MEVPilot_VDV";
				rank = SERGEANT;
				position[] = {-2, 0, 0};
			};					
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ParaJumper_VDV";
				rank = PRIVATE;
				position[] = {-4, 0, 0};
			};
			class Unit3 
			
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ParaJumper_VDV";
				rank = PRIVATE;
				position[] = {-6, 0, 0};
			};
			class Unit4
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ParaJumper_VDV";
				rank = PRIVATE;
				position[] = {-8, 0, 0};
			};
		};
		class SOR_Opfor_EagleGroup2_VDV 
		{
			name = "Eagle Pilots";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_JetPilot_VDV";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_JetPilot_VDV";
				rank = LIEUTENANT;
				position[] = {-2, 0, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_JetPilot_VDV";
				rank = LIEUTENANT;
				position[] = {-4, 0, 0};
			};
			class Unit3 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_JetPilot_VDV";
				rank = LIEUTENANT;
				position[] = {-6, 0, 0};
			};
		};
	};
	class SOR_Opfor_Squadron_VDV 
	{
		name = "Airborne";
		aliveCategory = "Airborne";

		class SOR_Opfor_FighterWing_VDV 
		{
			name = "Fighter Wing";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA";
				rank = LIEUTENANT;
				position[] = {-40, 0, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA";
				rank = LIEUTENANT;
				position[] = {-80, 0, 0};
			};
			class Unit3 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA";
				rank = LIEUTENANT;
				position[] = {-120, 0, 0};
			};
		};
		class SOR_Opfor_CASWing_VDV 
		{
			name = "CAS Wing";
			faction = "SOR_Opfor_Faction_VDV";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS";
				rank = LIEUTENANT;
				position[] = {40, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS";
				rank = LIEUTENANT;
				position[] = {-40, -40, 0};
			};
		};
	};
};
///////////////////////////////////////////////////////////////////////
///////////////		
// AI Groups //
///////////////
class SOR_Opfor_Groups_VDV_AI
{
	name = "160th AI Russian  (VDV)";
	class SOR_Opfor_InfGroups_VDV_AI 
	{
		name = "Infantry";
		aliveCategory = "Infantry";
		class SOR_Opfor_INFSquadA_VDV_AI
		{
			name = "10 Man Squad";
			faction = "SOR_OPFor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV_AI";
				rank = SERGEANT;
				position[] = {0, -0, 0};
			};					
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Medic_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -2, 0};
			};					
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV_AI";
				rank = CORPORAL;
				position[] = {0, -6, 0};
			};
			class Unit3 
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKM_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -8, 0};
			};
			class Unit4 
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rifleman_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -10, 0};
			};
			class Unit5 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -12, 0 };
			};
			class Unit6 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV_AI";
				rank = CORPORAL;
				position[] = {0, -16, 0};
			};
			class Unit7
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKP_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -18, 0};
			};
			class Unit8
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rifleman_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -20, 0};
			};
			class Unit9
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -22, 0};
			};
		};
		class SOR_Opfor_FireTeam_VDV_AI
		{
			name = "Fire Team";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV_AI"; 
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_PKM_VDV_AI";
				rank = CORPORAL;
				position[] = {0, -2, 0};
			};
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_OPFor_Rifleman_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -4, 0};
			};
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV_AI";
				rank = PRIVATE;
				position[] = {0, -6, 0};
			};
		};	
		class SOR_Opfor_Patrol_VDV_AI
		{
			name = "Patrol Team";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Grenadier_VDV_AI"; 
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Teamleader_VDV_AI";
				rank = CORPORAL;
				position[] = {0, -2, 0};
			};
		};		
	};
	class SOR_Opfor_InfGroups_Support_VDV_AI 
	{
		name = "Infantry (Support)";
		aliveCategory = "Infantry";
		class SOR_Opfor_Recon_VDV_AI
		{
			name = "Viper Team";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconLeader_VDV_AI";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconJTAC_VDV_AI";
				rank = SERGEANT;
				position[] = {0, -2, 0};
			};
			class Unit2
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconRifleman_VDV_AI";
				rank = SERGEANT;
				position[] = {0, -4, 0};
			};						
			class Unit3
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_ReconRifleman_VDV_AI";
				rank = SERGEANT;
				position[] = {0, -6, 0};
			};
		};	
		class SOR_Opfor_SupGroup2_VDV_AI
		{
			name = "HMG Team";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;	
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGActual_VDV_AI";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGGunner_VDV_AI";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGCarrier_VDV_AI";
				rank = PRIVATE;
				position[] = {-4, 0, 0};
			};
			class Unit3 						
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_HMGRFL_VDV_AI";
				rank = PRIVATE;
				position[] = {-6, 0, 0};
			};		
		};
		class SOR_Opfor_SupGroup3_VDV_AI
		{
			name = "Mortar Team";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;	
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORActual_VDV_AI";
				rank = SERGEANT;
				position[] = {0, 0, 0};
			};							
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORGunner_VDV_AI";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};							
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORCarrier_VDV_AI";
				rank = PRIVATE;
				position[] = {-4, 0, 0};
			};
			class Unit3 							
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MORRFL_VDV_AI";
				rank = PRIVATE;
				position[] = {-6, 0, 0};
			};	
		};				
	};
	class SOR_Opfor_InfGroups_Mech_VDV_AI 
	{
		name = "Infantry (Mech)";
		aliveCategory = "Infantry";
		class SOR_Opfor_SabGroup2_VDV_AI 
		{
			name = "Saber Crew";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrew_VDV_AI";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechOperator_VDV_AI";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};
			class Unit3 						
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV_AI";
				rank = CORPORAL;
				position[] = {-6, 0, 0};
			};		
		};
		class SOR_Opfor_RhinoGroup_VDV_AI 
		{
			name = "Rhino Crew";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV_AI";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrew_VDV_AI";
				rank = CORPORAL;
				position[] = {-4, 0, 0};
			};
		};
		class SOR_Opfor_OutlawGroup_VDV_AI 
		{
			name = "Outlaw Crew";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechCrewCommander_VDV_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};						
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_MechDriver_VDV_AI";
				rank = CORPORAL;
				position[] = {-2, 0, 0};
			};						
		}				
	};
	class SOR_Opfor_Squadron_VDV_AI 
	{
		name = "Airborne";
		aliveCategory = "Airborne";
		class SOR_Opfor_FighterWing1_VDV_AI 
		{
			name = "SU-35 Wing x3 (AA)";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {-80, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {80, -40, 0};
			};
		};
		class SOR_Opfor_FighterWing2_VDV_AI 
		{
			name = "JAS 39 Gripen Wing x3 (AA)";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {-80, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_AA_AI";
				rank = LIEUTENANT;
				position[] = {80, -40, 0};
			};
		};
		class SOR_Opfor_CASWing1_VDV_AI 
		{
			name = "SU-35 Wing x3 (CAS)";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {-80, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {80, -40, 0};
			};
		};
		class SOR_Opfor_CASWing2_VDV_AI 
		{
			name = "JAS 39 Gripen Wing x3 (CAS)";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {80, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Ind_Fighter_CAS_AI";
				rank = LIEUTENANT;
				position[] = {-80, -40, 0};
			};
		};
		class SOR_Opfor_CASWing3_VDV_AI 
		{
			name = "SU-25 Wing x3 (CAS)";
			faction = "SOR_Opfor_Faction_VDV_AI";
			side = OPFOR;
			rarityGroup = 0.75;
			class Unit0 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS2";
				rank = LIEUTENANT;
				position[] = {0, 0, 0};
			};
			class Unit1 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS2";
				rank = LIEUTENANT;
				position[] = {80, -40, 0};
			};
			class Unit2 
			{
				side = OPFOR;
				vehicle = "SOR_Opfor_Fighter_CAS2";
				rank = LIEUTENANT;
				position[] = {-80, -40, 0};
			};
		};
	};
};