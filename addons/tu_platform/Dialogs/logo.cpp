class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingStart : RscControlsGroup {
			class controls {
				class Logo : RscPictureKeepAspect {
					text = "\tu_platform\data\intro.paa";
					onLoad = "";
				};
			};
		};
	};
};

class RscDisplayMain : RscStandardDisplay {
	class Controls {
		class LogoApex {};
		
		class Logo : RscActivePicture {
			text = "\tu_platform\data\logo.paa";
			onButtonClick = "_this call compile preprocessFileLineNumbers '\tu_platform\fn_connect.sqf';";
			tooltip = "www.squadgames.ru\n\nНажми на логотип, чтобы подключиться к серверу";
			onLoad = "";
		};
	};
};
