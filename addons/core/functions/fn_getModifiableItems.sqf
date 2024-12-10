#include "../script_component.hpp"

/*
* Author: Zorn
* Function to retrieve modifiable items. Maybe inplement some caching later?
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
    private _items = flatten getUnitLoadout _player select { _x isEqualType "" && { _x != ""}};
    {
        private _cfg = [_x] call CBA_fnc_getItemConfig;
        // array
        private _return = [_cfg >> QGVAR(modifiableTo)] call BIS_fnc_getCfgDataArray;
        if (count _return > 0) then { _modifiableItems pushBack _x; };
    
    } forEach _items;
    _player setVariable [QGVAR(modifiable_items_cache), _modifiableItems];
    missionNamespace setVariable [QGVAR(eh_id), _eh_id];

    // Cleanup Cache once the interaction menu is closed
    private _eh_id = ["ace_interactMenuClosed", {
        if (_this isNotEqualTo [1]) exitWith {};
        ["ace_interactMenuClosed", missionNamespace getVariable [QGVAR(eh_id), "404"]] call CBA_fnc_removeEventHandler;
        missionNamespace setVariable [QGVAR(eh_id),nil];
        missionNamespace setVariable [QGVAR(modifiable_items_cache),nil];
    }] call CBA_fnc_addEventHandler;

};
_modifiableItems
