class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Test_action {
                    displayName = CSTRING(modify); // Text shown to user
                    icon = "";
                    condition = Q([_player] call FUNC(condition));
                    statement = "";
                    insertChildren = Q([_player] call FUNC(addModifyActions));
                    exceptions[] = {"isNotSwimming","isNotInside","notOnMap","isNotSitting"};
                };
            };
        };
    };
};
