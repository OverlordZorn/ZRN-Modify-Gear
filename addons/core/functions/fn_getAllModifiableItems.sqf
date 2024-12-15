#include "../script_component.hpp"

/*
* Author: Zorn
* Function to retrieve modifiable items. Cached Array for the duration of the interaction menu.
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

// Cleanup Cache once the interaction menu is closed
[
    "ace_interactMenuClosed",
    {
        if (_this isNotEqualTo [1]) exitWith {};
        ["items_modifiable_all"] call FUNC(cache_clear);
        [_thisType, _thisId] call CBA_fnc_removeEventHandler;
    }
] call CBA_fnc_addEventHandlerArgs;

[
    "items_modifiable_all",
    {
        private _items = [_player] call FUNC(getItems);
        private _array = [];
        {
            private _cfg = [_x] call CBA_fnc_getItemConfig;
            if ( [_cfg] call FUNC(checkItem) && { count ([_cfg >> QPVAR(modifiableTo)] call BIS_fnc_getCfgDataArray) > 0 } )  then { _array pushBack _x; };

        } forEach _items;
        _array
    }
] call FUNC(cache_get);