class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(action) {
                    displayName = "Modify Gear"; // Text shown to user
                    condition = "[_player] call FUNC(condition);";
                    exceptions[] = {};
                    statement = "";
                    icon = "";
                    insertChildren = "[_player] call FUNC(createChildren);";
                };
            };
        };
    };
};
