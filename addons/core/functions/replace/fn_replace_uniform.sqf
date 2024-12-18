#include "../../script_component.hpp"

/*
* Author: Zorn
* Function to replace a persons Uniform while maintaining the content of the uniform.
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

ZRN_LOG_MSG_1(init,_this);

params ["_player", "_cfg_origin", "_cfg_tgt"];

// [player, "acex_intelitems_notepad", "Notes!"] call ace_intelitems_fnc_addIntel

private _uniform_container = uniformContainer _player;

private _currentUniform = uniformContainer _unit;
private _uniformItems = getItemCargo _currentUniform;
private _uniformMagazines = getMagazineCargo _currentUniform;