class ace_frag_base: B_65x39_Caseless
{
    timeToLive = 10;
    typicalSpeed = 1500;
    deflecting = 65;
    simulationStep = 0.01;
};
class ace_frag_tiny: ace_frag_base
{
    //hit = 3;
    //airFriction = -0.01;
};
class ace_frag_tiny_HD: ace_frag_base
{
    //hit = 3;
    //airFriction = "(-0.01*5)";
};
class ace_frag_small: ace_frag_base
{
    ///hit = 5;
};
class ace_frag_small_HD: ace_frag_base
{
    //hit = 5;
};
class ace_frag_medium: ace_frag_base
{
    //hit = 6;
};
class ace_frag_medium_HD: ace_frag_base
{
    //hit = 6.4;
};
class ace_frag_large: ace_frag_base
{
    //hit = 18.6;
};
class ace_frag_large_HD: ace_frag_large
{
    //hit = 18.6;
};
class ace_frag_huge: ace_frag_large
{
    //hit = 26.6;
};
class ace_frag_huge_HD: ace_frag_large
{
    //hit = 26.6;
};
