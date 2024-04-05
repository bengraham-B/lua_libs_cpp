#ifndef SUBTRACTION.H
#define SUBTRACTION.H

#include <lua.hpp>


int subtract(lua_State* L){
    int a = lua_tointeger(L, 1);
    int b = lua_tointeger(L, 2);

    // perform subtractio logic
    int result = a- b;


    //Push result onto Lua Stack
    lua_pushinteger(L, result);

    return 1;
}

#endif
