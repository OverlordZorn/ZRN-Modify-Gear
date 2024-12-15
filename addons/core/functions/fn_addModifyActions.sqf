#include "../script_component.hpp"

/*
* Author: Zorn
* This function creates children for every modifiable Item.
* Each Modifiable Item will have its own children in regard of the items it can be changed towards.
*
* Arguments:
*
* Return Value:
* None
*
* Example:
* ['something', player] call cvo_fnc_sth
*
* Public: Yes
*/

params ["_unit"];


private _modifiableItems = [_unit] call FUNC(getModifiableItems);


private _actions = [];

{
    private _params = [_x];
    private _children = {
        params ["_target", "_player", "_actionParams"];
        _actionParams params [""];
        /* insert subchildren class here later here */
        []
    };
    
    private _cfg = [_x] call CBA_fnc_getItemConfig;

    private _aceAction = [
        _x                                      // * 0: Action name <STRING>
        ,getText (_cfg >> "displayName")        //  * 1: Name of the action shown in the menu <STRING>
        ,getText (_cfg >> "picture")            //  * 2: Icon <STRING> "\A3\ui_f\data\igui\cfg\simpleTasks\types\backpack_ca.paa"
        ,{hint "yoloChild"}                     //  * 3: Statement <CODE>
        ,{true}                                 //  * 4: Condition <CODE>
        ,FUNC(addModifyActions_children)        //  * 5: Insert children code <CODE> (Optional)
        ,_params                              //  * 6: Action parameters <ANY> (Optional)
    //    ,[0,0,0]                              //  * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
    //    ,20                                   //  * 8: Distance <NUMBER> (Optional)
    //    ,[false,false,false,false,false]      //  * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
    //    ,{}                                   //  * 10: Modifier function <CODE> (Optional)
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_aceAction, [], _target];

} forEach _modifiableItems;


_actions