#include "..\script_component.hpp"
/*
 * Author: 2LT.Mazinski
 * Locates and Removes 1x Morphine after the administration of Naloxone.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Medication <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "Naloxone"] call aceP_circulation_fnc_treatmentAdvanced_NaloxoneLocal;
 *
 * Public: No
 */

params ["_medic", "_patient", "_medicationString"];

private _medicationArray =_patient getVariable ["ace_medical_medications", []];

{
    _x params ["_medication"];

    _medicationArray deleteAt (_medicationArray find _x);
    
} forEach (_medicationArray);

_patient setVariable ["ace_medical_medications", _medicationArray,true];

[_patient,"Fixer"] call ace_medical_treatment_fnc_addToTriageCard;
[_patient,"activity", LSTRING(use_log),[[_medic] call ace_common_fnc_getName, "Fixer"]] call ace_medical_treatment_fnc_addToLog;

true