/*
	Name: 160th SOR Mod
	Author: AmTheAgent (Edited by Scooby)
	Date: 27/09/15 01:09
	Description: cfgGroups.hpp
*/

class CfgGroups 
{
	class West 
	{
		
		class SOR_Groups_D
		{
			name = "160th Infantry (Desert)";
			
			class SOR_InfGroups_D 
			{
				name = "Infantry";
				aliveCategory = "Infantry";
				
				class SOR_HavocGroup_D 
				{
					name = "HAVOC";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_D";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_RTO_D";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_D";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_INFSquadA_D
					{
					name = "10 Man Squad";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = 1;
						vehicle = "SOR_Actual_D";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = 1;
						vehicle = "SOR_Medic_D";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = 1;
						vehicle = "SOR_Teamleader_D";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = 1;
						vehicle = "SOR_M249AR_D";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = 1;
						vehicle = "SOR_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = 1;
						vehicle = "SOR_Rifleman_D";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = 1;
						vehicle = "SOR_Teamleader_D";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = 1;
						vehicle = "SOR_M240AR_D";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = 1;
						vehicle = "SOR_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = 1;
						vehicle = "SOR_Rifleman_Ammo_D";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_FireTeamLead_D
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Actual_D";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Medic_D";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					
				};				
				class SOR_FireTeam1_D
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam2_D
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240AR_D";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_Ammo_D";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
			};
			class SOR_InfGroups_Support_D 
			{
				name = "Infantry (Support)";
				aliveCategory = "Infantry";

				class SOR_Recon_D
				{
					name = "Recon Team";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_ReconLeader_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Marksman_D";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_D";
						rank = SERGEANT;
						position[] = {0, -4, 0};
					};						
					class Unit3
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_D";
						rank = SERGEANT;
						position[] = {0, -6, 0};
					};
				};	
				class SOR_SupGroup2_D
				{
					name = "HMG Team";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HMGActual_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HMGGunner_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_D";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HMGRFL_D";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup3_D
				{
					name = "Mortar Team";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MORActual_D";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MORGunner_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MORCarrier_D";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = 1;
						vehicle = "SOR_MORRFL_D";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};				
			};
			class SOR_InfGroups_Mech_D 
			{
				name = "Infantry (Mech)";
				aliveCategory = "Infantry";
			
				class SOR_SabGroup2_D 
				{
					name = "Saber Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechCrew_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechOperator_D";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_MechDriver_D";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_RhinoGroup_D 
				{
					name = "Rhino Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechDriver_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechCrew_D";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_OutlawGroup_D 
				{
					name = "Outlaw Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechDriver_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
				}				
			};
			class SOR_InfGroups_Air_D 
			{
				name = "Infantry (Air)";
				aliveCategory = "Infantry";

				class SOR_AngGroup1_D 
				{
					name = "Angel Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
	
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D";
						rank = LIEUTENANT;
						position[] = {-0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HeliCrew_D";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HeliCrew_D";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};		
				class SOR_PegGroup2_D 
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_MEVGroup2_D 
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_EagleGroup2_D 
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_D";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D";
						rank = LIEUTENANT;
						position[] = {-6, 0, 0};
					};
				};
			};
		};
		class SOR_Groups_W
		{
			name = "SOR Infantry (Woodland)";
			
			class SOR_InfGroups_W 
			{
				name = "SOR Infantry";
				aliveCategory = "Infantry";
				
				class SOR_ComGroup_W 
				{
					name = "Command Unit";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_HavocGroup_W
				{
					name = "HAVOC";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_RTO_W";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_INFSquadA_W
				{
					name = "10 Man Squad";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = 1;
						vehicle = "SOR_Actual_W";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = 1;
						vehicle = "SOR_Rifleman_W";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = 1;
						vehicle = "SOR_M240AR_W";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_W";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_Recon_W
				{
					name = "Sniper Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Sniper_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Spotter_W";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
				};				
				class SOR_AngGroup1_W
				{
					name = "Angel Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
	
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_W";
						rank = LIEUTENANT;
						position[] = {-0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HeliCrew_W";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HeliCrew_W";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};		
				class SOR_PegGroup2_W 
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_MEVGroup2_W 
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_W";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_EagleGroup2_W 
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
				};						
				class SOR_SabGroup2_W 
				{
					name = "Mechanised Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechDriver_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechCrew_W";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_MechOperator_W";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup2_W
				{
					name = "HMG Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HMGActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HMGGunner_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HMGRFL_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup3_W
				{
					name = "Mortar Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MORActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MORGunner_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MORCarrier_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = 1;
						vehicle = "SOR_MORRFL_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};					
				class SOR_FireTeamLead_W
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Actual_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};					
				};				
				class SOR_FireTeam1_W
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam2_W
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
				
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam3_W
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};			
				class SOR_ReconTeam2_W
				{
					name = "Recon Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
						
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Marksman_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			};
		};
	};
};

	

	

		

	


