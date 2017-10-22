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
		class SOR_Groups_Nam
		{
			name = "160th Infantry (Vietnam)";
			
			class SOR_InfGroups_Nam
			{
				name = "SOR Infantry";
				aliveCategory = "Infantry";
				
				class SOR_ComGroup_Nam 
				{
					name = "Command Unit";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_Nam";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Commander_Nam";
						rank = CAPTAIN;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_Commander_Nam";
						rank = CAPTAIN;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_HavocGroup_W
				{
					name = "HAVOC";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_Nam";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_Nam";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_RTO_Nam";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_Nam";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_INFSquadA_Nam
				{
					name = "10 Man Squad";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = 1;
						vehicle = "SOR_Actual_Nam";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = 1;
						vehicle = "SOR_Medic_Nam";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = 1;
						vehicle = "SOR_Teamleader_Nam";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = 1;
						vehicle = "SOR_M249AR_Nam";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = 1;
						vehicle = "SOR_Grenadier_Nam";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = 1;
						vehicle = "SOR_Rifleman_Nam";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = 1;
						vehicle = "SOR_Teamleader_Nam";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = 1;
						vehicle = "SOR_M240AR_Nam";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = 1;
						vehicle = "SOR_Grenadier_Nam";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = 1;
						vehicle = "SOR_Rifleman_ammo_Nam";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_Recon_Nam
				{
					name = "Sniper Team";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Sniper_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconGrenadier_Nam";
						rank = SERGEANT;
						position[] = {0, -2, 0};
					};
				};				
				class SOR_AngGroup1_Nam
				{
					name = "Angel Crew";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
	
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_Nam";
						rank = LIEUTENANT;
						position[] = {-0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_Nam";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HeliCrew_Nam";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HeliCrew_Nam";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};		
				class SOR_PegGroup2_Nam 
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_Nam";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_Nam";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_MEVGroup2_Nam 
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_Nam";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_Nam";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_ParaJumper_Nam";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = 1;
						vehicle = "SOR_ParaJumper_Nam";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_Nam";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_EagleGroup2_Nam 
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_JetPilot_Nam";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_JetPilot_Nam";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
				};						
				class SOR_SabGroup2_Nam 
				{
					name = "Mechanised Crew";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_Nam";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechDriver_Nam";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechCrew_Nam";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_MechOperator_Nam";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup2_Nam
				{
					name = "HMG Team";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HMGActual_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HMGGunner_Nam";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_Nam";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HMGRFL_Nam";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup3_Nam
				{
					name = "Mortar Team";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MORActual_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MORGunner_Nam";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MORCarrier_Nam";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = 1;
						vehicle = "SOR_MORRFL_Nam";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};					
				class SOR_FireTeamLead_Nam
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Actual_Nam";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Medic_Nam";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};					
				};				
				class SOR_FireTeam1_Nam
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_Nam";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_Nam";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_Nam";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam2_Nam
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
				
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240AR_Nam";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_Nam";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_Nam";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam3_Nam
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_Nam";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_Nam";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_Nam";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};			
				class SOR_ReconTeam2_Nam
				{
					name = "Recon Team";
					faction = "SOR_Faction_Nam";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeader_Nam";
						rank = SERGEANT;
						position[] = {0, 0, 0};
						
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Marksman_Nam";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_Nam";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_Nam";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};
			};
		};
	};
};

	

	

		

	


