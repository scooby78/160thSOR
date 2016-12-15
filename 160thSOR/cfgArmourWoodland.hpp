/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/

//M6A2	
class SOR_RHS_M6_wd : SOR_RHS_M6
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M6_wd.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1", "camo2", "camo3", "selection_stinger", "selection_tow"};
    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa", ""};
};

//M2A3 (BUSK III)	
class SOR_RHS_M2A3_BUSKIII_wd : SOR_M2A3_BUSKIII
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKIII_wd.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa"};
};

//M113A3	
class SOR_rhsusf_m113_usarmy : SOR_rhsusf_m113d_usarmy
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"};
};
	
//M113A3 (Supply)	
class SOR_rhsusf_m113_usarmy_supply : SOR_rhsusf_m113d_usarmy_supply
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_supply.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"};
};

//M113A3 (Unarmed)	
class SOR_rhsusf_m113_usarmy_unarmed : SOR_rhsusf_m113d_usarmy_unarmed
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_unarmed.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
};
	
//M113A3 (Medical)
class SOR_rhsusf_m113_usarmy_medical : SOR_rhsusf_m113d_usarmy_medical
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113_usarmy_medical.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_med_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"};
};
	
//M1A1
class SOR_rhsusf_m1a1aimd_usarmy_wd : rhsusf_m1a1aimd_usarmy
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aimwd_usarmy.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m1a1\m1a1aim";
	rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']","['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","","","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"};
};
	
//M1A1 (Tusk I)
class SOR_rhsusf_m1a1aim_tuski_wd : SOR_rhsusf_m1a1aim_tuski_d
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a1aim_tuski_wd.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd.rvmat"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"};
};	

//M1A2
class SOR_rhsusf_m1a2sep1d_usarmy_wd : rhsusf_m1a2sep1d_usarmy
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1wd_usarmy.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1";
	rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']","['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","","","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"};
};

//M1A2 (Tusk I)
class SOR_rhsusf_m1a2sep1tuskiwd_usarmy : SOR_rhsusf_m1a2sep1tuskid_usarmy
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskiwd_usarmy.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd.rvmat"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_01_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"};
};	

//M1A2 (Tusk II)
class SOR_rhsusf_m1a2sep1tuskiiwd_usarmy : SOR_rhsusf_m1a2sep1tuskiid_usarmy
{
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskiiwd_usarmy.paa";
	editorCategory = "SOR_Cat_Faction_W";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_W;
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd.rvmat","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd.rvmat"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"};
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
	hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","camo3","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
	HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa",""};
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
