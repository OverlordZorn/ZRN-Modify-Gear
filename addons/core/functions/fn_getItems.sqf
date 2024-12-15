#include "../script_component.hpp"

/*
* Author: Zorn
* Retrieves a list of items on the user - will be cached for the duration of the interaction.
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


private _items = missionNamespace getVariable [QGVAR(items_cache), "404"];

if (_items isEqualTo "404") then {
    _items = flatten getUnitLoadout _player select { _x isEqualType "" && { _x != ""}};
    missionNamespace setVariable [QGVAR(items_cache), _items];
    
    // Cleanup Cache once the interaction menu is closed
    [
        "ace_interactMenuClosed",
        {
            
            if (_this isNotEqualTo [1]) exitWith {};
            missionNamespace setVariable [QGVAR(items_cache),nil];
            [_thisType, _thisId] call CBA_fnc_removeEventHandler;
        }
    ] call CBA_fnc_addEventHandlerArgs;
};
_items