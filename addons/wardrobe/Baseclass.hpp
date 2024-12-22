class GVAR(base) 
{
    modifiableTo[] = {""};

    modifiableToWithDependency = "";
    dependency = "";

    // Supports Multiple Sounds, will pick one by random.
    // I need a better default Sound
    sound[] = {"click"};

    // These will be read from the Target Class, so for example, the uniformclass with the rolled up sleaves, it should say "Roll Up Sleves"
    alternativePicture = "";
    alternativeDisplayName = "";

    // class duration = 3; // Currently not in use. Maybe, when above 1, it will use an ace progressbar instead of the simple animation?
};

// Common Base Class for Uniforms with Sleeves Up/Down Variants
// TODO: Stringtable.XML
class GVAR(base_U_sleeves_up) : GVAR(base)
{
    alternativeDisplayName = "Roll sleeves Up";
};
class GVAR(base_U_sleeves_down) : GVAR(base)
{
    alternativeDisplayName = "Roll sleeves Down";
};
