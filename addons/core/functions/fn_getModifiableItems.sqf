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


private _modifiableItems = missionNamespace getVariable [QGVAR(modifiable_items_cache), "404"];

if (_modifiableItems isEqualTo "404") then {
    _modifiableItems = [];
    private _items = [_player] call FUNC(getItems);
    {
        private _cfg = [_x] call CBA_fnc_getItemConfig;
        // Checks if Object has a non-inherited QPVAR(modifiableTo) property
        if (count configProperties [_cfg, Q(configName _x == QQPVAR(modifiableTo)), false] > 0) then {
            // array
            private _return = [_cfg >> QPVAR(modifiableTo)] call BIS_fnc_getCfgDataArray;
            if (count _return > 0) then { _modifiableItems pushBack _x; };
        };
    
    } forEach _items;
    missionNamespace setVariable [QGVAR(modifiable_items_cache), _modifiableItems];
    
    // Cleanup Cache once the interaction menu is closed
    [
        "ace_interactMenuClosed",
        {
            
            if (_this isNotEqualTo [1]) exitWith {};
            missionNamespace setVariable [QGVAR(modifiable_items_cache),nil];
            [_thisType, _thisId] call CBA_fnc_removeEventHandler;
        }
    ] call CBA_fnc_addEventHandlerArgs;
};

_modifiableItems