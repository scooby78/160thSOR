/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/
/*
class SOR_RHS_M6;
class SOR_M2A3_BUSKIII;
class SOR_rhsusf_m113d_usarmy;
class SOR_rhsusf_m113d_usarmy_supply;
class SOR_rhsusf_m113d_usarmy_unarmed;
class SOR_rhsusf_m113d_usarmy_medical;
class SOR_rhsusf_m1a1aim_tuski_d;
class SOR_rhsusf_m1a2sep1tuskid_usarmy;
class SOR_rhsusf_m1a2sep1tuskiid_usarmy;
class SOR_B_SDV_01_F;
class SOR_B_Boat_Transport_01_F;
class SOR_rhsusf_M1083A1P2_d_fmtv_usarmy;
class SOR_rhsusf_m1025_d;
class SOR_rhsusf_m1025_d_Mk19;
class SOR_rhsusf_m1025_d_m2;
class SOR_rhsusf_m998_d_4dr;
class SOR_rhsusf_m998_d_2dr;
class SOR_Eng_Car_Transport_D;
class SOR_Eng_Truck_Transport_D;
class SOR_Eng_Truck_ammo_D;
class SOR_Eng_Truck_fuel_D;
class SOR_Eng_Truck_Repair_D;
class SOR_Eng_APC_Tracked_01;
class SOR_B_APC_Tracked_02;
*/
//M6A2	
class SOR_RHS_M6_wd : SOR_RHS_M6
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1", "camo2", "camo3", "selection_stinger", "selection_tow"};
    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa", ""};
};

//M2A3 (BUSK III)	
class SOR_RHS_M2A3_BUSKIII_wd : SOR_M2A3_BUSKIII
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa"};
};

//M113A3	
class SOR_rhsusf_m113_usarmy : SOR_rhsusf_m113d_usarmy
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m113\m113a3_wd_M2";
	picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_M2_ca";
	Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
};
	
//M113A3 (Supply)	
class SOR_rhsusf_m113_usarmy_supply : SOR_rhsusf_m113d_usarmy_supply
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m113\m113a3_wd_supply";
	picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_AMMO_ca";
	Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
};

//M113A3 (Unarmed)	
class SOR_rhsusf_m113_usarmy_unarmed : SOR_rhsusf_m113d_usarmy_unarmed
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m113\m113a3_wd_unarmed";
	picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_UNARMED_ca";
	Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
};
	
//M113A3 (Medical)
class SOR_rhsusf_m113_usarmy_medical : SOR_rhsusf_m113d_usarmy_medical
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m113\m113a3_wd_medical";
	picture = "\rhsusf\addons\rhsusf_m113\UI\M113A3_MEDICAL_ca";
	Icon = "\rhsusf\addons\rhsusf_m113\data\icom113_ca";
};
	
//M1A1 (Tusk I)
class SOR_rhsusf_m1a1aim_tuski_wd : SOR_rhsusf_m1a1aim_tuski_d
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m1a1\m1a1aim_tuski_wd";
	Icon = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1AIMTUSKI.paa";
	picture = "\rhsusf\addons\rhsusf_m1a1\icons\M1A1TUSKSIDE_ca.paa";
};	

//M1A2 (Tusk I)
class SOR_rhsusf_m1a2sep1tuskiwd_usarmy : SOR_rhsusf_m1a2sep1tuskid_usarmy
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
    model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1_tuski_wd";
};	

//M1A2 (Tusk II)
class SOR_rhsusf_m1a2sep1tuskiiwd_usarmy : SOR_rhsusf_m1a2sep1tuskiid_usarmy
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1_tuskii_wd";
	Icon = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2SEPV1TUSKII.paa";
	picture = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2TUSKIISIDE_ca.paa";
};

//Sub	
class SOR_B_SDV_01_F_wd : SOR_B_SDV_01_F
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;	
};	

//Rubber duck
class SOR_B_Boat_Transport_01_F_wd : SOR_B_Boat_Transport_01_F
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;	
};

//Troop transport
class SOR_rhsusf_M1083A1P2_wd_fmtv_usarmy : SOR_rhsusf_M1083A1P2_d_fmtv_usarmy
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_fmtv\M1083A1P2_WD";
};

//Troop transport
class SOR_rhsusf_m1025_w : SOR_rhsusf_m1025_d
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"exterior", "interior", "A2", "wheels", "mainbody", "hood gratting", "camo2", "unitdecals_1", "unitdecals_2", "ind_wait", "ind_brake", "ind_highbeam"};
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};

//Troop armed transport GL
class SOR_rhsusf_m1025_w_Mk19 : SOR_rhsusf_m1025_d_Mk19
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};

//Troop armed transport MG
class SOR_rhsusf_m1025_w_m2 : SOR_rhsusf_m1025_d_m2
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};
	
//Troop transport
class SOR_rhsusf_m998_w_4dr : SOR_rhsusf_m998_d_4dr
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"exterior", "interior", "A2", "wheels", "mainbody", "hood gratting", "interior_wood", "4drcargocomplete", "unitdecals_1", "unitdecals_2", "ind_wait", "ind_brake", "ind_highbeam"};
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};

//Troop transport
class SOR_rhsusf_m998_w_2dr : SOR_rhsusf_m998_d_2dr
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"exterior", "interior", "A2", "wheels", "mainbody", "hood gratting", "interior_wood", "2drcargocomplete", "unitdecals_1", "unitdecals_2", "ind_wait", "ind_brake", "ind_highbeam"};
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};

////////////////////////////////
//Engineering support vehicles//
////////////////////////////////

//Engineer transport
class SOR_rhsusf_m1025_w_eng : SOR_Eng_Car_Transport_D
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"exterior", "interior", "A2", "wheels", "mainbody", "hood gratting", "camo2", "unitdecals_1", "unitdecals_2", "ind_wait", "ind_brake", "ind_highbeam"};
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa", "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa", ""};
};

//Engineer transport truck	
class SOR_rhsusf_M1083A1P2_wd_fmtv_usarmy_eng : SOR_Eng_Truck_Transport_D
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
    model = "\rhsusf\addons\rhsusf_fmtv\M1083A1P2_WD";
};	

class SOR_Eng_Truck_ammo_wd : SOR_Eng_Truck_ammo_D
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
};

class SOR_Eng_Truck_fuel_wd : SOR_Eng_Truck_fuel_D
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
};	

class SOR_Eng_Truck_Repair_wd : SOR_Eng_Truck_Repair_D
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
};
	
//Engineer armored transport
class SOR_Eng_APC_Tracked_01_wd : SOR_Eng_APC_Tracked_01
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
};	

class SOR_B_APC_Tracked_02_wd : SOR_B_APC_Tracked_02
{
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
};	