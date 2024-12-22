#include "../script_component.hpp"

/*
* Author: Zorn
* Function to execute say3d globally - triggered as 3cba event.
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

#define RADIUS 50

params [
    ["_source",     objNull,    [objNull]   ],
    ["_sound",      "",         [""]        ]
];

_source say3D [_sound, RADIUS];