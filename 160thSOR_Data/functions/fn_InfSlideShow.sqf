wboard = _this select 0;
SOR_SLIDESHOW = 0;
SOR_CQB = 0;

// Close Quaters Battle Powerpoint
wboard addAction [("<t color='#16e616'>" + ("Tier E3 - Close Quarters Battle") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide1.jpg']];SOR_CQB = 1;SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_SLIDESHOW == 0)) && (player isKindOf 'SOR_Actual_D')"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide2") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide2.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 1))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide3") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide3.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 2))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide4") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide4.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 3))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide5") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide5.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 4))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide6") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide6.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 5))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide7") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide7.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 6))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide8") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide8.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 7))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide9") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide9.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 8))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide10") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide10.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 9))"];
wboard addAction [("<t color='#16e616'>" + ("Next Slide11") + "</t>"),"[wboard setObjectTextureGlobal [0, '160thSOR_Data\inf\CQB\Slide11.jpg']];SOR_SLIDESHOW = SOR_SLIDESHOW + 1; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_CQB > 0) && (SOR_SLIDESHOW == 10))"];

// Utility Controls
wboard addAction [("<t color='#FFA700'>" + ("Previous Slide") + "</t>"),"SOR_SLIDESHOW = SOR_SLIDESHOW - 2; ","",1,true,true,"","((_target distance _this) < 5 && (SOR_SLIDESHOW > 1))"];
wboard addAction [("<t color='#FF0000'>" + ("End Powerpoint") + "</t>"),"[wboard setObjectTextureGlobal [0, '#(argb,8,8,3)color(0,0,0,0.0,co)']];SOR_SLIDESHOW = -1;SOR_CQB = 0; removeAllActions wboard;","",1,true,true,"","((_target distance _this) < 5 && (SOR_SLIDESHOW > 0))"];