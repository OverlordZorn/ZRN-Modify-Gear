#include "../../script_component.hpp"

/*
* Author: Zorn
* Function to clear an entry from the  cache-database.
*
* Arguments:
*
* Return Value:
* None
*
* Example:
* ['something', player] call prefix_component_fnc_functionname
*
* Public: No
*/


// Retrieve hashmap

params ["_key", "", [""]];

private _map = missionNamespace getVariable [QGVAR(cache), "404"];
_map deleteAt _key;