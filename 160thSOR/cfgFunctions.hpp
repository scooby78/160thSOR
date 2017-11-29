class CfgFunctions 
{
	class SOR
	{
		class init
		{
			file = "160thSOR\functions";
			class settings {preInit = 1;};
			class TFAR_AI_Hearing {postInit = 1;};
			class server_Perf {postInit = 1;};
		};
		tag = "SOR";
		class functions
		{
			file = "160thSOR\functions";
			class attachLights;
			class autoparadrop;
			class chute;
			class markUnits;
			class markUnitsCustom;
			class service;
			class parajump;
			class trigger;
			class eventHandlers;
			class grpPlaced;
			class objPlaced;
			class mech_service;
			class trigger_mech;
			class intelAction;
			class SelfDestruct;
			class radarInit;
			class airtraining;
			class zeusTools;
			class eject;
			class externalView;
			class bomber;
			class parajumpTroop;
		};
	};
};