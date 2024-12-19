class CfgFunctions
{
    class ADDON
    {
        class COMPONENT
        {
            file = PATH_TO_FUNC;

            class clearOnClose {};
            class checkItem {};
        };

        class ace_intel
        {
            file = PATH_TO_FUNC_SUB(ace_intel);
            class getMagIDs {};
            class getIndexFromMagID {};
            class setIndexForMagID {};
        };

        class getItems
        {
            file = PATH_TO_FUNC_SUB(getItems);
            class getItems_all {};
            class getItems_modifiable_all {};
            class getItems_modifiable_current {};
            
        };

        class replace
        {
            file = PATH_TO_FUNC_SUB(replace);

            class replace {};
            class replace_headgear {};
            class replace_facewear {};
            class replace_uniform  {};
        };

        class action
        {
            file = PATH_TO_FUNC_SUB(action);

            class addModifyActions {};
            class addModifyActions_condition {};
            class addModifyActions_children {};
        };

        class cache
        {
            file = PATH_TO_FUNC_SUB(cache);

            class cache_db {};

            class cache_get {};
            class cache_set {};

            class cache_clear {};
        };
    };
};