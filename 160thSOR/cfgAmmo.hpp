/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 29/11/16
	Description: cfgAmmo.hpp
*/

class CfgAmmo
{
	class G_40mm_Smoke;

		class G_40mm_SmokeRed: G_40mm_Smoke
		{
			smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
			effectsSmoke = "SmokeShellRedEffect";
			deflecting = 0;			
		};
		class G_40mm_SmokeGreen: G_40mm_Smoke
		{
			smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
			effectsSmoke = "SmokeShellGreenEffect";
			deflecting = 0;
			};
		class G_40mm_SmokeYellow: G_40mm_Smoke
		{
			smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
			effectsSmoke = "SmokeShellYellowEffect";
			deflecting = 0;
		};
		class G_40mm_SmokePurple: G_40mm_Smoke
		{
			smokeColor[] = {0.4341, 0.1388, 0.4144, 1};
			effectsSmoke = "SmokeShellPurpleEffect";
			deflecting = 0;
		};
		class G_40mm_SmokeBlue: G_40mm_Smoke
		{
			smokeColor[] = {0.1183, 0.1867, 1, 1};
			effectsSmoke = "SmokeShellBlueEffect";
			deflecting = 0;
		};
		class G_40mm_SmokeOrange: G_40mm_Smoke
		{
			smokeColor[] = {0.6697, 0.2275, 0.10053, 1};
			effectsSmoke = "SmokeShellOrangeEffect";
			deflecting = 0;
		};	
};
