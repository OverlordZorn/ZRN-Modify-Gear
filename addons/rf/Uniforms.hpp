class Uniform_Base;

// Macros
#define UNIFORM_BASE(class1,class2)\
class class1: Uniform_Base { PVAR(modifiableTo)[] = { Q(class2) }; };\
class class2: Uniform_Base { PVAR(modifiableTo)[] = { Q(class1) }; };\

// Simple Variants
UNIFORM_BASE(U_C_FirefighterFatigues_RF,U_C_FirefighterFatigues_RolledUp_RF)
UNIFORM_BASE(U_BG_Guerrilla_6_1,U_BG_Guerrilla_RF)


// Pilot Jackets
class U_C_PilotJacket_black_RF      : Uniform_Base             { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_open_black_RF) };   };
class U_C_PilotJacket_open_black_RF : U_C_PilotJacket_black_RF { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_black_RF) };        };

class U_C_PilotJacket_brown_RF      : U_C_PilotJacket_black_RF { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_open_brown_RF) };   };
class U_C_PilotJacket_open_brown_RF : U_C_PilotJacket_brown_RF { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_brown_RF) };        };

class U_C_PilotJacket_lbrown_RF      : U_C_PilotJacket_black_RF { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_open_lbrown_RF) }; };
class U_C_PilotJacket_open_lbrown_RF : U_C_PilotJacket_lbrown_RF { PVAR(modifiableTo)[] = { Q(U_C_PilotJacket_lbrown_RF) };     };
