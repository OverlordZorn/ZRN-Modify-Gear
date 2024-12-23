// CfgWeapons

// Variations
// 01 sides up 02 normal 03 front up 04 l side up 05 r side up
// 06-08 anzac
// 09 rebel - not compatible
//Colors
// 01 green 02 tiger 03 black 04 spray 05 tiger green 06 erdl brown 07 leopard 08 erdl
// 09 gray <- Fuck this - inheritance is fucking horrible as fuck.

// Macros
#define CN(variantion,color) vn_b_boonie_##variation##_##color

// Base Boonie
#define CLR 01
class CN(02,CLR) : vn_b_headgear_base  { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

/*
#define CLR 02
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 03
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 04
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 05
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 06
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 07
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 08
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR

#define CLR 08
class CN(01,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(02,CLR) : CN(02,01)           { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(03,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(04,CLR)), Q(CN(05,CLR)) }; }; };
class CN(04,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(05,CLR)) }; }; };
class CN(05,CLR) : CN(02,CLR)          { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CN(01,CLR)), Q(CN(02,CLR)), Q(CN(03,CLR)), Q(CN(04,CLR)) }; }; };
#undef CLR


// Base classes in CfgWeapons.hpp
// 06-08 anzac
#define CN(variant,color) vn_b_boonie_06_##color
#define CN(variant,color) vn_b_boonie_07_##color
#define CN(variant,color) vn_b_boonie_08_##color

#define BOONIE_ANZAC(variant)
class CV06(variant) : CV02(01)      { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CV07(variant)), Q(CV08(variant)) }; }; };
class CV07(variant) : CV06(variant) { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CV06(variant)), Q(CV08(variant)) }; }; };
class CV08(variant) : CV06(variant) { class PVAR(wardrobe) : EGVAR(wardrobe,base) { modifiableTo[] = { Q(CV06(variant)), Q(CV07(variant)) }; }; };

BOONIE_ANZAC(01)
BOONIE_ANZAC(02)

*/