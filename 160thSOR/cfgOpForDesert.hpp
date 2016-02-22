//////////////		
//Base Class//
//////////////
	
	class O_Soldier_F;
	class O_Soldier_AR_F;
	class tf_rt1523g_bwmod;
	class B_AssaultPack_khk;

#define Opfor_Mags 		"rhs_30Rnd_545x39_AK",\
						"rhs_30Rnd_545x39_AK",\
						"rhs_30Rnd_545x39_AK",\
						"rhs_30Rnd_545x39_AK",\
						"rhs_30Rnd_545x39_AK",\
						"rhs_30Rnd_545x39_AK",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_rgo",\
						"rhs_mag_rgo"
					
#define Opfor_Equipment 	"ItemMap",\
							"ItemCompass",\
							"ItemWatch",\
							"tf_fadak_3",\
							"ItemGPS"
							
//Custom TL Pack	
	class SOR_OpFor_TL_Pack_D : tf_rt1523g_bwmod
	{
		displayName = "Pack Desert Radio";
		class TransportMagazines
		{
		};	
	};	

//Custom AR Pack	
	class SOR_OpFor_AR_Pack_D : B_AssaultPack_khk
	{
		displayName = "Opfor AR Pack";
		class TransportMagazines
		{
			mag_xx(CAF_100Rnd_762x54_PKM,3);
		};
	};	

////////////////////////////		    
//SOR Opfor Faction Units///
////////////////////////////
	
// Teamleader	
class SOR_Opfor_Rifleman_D : O_Soldier_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_vdv_emr";
	    backpack = "";
		weapons[] = {"rhs_weap_ak74m_pkas","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_pkas","Throw","Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Opfor_Mags};
		respawnMagazines[] = {Opfor_Mags};
		linkedItems[] = 
		{	
			"rhs_6b23_digi",
			"rhs_6b28", 
			Opfor_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_6b23_digi",
			"rhs_6b28",
			Opfor_Equipment
		};			
	};

	
// Auto rifleman
class SOR_OpFor_PKM_D : O_Soldier_AR_F
	
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_vdv_emr";
		backpack = "SOR_OpFor_AR_Pack_D";
		weapons[] = {"caf_pkm","Throw","Put"};
		respawnWeapons[] = {"caf_pkm","Throw","Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};		
		magazines[] =
		{
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"CAF_100Rnd_762x54_PKM"
		};
		respawnMagazines[] =
		{
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"CAF_100Rnd_762x54_PKM"
		};
		linkedItems[] = 
		{	
			"rhs_6b23_digi_6sh92" ,
			"rhs_6b28",
			Opfor_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_6b23_digi_6sh92" ,
			"rhs_6b28",
			Opfor_Equipment
		};
	};

// Rifleman
class SOR_Opfor_TL_D : SOR_Opfor_Rifleman_D	
	{
		displayName = "Team Leader";
	    backpack = "SOR_OpFor_TL_Pack_D";
		weapons[] = {"rhs_weap_ak74m_pkas", "Throw", "Put", "Rangefinder"};
		respawnWeapons[] = {"rhs_weap_ak74m_pkas", "Throw", "Put", "Rangefinder"};
	};