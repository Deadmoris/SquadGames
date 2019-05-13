#include "BIS_AddonInfo.hpp"
/**********************************************
 Original file: config.bin
 Binarized size: 667b
 Classes count: 4
 Datestamp: 23.02.2016 21:57:43
 Debinarized with Blender's tools
 http://www.arma3.ru
**********************************************/

class CfgPatches {
    class wog3_reequip {
        units[]={};
        weapons[]={};
        requiredVersion = 1;
        requiredAddons[]={        
            "ace_interaction"
        };
        author[]={        
            "Ezhuk"
        };
        authorUrl = "https://wogames.info/";
    };
};

class CfgFunctions {
    class wog3_reequip {
        class reequip {
            file = "wog3_reequip\functions";
            class reequip {};
        };
    };
};


class CfgVehicles
{
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
		 	class Wog3_reequip {
			  displayName = "$STR_fix_uniform_bug_name";
				runOnHover = 0;
				exceptions[] = {"isNotInside"};
			  statement = "[5, [player], {(_this select 0) call wog3_reequip_fnc_reequip}, '', '', {true}, ['isnotinside']] call ace_common_fnc_progressBar;";
					
			};
		};
	};
};