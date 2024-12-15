class CfgWeapons
{
    #include "Turbans.hpp"


    // Cap (Ion) Forward and Reversed
    class lxWS_H_CapB_rvs_blk;
    class lxWS_H_CapB_rvs_blk_ION: lxWS_H_CapB_rvs_blk { PVAR(modifiableTo)[] = { "H_Cap_headphones_ion_lxws" }; };
    class H_Cap_headphones_ion_lxws: lxWS_H_CapB_rvs_blk_ION { PVAR(modifiableTo)[] = { "lxWS_H_CapB_rvs_blk_ION" }; };
};

