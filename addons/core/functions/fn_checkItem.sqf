#include "../../script_component.hpp"

/*
* Author: Zorn
* function to check if the this item is modifiable - returns boolean
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

params [
    ["_cfg",        configNull,         [configNull]       ]
];


if (isNull _cfg) exitWith {false};
count configProperties [_cfg, Q(configName _x == QQPVAR(modifiableTo)), false] > 0