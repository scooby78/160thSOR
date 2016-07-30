//////////////		
//Base Class//
//////////////

class O_Soldier_F;
class O_Soldier_AR_F;
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
		mag_xx(rhs_100Rnd_762x54mmR,3);
	};
};	

////////////////////////////		    
//SOR Opfor Faction Units///
////////////////////////////

// Teamleader	
class SOR_Opfor_Rifleman_D : O_Soldier_F

{
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "rhs_uniform_vdv_emr";
	backpack = "";
	weapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas","Throw","Put"};
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
	editorCategory = "SOR_Cat_Faction_D";
	editorSubcategory = "SOR_SubCat_Infantry";
	vehicleclass = "SOR_Infantry";
	faction = SOR_Faction_D;
	uniformClass = "rhs_uniform_vdv_emr";
	backpack = "SOR_OpFor_AR_Pack_D";
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	Items[] = 
	{
		"ACE_SpareBarrel",
		"ACE_SpareBarrel",			
		Standard_Meds
	};
	RespawnItems[] =
	{
		"ACE_SpareBarrel",
		"ACE_SpareBarrel",			
		Standard_Meds
	};	
	magazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_100Rnd_762x54mmR"
	};
	respawnMagazines[] =
	{
		"rhs_mag_rgo",
		"rhs_mag_rgo",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_100Rnd_762x54mmR"
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
	weapons[] = {"160_rhs_weap_ak74m_pkas", "Throw", "Put", "Rangefinder"};
	respawnWeapons[] = {"160_rhs_weap_ak74m_pkas", "Throw", "Put", "Rangefinder"};
};