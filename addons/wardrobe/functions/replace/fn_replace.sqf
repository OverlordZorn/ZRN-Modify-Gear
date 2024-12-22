#include "../../script_component.hpp"

/*
* Author: Zorn
* function to removes the modifiableItem and replaces it with the target item
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

params ["_target", "_player", "_actionParams"];
_actionParams params ["_cfg_origin", "_cfg_tgt"];

[_player, "Gear"] call ace_common_fnc_doGesture;

private _typeNumber = getNumber (_cfg_origin >> "ItemInfo" >> "type");

private _additionalParams = "";

private _replaceCode = switch ( _typeNumber ) do {
    case TYPE_GOGGLE:   {                                 FUNC(replace_facewear) };
    case TYPE_HEADGEAR: {                                 FUNC(replace_headgear) };
    case TYPE_UNIFORM:  { _additionalParams = "UNIFORM";  FUNC(replace_uniform)  };
    case TYPE_VEST:     { _additionalParams = "VEST";     FUNC(replace_uniform)  };
    case TYPE_BACKPACK: { _additionalParams = "BACKPACK"; FUNC(replace_uniform)  };
};

[_replaceCode, [_player, _cfg_origin, _cfg_tgt, _additionalParams ], 0.8] call CBA_fnc_waitAndExecute;


// Plays Random Sound
private _sound = [_cfg_tgt >> Q(ADDON) >> "sound"] call FUNC(getCfgDataRandom);
[QGVAR(EH_say3d), [_player, _sound]] call CBA_fnc_globalEvent;


// Dart made a PR to CBA to impove depricated Functions. I plan to use these once cba gets updated.
// [ [ _player ], [ _sound, 50 ] ] call CBA_fnc_globalSay;


// Display 
private _img = getText (_cfg_tgt >> "picture");
if !(".paa" in _img) then { _img = [_img,"paa"] joinString "." };
[
    CBA_fnc_notify,
    [
        [ _img, 4 ],
        [ getText (_cfg_tgt >> "displayName") ],
        true
    ],
    1
] call CBA_fnc_waitAndExecute;

