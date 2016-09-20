class Car;
class Car_F: Car
{
	class NewTurret;
	class Sounds;
	class HitPoints
	{
		class HitBody;
		class HitEngine;
		class HitFuel;
		class HitLFWheel;
		class HitLBWheel;
		class HitLMWheel;
		class HitLF2Wheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitRMWheel;
		class HitRF2Wheel;
	};
};
class Wheeled_APC_F: Car_F
{
	class ViewOptics;
	class ViewCargo;
	class Sounds: Sounds
	{
		class Engine;
		class Movement;
	};
	class NewTurret;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewOptics;
			class Turrets
			{
				class CommanderOptics;
			};
		};
	};
	class AnimationSources;
};
class APC_Wheeled_01_base_F: Wheeled_APC_F
{
	features="Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
	author="$STR_A3_Bohemia_Interactive";
	mapSize=9.8999996;
	class SimpleObject
	{
		animate[]={};
		hide[]={};
		verticalOffset=0;
	};
	_generalMacro="APC_Wheeled_01_base_F";
	accuracy=0.25;
	displayName="$STR_A3_CFGVEHICLES_APC_Wheeled_01_base_F";
	attenuationEffectType="TankAttenuation";
	soundGetIn[]=
	{
		"A3\sounds_f\vehicles\armor\noises\get_in_out",
		0.56234133,
		1
	};
	soundGetOut[]=
	{
		"A3\sounds_f\vehicles\armor\noises\get_in_out",
		0.56234133,
		1,
		20
	};
	soundDammage[]=
	{
		"",
		0.56234133,
		1
	};
	soundEngineOnInt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start",
		0.39810717,
		1
	};
	soundEngineOnExt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",
		0.56234133,
		1,
		200
	};
	soundEngineOffInt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",
		0.39810717,
		1
	};
	soundEngineOffExt[]=
	{
		"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",
		0.56234133,
		1,
		200
	};
	soundBushCollision1[]=
	{
		"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
		0.17782794,
		1,
		100
	};
	soundBushCollision2[]=
	{
		"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
		0.17782794,
		1,
		100
	};
	soundBushCollision3[]=
	{
		"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
		0.17782794,
		1,
		100
	};
	soundBushCrash[]=
	{
		"soundBushCollision1",
		0.33000001,
		"soundBushCollision2",
		0.33000001,
		"soundBushCollision3",
		0.33000001
	};
	soundGeneralCollision1[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
		1,
		1,
		100
	};
	soundGeneralCollision2[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
		1,
		1,
		100
	};
	soundGeneralCollision3[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
		1,
		1,
		100
	};
	soundGeneralCollision4[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
		1,
		1,
		100
	};
	soundCrashes[]=
	{
		"soundGeneralCollision1",
		0.25,
		"soundGeneralCollision2",
		0.25,
		"soundGeneralCollision3",
		0.25,
		"soundGeneralCollision4",
		0.25
	};
	buildCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
		1,
		1,
		200
	};
	buildCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
		1,
		1,
		200
	};
	buildCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
		1,
		1,
		200
	};
	buildCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
		1,
		1,
		200
	};
	soundBuildingCrash[]=
	{
		"buildCrash0",
		0.25,
		"buildCrash1",
		0.25,
		"buildCrash2",
		0.25,
		"buildCrash3",
		0.25
	};
	WoodCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
		1,
		1,
		200
	};
	WoodCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
		1,
		1,
		200
	};
	WoodCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
		1,
		1,
		200
	};
	WoodCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
		1,
		1,
		200
	};
	soundWoodCrash[]=
	{
		"woodCrash0",
		0.16599999,
		"woodCrash1",
		0.16599999,
		"woodCrash2",
		0.16599999,
		"woodCrash3",
		0.16599999
	};
	ArmorCrash0[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
		1,
		1,
		200
	};
	ArmorCrash1[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
		1,
		1,
		200
	};
	ArmorCrash2[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
		1,
		1,
		200
	};
	ArmorCrash3[]=
	{
		"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
		1,
		1,
		200
	};
	soundArmorCrash[]=
	{
		"ArmorCrash0",
		0.25,
		"ArmorCrash1",
		0.25,
		"ArmorCrash2",
		0.25,
		"ArmorCrash3",
		0.25
	};
	class Sounds
	{
		class Idle_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",
				0.3548134,
				1,
				200
			};
			frequency="0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
			volume="engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
		};
		class Engine
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",
				0.39810717,
				1,
				200
			};
			frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
			volume="engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
		};
		class Engine1_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",
				0.44668359,
				1,
				200
			};
			frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
			volume="engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
		};
		class Engine2_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",
				0.50118721,
				1,
				250
			};
			frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
			volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
		};
		class Engine3_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",
				0.56234133,
				1,
				300
			};
			frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
			volume="engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
		};
		class Engine4_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",
				0.63095737,
				1,
				300
			};
			frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
			volume="engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
		};
		class Engine5_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",
				0.70794576,
				1,
				300
			};
			frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
			volume="engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
		};
		class IdleThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",
				0.56234133,
				1,
				200
			};
			frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
		};
		class EngineThrust
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",
				0.63095737,
				1,
				200
			};
			frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
		};
		class Engine1_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",
				0.63095737,
				1,
				230
			};
			frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
		};
		class Engine2_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",
				0.70794576,
				1,
				250
			};
			frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
		};
		class Engine3_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",
				0.70794576,
				1,
				350
			};
			frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
		};
		class Engine4_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",
				1,
				1,
				350
			};
			frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
		};
		class Engine5_Thrust_ext
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",
				1.1220185,
				1,
				400
			};
			frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
			volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
		};
		class Idle_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",
				0.31622776,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
		};
		class Engine_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
		};
		class Engine1_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
		};
		class Engine2_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
		};
		class Engine3_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
		};
		class Engine4_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
			volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
		};
		class Engine5_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",
				0.63095737,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
			volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
		};
		class IdleThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",
				0.3548134,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
		};
		class EngineThrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",
				0.39810717,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
		};
		class Engine1_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
		};
		class Engine2_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",
				0.44668359,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
		};
		class Engine3_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",
				0.50118721,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
		};
		class Engine4_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",
				0.56234133,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
		};
		class Engine5_Thrust_int
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",
				0.63095737,
				1
			};
			frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
			volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
		};
		class NoiseInt
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
				0.50118721,
				1
			};
			frequency="1";
			volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class NoiseExt
		{
			sound[]=
			{
				"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
				0.63095737,
				1,
				150
			};
			frequency="1";
			volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
		class TiresRockOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
				1,
				1,
				60
			};
			frequency="1";
			volume="camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
				1.5848932,
				1,
				90
			};
			frequency="1";
			volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
		};
		class TiresRockIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
				0.70794576,
				1
			};
			frequency="1";
			volume="(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
				0.50118721,
				1
			};
			frequency="1";
			volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
		};
		class breaking_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
		};
		class acceleration_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
		};
		class turn_left_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_ext_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
		};
		class acceleration_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
		};
		class turn_left_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_ext_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
				1,
				1,
				100
			};
			frequency=1;
			volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
		};
		class acceleration_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
		};
		class turn_left_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_int_road
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
		};
		class acceleration_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
		};
		class turn_left_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_int_dirt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
				1,
				1
			};
			frequency=1;
			volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
	};
	thrustDelay=0.34999999;
	brakeIdleSpeed=1.78;
	maxSpeed=110;
	fuelCapacity=45;
	wheelCircumference=3.8050001;
	waterLeakiness=2.5;
	normalSpeedForwardCoef=0.51999998;
	antiRollbarForceCoef=24;
	antiRollbarForceLimit=30;
	antiRollbarSpeedMin=15;
	antiRollbarSpeedMax=65;
	idleRpm=425;
	redRpm=2300;
	class complexGearbox
	{
		GearboxRatios[]=
		{
			"R1",
			-4.8400002,
			"N",
			0,
			"D1",
			3.4300001,
			"D2",
			2.01,
			"D3",
			1.42,
			"D4",
			1,
			"D5",
			0.82999998,
			"D6",
			0.58999997
		};
		TransmissionRatios[]=
		{
			"High",
			8
		};
		AmphibiousRatios[]=
		{
			"R1",
			-10,
			"N",
			0,
			"D1",
			30
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
	};
	simulation="carx";
	dampersBumpCoef=4.5;
	differentialType="all_limited";
	frontRearSplit=0.5;
	frontBias=1.3;
	rearBias=1.3;
	centreBias=1.3;
	clutchStrength=35;
	enginePower=810; //was 405
	maxOmega=241;
	peakTorque=4520; //was 2260
	dampingRateFullThrottle=0.079999998;
	dampingRateZeroThrottleClutchEngaged=2;
	dampingRateZeroThrottleClutchDisengaged=0.050000001;
	torqueCurve[]=
	{
		
		{
			"(0/2300)",
			"(0/2260)"
		},
		
		{
			"(1200/2300)",
			"(1625/2260)"
		},
		
		{
			"(1400/2300)",
			"(2100/2260)"
		},
		
		{
			"(1500/2300)",
			"(2200/2260)"
		},
		
		{
			"(1550/2300)",
			"(2260/2260)"
		},
		
		{
			"(1600/2300)",
			"(2200/2260)"
		},
		
		{
			"(2300/2300)",
			"(1700/2260)"
		},
		
		{
			"(4700/2300)",
			"(0/2260)"
		}
	};
	changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
	switchTime=0.1;
	latency=1.4;
	class Wheels
	{
		class L1
		{
			boneName="wheel_1_1_damper";
			steering=1;
			side="left";
			center="wheel_1_1_axis";
			boundary="wheel_1_1_bound";
			width="0.2";
			mass=187.5;
			MOI=60;
			dampingRate=0.1;
			dampingRateDamaged=1;
			dampingRateDestroyed=1000;
			maxBrakeTorque=45000;
			maxHandBrakeTorque=0;
			suspTravelDirection[]={0,-0.99599999,-0.089000002};
			suspForceAppPointOffset="wheel_1_1_axis";
			tireForceAppPointOffset="wheel_1_1_axis";
			maxCompression=0.1125;
			mMaxDroop=0.1125;
			sprungMass=3090;
			springStrength=110000;
			springDamperRate=27900;
			longitudinalStiffnessPerUnitGravity=10000;
			latStiffX=25;
			latStiffY=180;
			frictionVsSlipGraph[]=
			{
				{0,1},
				{0.5,1},
				{1,1}
			};
		};
		class L2: L1
		{
			boneName="wheel_1_2_damper";
			steering=1;
			center="wheel_1_2_axis";
			boundary="wheel_1_2_bound";
			suspForceAppPointOffset="wheel_1_2_axis";
			tireForceAppPointOffset="wheel_1_2_axis";
		};
		class L3: L1
		{
			boneName="wheel_1_3_damper";
			steering=0;
			center="wheel_1_3_axis";
			boundary="wheel_1_3_bound";
			suspForceAppPointOffset="wheel_1_3_axis";
			tireForceAppPointOffset="wheel_1_3_axis";
			maxHandBrakeTorque=300000;
		};
		class L4: L1
		{
			boneName="wheel_1_4_damper";
			steering=0;
			center="wheel_1_4_axis";
			boundary="wheel_1_4_bound";
			suspForceAppPointOffset="wheel_1_4_axis";
			tireForceAppPointOffset="wheel_1_4_axis";
			maxHandBrakeTorque=300000;
		};
		class R1: L1
		{
			boneName="wheel_2_1_damper";
			center="wheel_2_1_axis";
			boundary="wheel_2_1_bound";
			suspForceAppPointOffset="wheel_2_1_axis";
			tireForceAppPointOffset="wheel_2_1_axis";
			steering=1;
			side="right";
		};
		class R2: R1
		{
			boneName="wheel_2_2_damper";
			steering=1;
			center="wheel_2_2_axis";
			boundary="wheel_2_2_bound";
			suspForceAppPointOffset="wheel_2_2_axis";
			tireForceAppPointOffset="wheel_2_2_axis";
		};
		class R3: R1
		{
			boneName="wheel_2_3_damper";
			steering=0;
			center="wheel_2_3_axis";
			boundary="wheel_2_3_bound";
			suspForceAppPointOffset="wheel_2_3_axis";
			tireForceAppPointOffset="wheel_2_3_axis";
			maxHandBrakeTorque=300000;
		};
		class R4: R1
		{
			boneName="wheel_2_4_damper";
			steering=0;
			center="wheel_2_4_axis";
			boundary="wheel_2_4_bound";
			suspForceAppPointOffset="wheel_2_4_axis";
			tireForceAppPointOffset="wheel_2_4_axis";
			maxHandBrakeTorque=300000;
		};
	};
	editorSubcategory="EdSubcat_APCs";
	memoryPointTaskMarker="TaskMarker_1_pos";
	terrainCoef=3;
	turnCoef=3;
	canFloat=1;
	waterAngularDampingCoef=10;
	waterPPInVehicle=0;
	waterResistanceCoef=0.2;
	engineShiftY=0.5;
	armor=500;  //was 250
	armorStructural=6;
	armorLights=0.1;
	crewExplosionProtection=0.99949998;
	damageResistance=0.0071899998;
	cost=1000000;
	driverAction="crew_tank01_out";
	driverInAction="crew_tank01_in";
	cargoAction[]=
	{
		"passenger_apc_narrow_generic02_low",
		"passenger_apc_narrow_generic01_low",
		"passenger_apc_narrow_generic03",
		"passenger_apc_generic03_low",
		"passenger_apc_generic02",
		"passenger_generic02_foldhands",
		"passenger_apc_narrow_generic01_low",
		"passenger_apc_narrow_generic02_low"
	};
	hideWeaponsCargo=1;
	driverForceOptics=1;
	driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
	memoryPointDriverOptics="driverview";
	cargoIsCoDriver[]={0};
	forceHideDriver=0;
	class ViewOptics: ViewOptics
	{
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		initFov=0.85000002;
		minFov=0.85000002;
		maxFov=0.85000002;
	};
	class HitPoints: HitPoints
	{
		class HitBody: HitBody
		{
			armor=1;
			material=-1;
			name="karoserie";
			visual="zbytek";
			passThrough=1;
			minimalHit=0.2;
			explosionShielding=0.2;
			radius=0.33000001;
		};
		class HitEngine: HitEngine
		{
			armor=0.5;
			material=-1;
			name="motor";
			passThrough=0;
			minimalHit=0.1;
			explosionShielding=0.2;
			radius=0.25;
		};
		class HitFuel: HitFuel
		{
			armor=1.5;
			material=-1;
			name="palivo";
			passThrough=1;
			minimalHit=0.1;
			explosionShielding=0.40000001;
			radius=0.25;
		};
		class HitLFWheel: HitLFWheel
		{
			visual="wheel_1_1_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitLBWheel: HitLBWheel
		{
			visual="wheel_1_4_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitLMWheel: HitLMWheel
		{
			visual="wheel_1_3_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitLF2Wheel: HitLF2Wheel
		{
			visual="wheel_1_2_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitRFWheel: HitRFWheel
		{
			visual="wheel_2_1_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitRBWheel: HitRBWheel
		{
			visual="wheel_2_4_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitRMWheel: HitRMWheel
		{
			visual="wheel_2_3_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
		class HitRF2Wheel: HitRF2Wheel
		{
			visual="wheel_2_2_hide";
			armor=0.40000001;
			minimalHit=0.02;
			explosionShielding=4;
			radius=0.33000001;
		};
	};
	weapons[]=
	{
		"TruckHorn"
	};
	magazines[]={};
	smokeLauncherGrenadeCount=8;
	smokeLauncherVelocity=14;
	smokeLauncherOnTurret=0;
	smokeLauncherAngle=120;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewGunner;
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					memoryPointGunnerOutOptics="commanderview";
					memoryPointGunnerOptics="commanderview";
					minElev=-25;
					maxElev=60;
					initElev=0;
					minTurn=-360;
					maxTurn=360;
					initTurn=0;
					weapons[]=
					{
						"SmokeLauncher"
					};
					magazines[]=
					{
						"SmokeLauncherMag"
					};
					soundServo[]=
					{
						"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
						1,
						1,
						30
					};
					soundServoVertical[]=
					{
						"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
						1,
						1,
						30
					};
					outGunnerMayFire=0;
					inGunnerMayFire=1;
					forceHideGunner=0;
					gunnerAction="commander_apcwheeled1_out";
					gunnerInAction="commander_apcwheeled1_in";
					gunnerGetInAction="GetInAMV_cargo";
					gunnerGetOutAction="GetOutLow";
					gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
					gunnerOutOpticsModel="";
					gunnerOpticsEffect[]={};
					isPersonTurret=1;
					personTurretAction="vehicle_turnout_1";
					minOutElev=-10;
					maxOutElev=15;
					initOutElev=0;
					minOutTurn=-45;
					maxOutTurn=90;
					initOutTurn=0;
					class ViewGunner: ViewGunner
					{
					};
					class ViewOptics: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.31;
						minFov=0.034000002;
						maxFov=0.31;
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={2,3};
					};
					class OpticsIn: Optics_Commander_01
					{
						class Wide: Wide
						{
						};
						class Medium: Medium
						{
						};
						class Narrow: Narrow
						{
						};
					};
					turretInfoType="RscOptics_MBT_01_commander";
					startEngine=0;
					class HitPoints
					{
						class HitTurret
						{
							armor=0.2;
							material=-1;
							name="vezVelitele";
							visual="vezVelitele";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=0.40000001;
							radius=0.2;
						};
						class HitGun
						{
							armor=0.2;
							material=-1;
							name="zbranVelitele";
							visual="zbranVelitele";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=0.40000001;
							radius=0.2;
						};
					};
					stabilizedInAxes=3;
					maxHorizontalRotSpeed=1.8;
					maxVerticalRotSpeed=1.8;
					gunnerHasFlares=1;
					viewGunnerInExternal=1;
				};
			};
			body="mainTurret";
			gun="mainGun";
			weapons[]=
			{
				"LMG_RCWS"
			};
			magazines[]=
			{
				"2000Rnd_65x39_belt",
				"2000Rnd_65x39_belt"
			};
			soundServo[]=
			{
				"A3\sounds_f\dummysound",
				0.0099999998,
				1,
				30
			};
			commanding=1;
			minElev=-10;
			initElev=0;
			maxElev=60;
			gunnerAction="gunner_apcwheeled1_out";
			gunnerInAction="gunner_apcwheeled1_in";
			gunnerGetInAction="GetInAMV_cargo";
			gunnerGetOutAction="GetOutLow";
			viewGunnerInExternal=1;
			castGunnerShadow=1;
			stabilizedInAxes=3;
			gunnerForceOptics=1;
			inGunnerMayFire=1;
			outGunnerMayFire=0;
			gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			discreteDistanceInitIndex=2;
			memoryPointGunnerOptics="gunnerview";
			selectionFireAnim="zasleh2";
			isPersonTurret=0;
			personTurretAction="vehicle_turnout_1";
			minOutElev=-30;
			maxOutElev=60;
			initOutElev=0;
			minOutTurn=-160;
			maxOutTurn=160;
			initOutTurn=0;
			class ViewOptics: RCWSOptics
			{
				visionMode[]=
				{
					"Normal",
					"TI"
				};
			};
			class OpticsIn: Optics_Gunner_APC_01
			{
				class Wide: Wide
				{
				};
				class Medium: Medium
				{
				};
				class Narrow: Narrow
				{
				};
			};
			turretInfoType="RscOptics_APC_Wheeled_01_gunner";
			class HitPoints
			{
				class HitTurret
				{
					armor=0.40000001;
					material=-1;
					name="vez";
					visual="vez";
					passThrough=0.2;
					minimalHit=0.1;
					explosionShielding=0.2;
					radius=0.25;
				};
				class HitGun
				{
					armor=0.2;
					material=-1;
					name="zbran";
					visual="zbran";
					passThrough=0;
					minimalHit=0.1;
					explosionShielding=0.40000001;
					radius=0.25;
				};
			};
		};
	};
	class AnimationSources: AnimationSources
	{
		class muzzle_rot
		{
			source="ammorandom";
			weapon="autocannon_40mm_CTWS";
		};
		class muzzle_hide
		{
			source="reload";
			weapon="autocannon_40mm_CTWS";
		};
		class HideTurret
		{
			source="user";
			initPhase=0;
			animPeriod=0.001;
		};
	};
	class Damage
	{
		tex[]={};
		mat[]=
		{
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_damage.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_destruct.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_damage.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_destruct.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_damage.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_destruct.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_damage.rvmat",
			"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_destruct.rvmat"
		};
	};
	viewCargoShadowDiff=0.050000001;
	viewCargoShadowAmb=0.5;
	getInAction="GetInHigh";
	getOutAction="GetOutHigh";
	cargoGetInAction[]=
	{
		"GetInAMV_cargo"
	};
	cargoGetOutAction[]=
	{
		"GetOutLow"
	};
	class Exhausts
	{
		class Exhaust1
		{
			position="exhaust";
			direction="exhaust_dir";
			effect="ExhaustsEffectAMV";
		};
	};
	engineStartSpeed=5;
	class NVGMarkers
	{
		class NVGMarker01
		{
			name="nvg_marker";
			color[]={0.029999999,0.003,0.003,1};
			ambient[]={0.003,0.00030000001,0.00030000001,1};
			brightness=0.001;
			blinking=1;
		};
	};
	explosionEffect="FuelExplosionBig";
	engineEffectSpeed=5;
	memoryPointsLeftEngineEffect="EngineEffectL";
	memoryPointsRightEngineEffect="EngineEffectR";
	class Reflectors
	{
		class Left
		{
			color[]={1900,1800,1700};
			ambient[]={5,5,5};
			position="Light_L";
			direction="Light_L_end";
			hitpoint="Light_L";
			selection="Light_L";
			size=1;
			innerAngle=100;
			outerAngle=179;
			coneFadeCoef=10;
			intensity=1;
			useFlare=0;
			dayLight=0;
			flareSize=1;
			class Attenuation
			{
				start=1;
				constant=0;
				linear=0;
				quadratic=0.25;
				hardLimitStart=30;
				hardLimitEnd=60;
			};
		};
		class Right: Left
		{
			position="Light_R";
			direction="Light_R_end";
			hitpoint="Light_R";
			selection="Light_R";
		};
		class Right2: Right
		{
			position="light_R_flare";
			useFlare=1;
		};
		class Left2: Left
		{
			position="light_L_flare";
			useFlare=1;
		};
		class Right3: Right2
		{
			position="light_R_flare2";
			flareSize=0.69999999;
			hitpoint="Light_R2";
			selection="Light_R2";
		};
		class Left3: Left2
		{
			position="light_L_flare2";
			flareSize=0.69999999;
			hitpoint="Light_L2";
			selection="Light_L2";
		};
	};
	aggregateReflectors[]=
	{
		
		{
			"Left",
			"Left2",
			"Left3",
			"Right",
			"Right2",
			"Right3"
		}
	};
	selectionFireAnim="";
	class RenderTargets
	{
		class mirror_l
		{
			renderTarget="mirror_l";
			class Camera
			{
				pointPosition="PIP0_pos";
				pointDirection="PIP0_dir";
				renderVisionMode=4;
				renderQuality=2;
				fov=0.69999999;
			};
		};
		class mirror_r
		{
			renderTarget="mirror_r";
			class Camera
			{
				pointPosition="PIP1_pos";
				pointDirection="PIP1_dir";
				renderVisionMode=4;
				renderQuality=2;
				fov=0.69999999;
			};
		};
	};
	transportSoldier=8;
	class TransportMagazines
	{
		class _xx_30Rnd_65x39_caseless_mag
		{
			magazine="30Rnd_65x39_caseless_mag";
			count=12;
		};
		class _xx_100Rnd_65x39_caseless_mag
		{
			magazine="100Rnd_65x39_caseless_mag";
			count=6;
		};
		class _xx_HandGrenade
		{
			magazine="HandGrenade";
			count=6;
		};
		class _xx_MiniGrenade
		{
			magazine="MiniGrenade";
			count=6;
		};
		class _xx_1Rnd_HE_Grenade_shell
		{
			magazine="1Rnd_HE_Grenade_shell";
			count=6;
		};
		class _xx_1Rnd_Smoke_Grenade_shell
		{
			magazine="1Rnd_Smoke_Grenade_shell";
			count=3;
		};
		class _xx_1Rnd_SmokeGreen_Grenade_shell
		{
			magazine="1Rnd_SmokeGreen_Grenade_shell";
			count=3;
		};
		class _xx_1Rnd_SmokeOrange_Grenade_shell
		{
			magazine="1Rnd_SmokeOrange_Grenade_shell";
			count=3;
		};
		class _xx_1Rnd_SmokeBlue_Grenade_shell
		{
			magazine="1Rnd_SmokeBlue_Grenade_shell";
			count=3;
		};
		class _xx_SmokeShell
		{
			magazine="SmokeShell";
			count=8;
		};
		class _xx_SmokeShellGreen
		{
			magazine="SmokeShellGreen";
			count=8;
		};
		class _xx_SmokeShellOrange
		{
			magazine="SmokeShellOrange";
			count=8;
		};
		class _xx_SmokeShellBlue
		{
			magazine="SmokeShellBlue";
			count=8;
		};
		class _xx_NLAW_F
		{
			magazine="NLAW_F";
			count=5;
		};
		class _xx_Titan_AT
		{
			magazine="Titan_AT";
			count=2;
		};
		class _xx_Titan_AP
		{
			magazine="Titan_AP";
			count=2;
		};
		class _xx_Titan_AA
		{
			magazine="Titan_AA";
			count=2;
		};
	};
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
	class TransportWeapons
	{
		class _xx_arifle_MX_F
		{
			weapon="arifle_MX_F";
			count=2;
		};
	};
	showNVGCommander=1;
	showNVGGunner=1;
	showNVGDriver=1;
	numberPhysicalWheels=8;
};
class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
{
	author="$STR_A3_Bohemia_Interactive";
	class SimpleObject
	{
		animate[]={};
		hide[]={};
		verticalOffset=0;
	};
	_generalMacro="B_APC_Wheeled_01_base_F";
	side=1;
	faction="BLU_F";
	crew="B_crew_F";
	typicalCargo[]=
	{
		"B_soldier_F"
	};
};
class SOR_B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
{
	author="$STR_A3_Bohemia_Interactive";
	class SimpleObject
	{
		animate[]={};
		hide[]={};
		verticalOffset=0;
	};
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Wheeled_01_cannon_F.jpg";
	_generalMacro="B_APC_Wheeled_01_cannon_F";
	scope=2;
	accuracy=0.30000001;
	editorCategory = "SOR_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_Faction_D;
	waterLinearDampingCoefX = 10.0;
	displayName="$STR_A3_CFGVEHICLES_B_APC_WHEELED_01_CANNON";
	class Library
	{
		libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
	};
	model="\A3\Armor_F_Beta\APC_Wheeled_01\APC_Wheeled_01_cannon_F.p3d";
	picture="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_ca.paa";
	Icon="\A3\armor_f_beta\APC_Wheeled_01\Data\UI\map_amw_CA.paa";
	unitInfoType="RscUnitInfoTank";
	radarType=8;
	driverCanSee="4+8+2+32+16";
	gunnerCanSee="4+2+8+32+16";
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,4)
		mag_xx(rhsusf_100Rnd_762x51,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[]=
			{
				"autocannon_40mm_CTWS",
				"LMG_M200_body"
			};
			magazines[]=
			{
				"60Rnd_40mm_GPR_Tracer_Red_shells",
				"60Rnd_40mm_GPR_Tracer_Red_shells",
				"60Rnd_40mm_GPR_Tracer_Red_shells",
				"60Rnd_40mm_GPR_Tracer_Red_shells",
				"60Rnd_40mm_GPR_Tracer_Red_shells",
				"40Rnd_40mm_APFSDS_Tracer_Red_shells",
				"40Rnd_40mm_APFSDS_Tracer_Red_shells",
				"40Rnd_40mm_APFSDS_Tracer_Red_shells",
				"40Rnd_40mm_APFSDS_Tracer_Red_shells",
				"40Rnd_40mm_APFSDS_Tracer_Red_shells",
				"2000Rnd_65x39_belt"
			};
			soundServo[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
				0.56234133,
				1,
				30
			};
			soundServoVertical[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
				0.56234133,
				1,
				30
			};
		};
	};
	threat[]={1,1,0.30000001};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=
	{
		"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa",
		"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa",
		"a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa"
	};
};

