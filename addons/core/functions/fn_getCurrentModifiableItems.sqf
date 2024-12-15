#include "../script_component.hpp"

/*
* Author: Zorn
* Function to retrieve currently worn, modifiable items. Cached Array for the duration of the interaction menu.
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
    ["_player",   objNull,    [objNull]]
];

[
    "ace_interactMenuClosed",
    {
        if (_this isNotEqualTo [1]) exitWith {};
        ["items_all"] call FUNC(cache_clear);
        [_thisType, _thisId] call CBA_fnc_removeEventHandler;
    }
] call CBA_fnc_addEventHandlerArgs;


[
    "modifiable_items_gear",
    {

    }
] call FUNC(cache_get);