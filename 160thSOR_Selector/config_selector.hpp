
class SOR_SelectorWeapons {
    class Standard_Black{
        weapons[] = {
            "HK416 Black,160_weap_inf_std",
            "M4A1 Black,SMA_M4afg",
            "M4A1 BlockII Black,rhs_weap_m4a1_blockII",
            "SCAR L Black,SMA_MK16_black",
            "ACR Black,SMA_ACRREMMOEblk_N",
            "MK18 Black,SMA_MK18afg"
        };
    };
    
    class Standard_Desert{
        weapons[] = {
            "M4 Desert,SMA_M4afg_Tan",
            "SCAR L Desert,SMA_MK16",
            "ACR Desert,SMA_ACRREMMOE_N",
            "MK18 Desert,SMA_MK18afgTAN"
        };
    };
    
    class Standard_Wood{
        weapons[] = {
            "MK18 Woodland,SMA_MK18afgOD",
            "M4A1 Woodland,SMA_M4afg_OD",
            "HK416 Woodland,SMA_HK416afgOD"
        };
    };
    
    class Grenadier_Black{
        weapons[] = {
            "HK416 Black,160_weap_inf_gl",
            "M4 Black,SMA_M4_GL",
            "SCAR L Black,SMA_Mk16_EGLM_black",
            "ACR Black,SMA_ACRREMGL_B_N",
            "MK18 Black,SMA_MK18BLK_GL"
        };
    };
    
    class Grenadier_Desert{
        weapons[] = {
            "SCAR L Desert,SMA_Mk16_EGLM",
            "ACR Desert,SMA_ACRREMGL_N",
            "MK18 Desert,SMA_MK18TAN_GL"
        };
    };
    
    class Grenadier_Wood{
        weapons[] = {
            "HK416 Woodland,SMA_HK416GLOD",
            "MK18 Woodland,SMA_MK18OD_GL"
        };
    };
    
    class Autorifle_Black{
        weapons[] = {
            "Maximi Long Black,160_weap_inf_AR1",
            "Maximi Short Black,sma_minimi_mk3_762tsb"
        };
    };
    
    class Autorifle_Desert{
        weapons[] = {
            "Maximi Long Desert,sma_minimi_mk3_762tlb_des",
            "Maximi Short Desert,sma_minimi_mk3_762tsb_des"
        };
    };
    
    class Autorifle_Wood{
        weapons[] = {
            "Maximi Long Woodland,sma_minimi_mk3_762tlb_wdl",
            "Maximi Short Woodland,sma_minimi_mk3_762tsb_wdl"
        };
    };
    
    class Marksman_Desert{
        weapons[] = {
            "SCAR H Desert,160_weap_inf_recon_mark"
        };
    };
};

class SOR_SelectorOptics {
    class Standard_Black{
        optics[] = {
            "HOLO Black,optic_Holosight_blk_F",
            "RCO,optic_Hamr",
            "MRCO,optic_MRCO",
            "CCO,rhsusf_acc_compm4",
            "ACO Red,optic_Aco",
            "RDS Black,SMA_BARSKA",
            "ERCO Black,optic_ERCO_blk_F", 
            "ARCO Black,optic_Arco_blk_F",
            "ACOG,rhsusf_acc_ACOG_USMC",
            "ACOG ACO Black,rhsusf_acc_ACOG_RMR"
        };
    };
    
    class Standard_Desert{
        optics[] = {
            "HOLO Desert,rhsusf_acc_eotech_552_d",
            "ACO Woodland,SMA_CMOREGRN",
            "ERCO Desert,optic_ERCO_snd_F",
            "ACOG Desert,rhsusf_acc_ACOG_d"
        };
    };
    
    class Standard_Wood{
        optics[] = {
            "HOLO Woodland,SMA_eotech_G",
            "ACO Woodland,SMA_CMOREGRN",
            "ERCO Woodland,optic_ERCO_khk_F",
            "ACOG Woodland,rhsusf_acc_ACOG_wd"
        };
    };
    
    class Autorifle_Black{
        optics[] = {
            "CCO,rhsusf_acc_compm4",
            "RDS Black,SMA_BARSKA",
            "ACO Red,optic_Aco",
            "ACO Green,optic_ACO_grn",
            "HOLO Black,optic_Holosight_blk_F",
            "ARCO Black,optic_Arco_blk_F"
        };
    };
    
    class Autorifle_Desert{
        optics[] = {
            "HOLO Sand,optic_Holosight",
            "ARCO Desert,optic_Arco"
        };
    };
    
    class Marksman_Desert{
        optics[] = {
            "ELCAN SpecterDR Tan,SMA_ELCAN_SPECTER_TAN_ARDRDS"
        };
    };
};

class SOR_SelectorUnits {
    class Inf_Standard_Desert {
        units[] = {"SOR_Actual_D","SOR_Medic_D","SOR_Rifleman_D","SOR_Rifleman_ammo_D","SOR_Commander_D","SOR_HMedic_D","SOR_Teamleader2_D","SOR_Teamleader_D","SOR_ParaJumper_D","SOR_ReconLeader_D","SOR_ReconRifleman_D","SOR_Marksman_D"};
        weapons[] = {"Standard_Black","Standard_Desert"};
        optics[] = {"Standard_Black","Standard_Desert"};
    };
    
    class Inf_Standard_Wood {
        units[] = {"SOR_Actual_W","SOR_Medic_W","SOR_Rifleman_W","SOR_Rifleman_ammo_W","SOR_Commander_W","SOR_HMedic_W","SOR_Teamleader2_W","SOR_Teamleader_W","SOR_ParaJumper_W","SOR_ReconLeader_W","SOR_ReconRifleman_W","SOR_Marksman_W"};
        weapons[] = {"Standard_Black","Standard_Wood"};
        optics[] = {"Standard_Black","Standard_Wood"};
    };
    
    class Inf_Grenadier_Desert {
        units[] = {"SOR_Grenadier_D","SOR_RTO_D","SOR_ReconGrenadier_D"};
        weapons[] = {"Grenadier_Black","Grenadier_Desert"};
        optics[] = {"Standard_Black","Standard_Desert"};
    };
    
    class Inf_Grenadier_Wood {
        units[] = {"SOR_Grenadier_W","SOR_RTO_W","SOR_ReconGrenadier_W"};
        weapons[] = {"Grenadier_Black","Grenadier_Wood"};
        optics[] = {"Standard_Black","Standard_Wood"};
    };
    
    class Inf_Autorifle_Desert {
        units[] = {"SOR_M249AR_D","SOR_M240AR_D","SOR_Recon_M249AR_D"};
        weapons[] = {"Autorifle_Black","Autorifle_Desert"};
        optics[] = {"Autorifle_Black","Autorifle_Desert"};
    };
    
    class Inf_Autorifle_Wood {
        units[] = {"SOR_M249AR_W","SOR_M240AR_W","SOR_Recon_M249AR_W"};
        weapons[] = {"Autorifle_Black","Autorifle_Wood"};
        optics[] = {"Autorifle_Black"};
    };
    
    class Mech_Marksman_Desert {
        units[] = {"SOR_ReconJTAC_W","SOR_ReconJTAC_D"};
        weapons[] = {"Marksman_Desert"};
        optics[] = {"Marksman_Desert"};
    };
};