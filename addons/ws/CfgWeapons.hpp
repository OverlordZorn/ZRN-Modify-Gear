class CfgWeapons
{
    class H_Shemag_khk;

    class lxWS_H_turban_01_black : H_Shemag_khk
    {
        PVAR(modifiableTo)[] = { "lxWS_H_turban_02_black", "lxWS_H_turban_03_black", "lxWS_H_turban_04_black" };
    };
    class lxWS_H_turban_02_black : lxWS_H_turban_01_black
    {
        PVAR(modifiableTo)[] = { "lxWS_H_turban_01_black", "lxWS_H_turban_03_black", "lxWS_H_turban_04_black" };        
    };
    class lxWS_H_turban_03_black : lxWS_H_turban_01_black
    {
        PVAR(modifiableTo)[] = { "lxWS_H_turban_01_black", "lxWS_H_turban_02_black", "lxWS_H_turban_04_black" };
    };
    class lxWS_H_turban_04_black : lxWS_H_turban_01_black
    {
        PVAR(modifiableTo)[] = { "lxWS_H_turban_01_black", "lxWS_H_turban_02_black", "lxWS_H_turban_03_black" };
    };
};

