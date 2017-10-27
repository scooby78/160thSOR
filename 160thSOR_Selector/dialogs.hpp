class DEST_MENU_WEAP
{
    idd = 63002;
    movingEnable = false;
    enableSimulation = true;
    
    class controls
    {
        class DEST_MENU_FRAME_WEAP: RscFrame
        {
            idc = 1800;
            colorBorder[] = {1,1,1,1};

            x = 0.422656 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.55 * safezoneH;
        };
        class DEST_MENU_BOX_WEAP: Box
        {
            idc = 1801;

            x = 0.422656 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.154687 * safezoneW;
            h = 0.55 * safezoneH;
            colorBackground[] = {0,0,0,0.9};
        };
        class DEST_MENU_COMBO_WEAP: RscCombo
        {
            idc = 630021;

            x = 0.438125 * safezoneW + safezoneX;
            y = 0.335 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_COMBO_OPT: RscCombo
        {
            idc = 630022;

            x = 0.438125 * safezoneW + safezoneX;
            y = 0.489 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_BUTTON_WEAP_CON: RscButton
        {
            idc = 1600;

            text = "Confirm Selection";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.731 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.022 * safezoneH;
            action = "[] spawn DEST_fnc_updateSel;";
        };
        class DEST_MENU_TEXT_WEAP_TOP: RscText
        {
            idc = 1001;

            text = "Loadout Selection";
            x = 0.463906 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.0670312 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_WEAP: RscText
        {
            idc = 1002;

            text = "Weapon";
            x = 0.479375 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_OPT: RscText
        {
            idc = 1003;

            text = "Optic";
            x = 0.484531 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_MISC: RscText
        {
            idc = 1004;

            text = "Misc";
            x = 0.484531 * safezoneW + safezoneX;
            y = 0.577 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_CHECK_NVG: RscCheckBox
        {
            idc = 630023;

            x = 0.438125 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0103125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_CHECK_SUPP: RscCheckBox
        {
            idc = 630024;

            x = 0.438125 * safezoneW + safezoneX;
            y = 0.621 * safezoneH + safezoneY;
            w = 0.0103125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_CHECK_SAMPLE: RscCheckBox
        {
            idc = 630025;

            x = 0.438125 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.0103125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_NVG: RscText
        {
            idc = 1005;

            text = "NVG";
            x = 0.448438 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_SUPP: RscText
        {
            idc = 1006;

            text = "Suppressor";
            x = 0.448438 * safezoneW + safezoneX;
            y = 0.621 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_LASER: RscText
        {
            idc = 1007;

            text = "Laser Pointer";
            x = 0.448438 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.048 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
};