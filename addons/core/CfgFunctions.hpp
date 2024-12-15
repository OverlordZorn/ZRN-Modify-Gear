class CfgFunctions
{
    class ADDON
    {
        class COMPONENT
        {

            file = PATH_TO_FUNC;

            
            class getItems {};
            class getModifiableItems {};


            class replace {};

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