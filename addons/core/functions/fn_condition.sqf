#include "../script_component.hpp"

/*
* Author: Zorn
* Function to check if the player has an item that can be modified.
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

params ["_player"];

private _return = count ([_player] call FUNC(getModifiableItems)) > 0;
_return