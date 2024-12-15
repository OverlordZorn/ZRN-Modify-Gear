#include "../script_component.hpp"

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
_actionParams params ["_modifiableItem", "_replacementItem"];

_str = format ['[CVO](debug)(fn_replace) _target: %1 - _player: %2 - _modifiableItem: %3 - _replacementItem: %4', _target , _player ,_modifiableItem , _replacementItem];
diag_log _str;
systemChat _str;