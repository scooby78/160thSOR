/*
	Name: SOR PMC
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/


    class SOR_PMC_DESERT: Uniform_Base
    {
        author = "YETTIE";
        scope = 2;
		displayName = "MilSec Desert";
 
        class ItemInfo: UniformItem
        {
            uniformModel = "";
            uniformClass = PMC_Commander;
            containerClass = Supply40;
            mass = 40;
        };
    };
    class SOR_PMC_Woodland: Uniform_Base
    {
        author = "YETTIE";
        scope = 2;
		displayName = "MilSec Desert";
 
        class ItemInfo: UniformItem
        {
            uniformModel = "";
            uniformClass = PMC_Commander_w;
            containerClass = Supply40;
            mass = 40;
        };
    };

