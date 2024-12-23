class vn_o_uniform_base;

#define UNIFORM_BASE_O(class1,class2)\
class class1: vn_o_uniform_base { class PVAR(wardrobe) : EGVAR(wardrobe,base_U_sleeves_down) { modifiableTo[] = { Q(class2) }; }; };\
class class2: vn_o_uniform_base { class PVAR(wardrobe) : EGVAR(wardrobe,base_U_sleeves_up) { modifiableTo[] = { Q(class1) }; }; };\

// OPFOR

// NVA Sailors
UNIFORM_BASE_O(vn_o_uniform_nva_navy_01,vn_o_uniform_nva_navy_03)
UNIFORM_BASE_O(vn_o_uniform_nva_navy_02,vn_o_uniform_nva_navy_04)

// NVA_Army_AA_BB
// brown: 01,02 03,04 | GREEN: 01..12
#define BROWN 01
#define BROWN_FIELD 02
#define GREEN 03
#define GREEN_FIELD 04
#define O_U_NVA_ARMY(var,camo) vn_o_uniform_nva_army_##var##_##camo
#define O_U_NVA_ARMY_PAIR(down,up,camo) UNIFORM_BASE_O(O_U_NVA_ARMY(down,camo),O_U_NVA_ARMY(up,camo))
O_U_NVA_ARMY_PAIR(01,02,BROWN)
O_U_NVA_ARMY_PAIR(03,04,BROWN)
O_U_NVA_ARMY_PAIR(01,02,BROWN_FIELD)
O_U_NVA_ARMY_PAIR(03,04,BROWN_FIELD)

O_U_NVA_ARMY_PAIR(01,02,GREEN)
O_U_NVA_ARMY_PAIR(03,04,GREEN)
O_U_NVA_ARMY_PAIR(05,06,GREEN)
O_U_NVA_ARMY_PAIR(07,08,GREEN)
O_U_NVA_ARMY_PAIR(09,10,GREEN)
O_U_NVA_ARMY_PAIR(11,12,GREEN)
O_U_NVA_ARMY_PAIR(01,02,GREEN_FIELD)
O_U_NVA_ARMY_PAIR(03,04,GREEN_FIELD)
O_U_NVA_ARMY_PAIR(05,06,GREEN_FIELD)
O_U_NVA_ARMY_PAIR(07,08,GREEN_FIELD)
O_U_NVA_ARMY_PAIR(09,10,GREEN_FIELD)
O_U_NVA_ARMY_PAIR(11,12,GREEN_FIELD)

// PL ARMY
#define DARK 11
#define DARK_FIELD 12
#define LIGHT 13
#define LIGHT_FIELD 14
#define O_U_PL_ARMY(var,camo) vn_o_uniform_pl_army_##var##_##camo
#define O_U_PL_ARMY_PAIR(down,up,camo) UNIFORM_BASE_O(O_U_PL_ARMY(down,camo),O_U_PL_ARMY(up,camo))

O_U_PL_ARMY_PAIR(01,02,DARK)
O_U_PL_ARMY_PAIR(03,04,DARK)
O_U_PL_ARMY_PAIR(01,02,DARK_FIELD)
O_U_PL_ARMY_PAIR(03,04,DARK_FIELD)
O_U_PL_ARMY_PAIR(01,02,LIGHT)
O_U_PL_ARMY_PAIR(03,04,LIGHT)
O_U_PL_ARMY_PAIR(01,02,LIGHT_FIELD)
O_U_PL_ARMY_PAIR(03,04,LIGHT_FIELD)


#define O_U(div,var,camo) vn_o_uniform_##div##_##var##_##camo
#define O_U_PAIR(div,down,up,camo) UNIFORM_BASE_O(O_U(div,down,camo),O_U(div,up,camo))
// VC MF
#define VC_MF 07
O_U_PAIR(vc_mf,01,02,VC_MF)
O_U_PAIR(vc_mf,03,04,VC_MF)
O_U_PAIR(vc_mf,09,10,VC_MF)
O_U_PAIR(vc_mf,11,12,VC_MF)

// VC REG
O_U_PAIR(vc_reg,11,12,08)
O_U_PAIR(vc_reg,11,12,09)
O_U_PAIR(vc_reg,11,12,10)

// VC BLACK 01 BLACK_WHITE 02 GREY_TAN 03 BLUE 04 WHITE_BLACK 05 BLUE_WHITE 06 BLUE_GREY 07
O_U_PAIR(vc,01,02,01)
O_U_PAIR(vc,03,04,01)
O_U_PAIR(vc,01,02,02)
O_U_PAIR(vc,03,04,02)
O_U_PAIR(vc,01,02,03)
O_U_PAIR(vc,03,04,03)
O_U_PAIR(vc,01,02,04)
O_U_PAIR(vc,03,04,04)
O_U_PAIR(vc,01,02,05)
O_U_PAIR(vc,03,04,05)
O_U_PAIR(vc,01,02,06)
O_U_PAIR(vc,03,04,06)
O_U_PAIR(vc,01,02,07)
O_U_PAIR(vc,03,04,07)
