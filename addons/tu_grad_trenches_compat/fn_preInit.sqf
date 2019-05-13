#include "addon.hpp"
GVAR(freezetime_started) = [Q(tu_platform_freezetime_started), {
	//Уполовиним время копания окопов
	ACEVAR(trenches,digSpeedCoeff) = ACEVAR(trenches,digSpeedCoeff) / 2;
	grad_trenches_functions_shortEnvelopeDigTime = grad_trenches_functions_shortEnvelopeDigTime / 2;
	grad_trenches_functions_smallEnvelopeDigTime = grad_trenches_functions_smallEnvelopeDigTime / 2;
	grad_trenches_functions_bigEnvelopeDigTime = grad_trenches_functions_bigEnvelopeDigTime / 2;
	grad_trenches_functions_gigantEnvelopeDigTime = grad_trenches_functions_gigantEnvelopeDigTime / 2;
	grad_trenches_functions_vehicleEnvelopeDigTime = grad_trenches_functions_vehicleEnvelopeDigTime / 2;
	[Q(tu_platform_freezetime_started),GVAR(freezetime_started)] call CBA_fnc_removeEventHandler;

	GVAR(freezetime_ended) = [Q(tu_platform_freezetime_ended), {
		//Востановим время копания
		ACEVAR(trenches,digSpeedCoeff) = ACEVAR(trenches,digSpeedCoeff) * 2;
		grad_trenches_functions_shortEnvelopeDigTime = grad_trenches_functions_shortEnvelopeDigTime * 2;
		grad_trenches_functions_smallEnvelopeDigTime = grad_trenches_functions_smallEnvelopeDigTime * 2;
		grad_trenches_functions_bigEnvelopeDigTime = grad_trenches_functions_bigEnvelopeDigTime * 2;
		grad_trenches_functions_gigantEnvelopeDigTime = grad_trenches_functions_gigantEnvelopeDigTime * 2;
		grad_trenches_functions_vehicleEnvelopeDigTime = grad_trenches_functions_vehicleEnvelopeDigTime * 2;
		[Q(tu_platform_freezetime_ended),GVAR(freezetime_ended)] call CBA_fnc_removeEventHandler;		
	}] call CBA_fnc_addEventHandler;
	
}] call CBA_fnc_addEventHandler;

