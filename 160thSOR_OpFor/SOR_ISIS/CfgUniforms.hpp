/*
	Name: SOR ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/


class SOR_ISIS_Fatigue_05: Uniform_Base
{
	scope=2;
	author = "Yettie";
	displayName="Guerilla Coveralls (ISTS/Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F_Beta\INDEP\IA_soldier_01.p3d";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_tan.paa"};
	class ItemInfo: UniformItem
	{
		uniformClass="SOR_ISIS_Infantry_TL";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_06: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat Desert)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_marpat.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_SL";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_07: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/UCP)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_acu_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Corpsman";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_08: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/UCP + M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_acu_m81_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_AR";
		containerClass="Supply40";
		mass=40;
	};
};

class SOR_ISIS_Fatigue_10: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat Desert)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_AT";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_11: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat Desert + M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_m81_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_AT_Asst";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_12: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat Desert + Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_tan_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Marksman";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_13: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat Desert + Olive)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_dmar_wdl_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Engineer";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_14: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Type 07)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Rifleman";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_15: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Type 07 + Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_khk_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Rifleman_2";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_16: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Type 07 + M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_m81l_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_Rifleman_3";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_17: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Type 07 + Olive)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m07arid_wdl_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_GL";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_18: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_m81_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_M81";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_19: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Multicam)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_Multicam";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_20: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Multicam + M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_m81_tan_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_Multicam_m81";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_21: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Multicam + Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_mcm_tan_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_Multicam_tan";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_22: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/3CD)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_3CD";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_23: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/3CD + M81)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_m81_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_3CD_M81";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_24: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/3CD + Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_tan_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_3CD_tan";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_25: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/3CD + Olive)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_tri_wdl_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_3CD_wdl";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_26: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_wmar";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_27: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat + Tan)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_tan_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_wmar_tan";
		containerClass="Supply40";
		mass=40;
	};
};
class SOR_ISIS_Fatigue_28: Uniform_Base
{
	scope=2;
	displayName="Guerilla Coveralls (ISTS/Marpat + Olive)";
	picture="\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	hiddenSelections[]={"Camo","insignia"};
	hiddenSelectionsTextures[]={"160thSOR_OpFor\SOR_ISIS\data\isis_soldier_01_clothing_wmar_wdl_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="SOR_ISIS_Infantry_model_wmar_wdl";
		containerClass="Supply40";
		mass=40;
	};
};

class ISIS_EXEC_02: Uniform_Base
{ 
	scope = 2; 
	displayName = "ISIS Leaders Uniform"; 
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_ISIS\data\ISIS_clothing2_co.paa"};
	class ItemInfo : UniformItem 
	{ 
		uniformClass = "SOR_ISIS_Infantry_Exec"; 
		containerClass = "Supply50"; 
		mass = 50; 
	}; 
};
