class GVAR(base) 
{
    modifiableTo[] = {""};

    // WIP
    modifiableToWithDependency = "";
    dependency = "";

    // Supports Multiple Sounds, will pick one by random.
    sound[] = {"click"}; // I need a better default Sound
    soundEnd[] = {""};

    // Gesture
    gesture = "Gear";

    // These will be read from the Target Class, so for example, the uniformclass with the rolled up sleaves, it should say "Roll Up Sleves"
    alternativePicture = "";
    alternativeDisplayName = "";

    duration = 1; // Minimum Value: 1 - Anything above will produce a progressbar.
};

// Common Base Class for Uniforms with Sleeves Up/Down Variants
class GVAR(base_U_sleeves_up) : GVAR(base) { alternativeDisplayName = CSTRING(sleevesUp); duration = 3; };
class GVAR(base_U_sleeves_down) : GVAR(base) { alternativeDisplayName = CSTRING(sleevesDown); duration = 3; };


// Common Base Class for Uniforms who are open/closed in the front
class GVAR(base_U_jacket_open) : GVAR(base) { alternativeDisplayName = CSTRING(jacketOpen); };
class GVAR(base_U_jacket_closed) : GVAR(base) { alternativeDisplayName = CSTRING(jacketClose); };


// Common Base Class for Helmets with a Visor that can be flipped up or down
class GVAR(base_H_visor_up)   : GVAR(base) { gesture ="gestureNod"; sound[] = {""}; soundEnd[] = {"click"}; alternativeDisplayName = CSTRING(visorUp); };
class GVAR(base_H_visor_down) : GVAR(base) { gesture ="gestureNod"; sound[] = {""}; soundEnd[] = {"click"}; alternativeDisplayName = CSTRING(visorDown); };