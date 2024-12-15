#include "../../script_component.hpp"

/*
* Author: Zorn
* [Description]
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

private _map = missionNamespace getVariable [GVAR(cache), "404"];

if (_map isEqualTo "404") then {
    _map = createHashMap;
    missionNamespace setVariable [GVAR(cache), _map];
};

_map