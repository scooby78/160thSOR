/*
	Name: SOR_FACTION_PMC Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgGroups.hpp
*/
class PMC_groups
{
	name = "160th AI PMC";
	class Infantry
	{
		name = "Infantry";
		class PMC_FT_D
		{
			name = "Squad Desert";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_D";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_D";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "PMC_AT_Rifleman_D";
				rank = "CORPORAL";
				position[] = {-5,-5,0};
			};
			class Unit3
			{
				side = 2;
				vehicle = "PMC_Gunner_D";
				rank = "PRIVATE";
				position[] = {10,-10,0};
			};
			class Unit4
			{
				side = 2;
				vehicle = "PMC_Grenadier_D";
				rank = "PRIVATE";
				position[] = {-10,-10,0};
			};
			class Unit5
			{
				side = 2;
				vehicle = "PMC_Commander_D";
				rank = "CORPORAL";
				position[] = {15,-15,0};
			};
				class Unit6
			{
				side = 2;
				vehicle = "PMC_MM_D";
				rank = "PRIVATE";
				position[] = {20,-20,0};
			};
				class Unit7
			{
				side = 2;
				vehicle = "PMC_Gunner_D";
				rank = "PRIVATE";
				position[] = {-15,-15,0};
			};

		};
		class SOR_FACTION_PMC_FT_1
		{
			name = "FT Desert";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_D";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_D";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "PMC_AT_Rifleman_D";
				rank = "CORPORAL";
				position[] = {-5,-5,0};
			};
			class Unit3
			{
				side = 2;
				vehicle = "PMC_Gunner_D";
				rank = "PRIVATE";
				position[] = {0,-10,0};
			};

		};
		class SOR_FACTION_PMC_FT_2
		{
			name = "BT Desert";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_D";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_D";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};


		};
			class SOR_FACTION_PMC_FT2
		{
			name = "Squad Woodland";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_w";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_w";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "PMC_AT_Rifleman_w";
				rank = "CORPORAL";
				position[] = {-5,-5,0};
			};
			class Unit3
			{
				side = 2;
				vehicle = "PMC_Gunner_w";
				rank = "PRIVATE";
				position[] = {10,-10,0};
			};
			class Unit4
			{
				side = 2;
				vehicle = "PMC_Grenadier_w";
				rank = "PRIVATE";
				position[] = {-10,-10,0};
			};
			class Unit5
			{
				side = 2;
				vehicle = "PMC_Commander_w";
				rank = "CORPORAL";
				position[] = {15,-15,0};
			};
				class Unit6
			{
				side = 2;
				vehicle = "PMC_MM_w";
				rank = "PRIVATE";
				position[] = {20,-20,0};
			};
				class Unit7
			{
				side = 2;
				vehicle = "PMC_Gunner_w";
				rank = "PRIVATE";
				position[] = {-15,-15,0};
			};

		};
		class SOR_FACTION_PMC_FT2_1
		{
			name = "FT Woodland";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_w";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_w";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "PMC_AT_Rifleman_w";
				rank = "CORPORAL";
				position[] = {-5,-5,0};
			};
			class Unit3
			{
				side = 2;
				vehicle = "PMC_Gunner_w";
				rank = "PRIVATE";
				position[] = {10,-10,0};
			};

		};
		class SOR_FACTION_PMC_FT2_2
		{
			name = "BT Woodland";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_Commander_w";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_Grenadier_w";
				rank = "SERGEANT";
				position[] = {5,-5,0};
			};
		};
	
		class SOR_FACTION_PMC_CPPT_FT
		{
			name = "CPPT";
			side = 2;
			faction = "SOR_FACTION_PMC";
			class Unit0
			{
				side = 2;
				vehicle = "PMC_CPP1";
				rank = "SERGEANT";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "PMC_CPP2";
				rank = "CORPORAL";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "PMC_CPP2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			class Unit3
			{
				side = 2;
				vehicle = "PMC_CPP1";
				rank = "PRIVATE";
				position[] = {10,-10,0};
			};
			class Unit4
			{
				side = 2;
				vehicle = "PMC_CPP1";
				rank = "PRIVATE";
				position[] = {-10,-10,0};
			};
			class Unit5
			{
				side = 2;
				vehicle = "PMC_CPP2";
				rank = "PRIVATE";
				position[] = {15,-15,0};
			};
		};		
	};
	class SOR_FACTION_PMC_Static
	{
		name="Static";
		class SOR_FACTION_PMC_Mortar
		{
			name="Mortar Crew";
			faction = "SOR_FACTION_PMC";
			side = OPFOR;
			class Unit0
			{
				side = OPFOR;
				vehicle="SOR_FACTION_PMC_Mortar";
				rank="LIEUTENANT";
				position[]={0,0,0};
			};
			class Unit1
			{
				side = OPFOR;
				vehicle="PMC_AT_ArtiSpotter_D";
				rank="SERGEANT";
				position[]={0,5,0};
			};
		};
	};	
};