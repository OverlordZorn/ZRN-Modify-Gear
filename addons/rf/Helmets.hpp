// Macros
#define CN(color) H_HelmetHeavy_##color##_RF
#define CN_VU(color) H_HelmetHeavy_VisorUp_##color##_RF


#define HELMET_VARIANT(color)\
class CN(color): H_HelmetHeavy_Black_RF            { class PVAR(wardrobe) : EGVAR(wardrobe,base) {modifiableTo)[] = { Q(CN(color)) }; }; };\
class CN_VU(color): H_HelmetHeavy_VisorUp_Black_RF { class PVAR(wardrobe) : EGVAR(wardrobe,base) {modifiableTo)[] = { Q(CN_VU(color)) }; }; };\


// Base Classes
class H_HelmetAggressor_F;
class H_HelmetHeavy_Black_RF         : H_HelmetAggressor_F    { class PVAR(wardrobe) : EGVAR(wardrobe,base) {modifiableTo)[] = { "H_HelmetAggressor_F" }};  };
class H_HelmetHeavy_VisorUp_Black_RF : H_HelmetHeavy_Black_RF { class PVAR(wardrobe) : EGVAR(wardrobe,base) {modifiableTo)[] = { "H_HelmetHeavy_Black_RF" }};  };


// Variants
HELMET_VARIANT(Hex)
HELMET_VARIANT(GHex)
HELMET_VARIANT(Sand)
HELMET_VARIANT(Olive)
HELMET_VARIANT(White)