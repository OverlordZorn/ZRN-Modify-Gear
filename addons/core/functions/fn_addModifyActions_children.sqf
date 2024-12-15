#include "../script_component.hpp"

/*
* Author: Zorn
* Function to create the sub-children for each modifiable item
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
_actionParams params ["_modifiableItem"];

systemChat format ['[CVO](debug)(fn_addModifyActions_children) _target: %1 - _player: %2 - _modifiableItem: %3', _target , _player ,_modifiableItem];

private _cfg = [_modifiableItem] call CBA_fnc_getItemConfig;

private _newItems = [_cfg >> QPVAR(modifiableTo)] call BIS_fnc_getCfgDataArray;

private _actions = [];

{
    private _targetItem = _x;
    private _cfg = [_targetItem] call CBA_fnc_getItemConfig;

    
    private _params = [_modifiableItem, _targetItem];


    private _aceAction = [
        _targetItem                        // * 0: Action name <STRING>
        ,getText (_cfg >> "displayName")        //  * 1: Name of the action shown in the menu <STRING>
        ,getText (_cfg >> "picture")            //  * 2: Icon <STRING> "\A3\ui_f\data\igui\cfg\simpleTasks\types\backpack_ca.paa"
        ,FUNC(replace)                          //  * 3: Statement <CODE>
        ,{true}                                 //  * 4: Condition <CODE>
        ,{}                                   //  * 5: Insert children code <CODE> (Optional)
        ,_params                              //  * 6: Action parameters <ANY> (Optional)
    //    ,[0,0,0]                              //  * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
    //    ,20                                   //  * 8: Distance <NUMBER> (Optional)
    //    ,[false,false,false,false,false]      //  * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
    //    ,{}                                   //  * 10: Modifier function <CODE> (Optional)
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_aceAction, [], _target];
    
} forEach _newItems;

_actions