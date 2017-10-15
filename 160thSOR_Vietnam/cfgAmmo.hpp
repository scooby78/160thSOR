/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 29/11/16
	Description: cfgAmmo.hpp
*/

class CfgAmmo
{
	class Grenade;
	class SmokeShell;
    class G_40mm_Smoke : SmokeShell
	{
		simulation = "shotSmoke"; //was "shotSmokeX"
		deflecting = 0;	
		deflectionSlowDown = 0.1;	// smaller number = less bouncy	
	};	
	class GrenadeHand : Grenade 
	{
        hit = 10; // was 8
        indirectHit = 8;
        indirectHitRange = 10; // was 6
        dangerRadiusHit = 60;
        suppressionRadiusHit = 24; // was 24
    };
	class SmokeShellArty: SmokeShell //inherits 26 parameters from bin\config.bin/CfgAmmo/SmokeShell, sources - ["A3_Weapons_F"]
	{
		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteEffect"; // was "SmokeShellWhiteSmall";
		model = "\A3\weapons_f\ammo\shell_smoke";
	};	
};
