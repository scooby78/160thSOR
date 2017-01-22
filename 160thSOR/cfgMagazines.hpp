/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 22/06/16
	Description: cfgMagazines.hpp
*/

class CfgMagazines
{
	class rhsusf_100Rnd_762x51_m62_tracer;
	class 1Rnd_HE_Grenade_shell;
	
	class SOR_rhsusf_100Rnd_762x51_m62_tracer: rhsusf_100Rnd_762x51_m62_tracer 
	{
		ammo = "B_338_Ball";		
	};
	class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = "Bohemia Interactive";
		displayName = "Smoke Round (White)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo = "rhs_40mm_smoke_white";
		descriptionShort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: EGLM, 3GL";
		displayNameShort = "White Smoke";
	};
	class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "Bohemia Interactive";
		displayName = "Smoke Round (Red)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo = "rhs_40mm_smoke_red";
		displayNameShort = "Red Smoke";
		descriptionShort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: EGLM, 3GL";
	};
	class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "Bohemia Interactive";
		displayName = "Smoke Round (Green)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo = "rhs_40mm_smoke_green";
		displayNameShort = "Green Smoke";
		descriptionShort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: EGLM, 3GL";
	};	
	class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = "Bohemia Interactive";
		displayName = "Smoke Round (Yellow)";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo = "rhs_40mm_smoke_yellow";
		displayNameShort = "Yellow Smoke";
		descriptionShort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: EGLM, 3GL";
	};	
};

