#define ADDON tu_platform
#define FUNC(x) ADDON##_fnc_##x
#define GVAR(x) ADDON##_##x

#define Q(x) #x
#define QFUNC(x) Q(FUNC(x))
#define QGVAR(x) Q(GVAR(x))

#define PATHCOMBINE2(x,y) x##\##y
#define PATHCOMBINE3(x,y,z) x##\##y##\##z

#define FILE(x) PATHCOMBINE2(ADDON,x)
#define PATH(x) 'FILE(x)'

#define FILE2(x,y) PATHCOMBINE3(ADDON,x,y)
#define PATH2(x,y) 'FILE2(x,y)'

#define CALL(x) call compile preprocessFileLineNumbers PATH(x)
#define CALL2(x,y) call compile preprocessFileLineNumbers PATH2(x,y)
#define EXEC(x) execVM FILE(x)
#define EXEC2(x,y) execVM FILE2(x,y)

#define ACE(x) ace_##x
#define ACEVAR(addon,x) ACE(addon)_##x
#define ACEFUNC(addon,x) ACE(addon)_fnc_##x
#define QACEVAR(addon,x) Q(ACEVAR(addon,x))
#define QACEFUNC(addon,x) Q(ACEFUNC(addon,x))


#define ACEFILE(addon,x) z\ace\addons\PATHCOMBINE2(addon,x)
#define ACEPATH(addon,x) 'ACEFILE(addon,x)'