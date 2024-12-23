// CfgWeapons

// Macros
#define CN(color) H_HelmetHeavy_##color##_RF
#define CN_VU(color) H_HelmetHeavy_VisorUp_##color##_RF


#define HELMET_VARIANT(color)\
class CN(color): H_HelmetHeavy_Black_RF            { class PVAR(wardrobe) : EGVAR(wardrobe,base_H_visor_down) { modifiableTo[] = { Q(CN_VU(color)) }; }; };\
class CN_VU(color): H_HelmetHeavy_VisorUp_Black_RF { class PVAR(wardrobe) : EGVAR(wardrobe,base_H_visor_up)   { modifiableTo[] = { Q(CN(color))    }; }; };\


// Base Classes
class H_HelmetAggressor_F;

class H_HelmetHeavy_Black_RF         : H_HelmetAggressor_F    { class PVAR(wardrobe) : EGVAR(wardrobe,base_H_visor_down) { modifiableTo[] = { "H_HelmetHeavy_VisorUp_Black_RF" }; }; };
class H_HelmetHeavy_VisorUp_Black_RF : H_HelmetHeavy_Black_RF { class PVAR(wardrobe) : EGVAR(wardrobe,base_H_visor_up)   { modifiableTo[] = { "H_HelmetHeavy_Black_RF"         }; }; };


gm_ge_bgs_headgear_psh77_cover_down_str
gm_ge_bgs_headgear_psh77_cover_down_smp
gm_ge_headgear_psh77_down_oli

gm_ge_bgs_headgear_psh77_cover_up_str
gm_ge_bgs_headgear_psh77_cover_up_smp
gm_ge_headgear_psh77_up_oli

