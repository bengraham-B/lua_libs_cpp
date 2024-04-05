#ifndef DIVIDE_H
#define DIVIDE_H

#include <lua.hpp>

int divide(lua_State* L){
    int a = lua_tointeger(L, 1);
    int b = lua_tointeger(L, 2);

    int result = a / b;

    lua_pushinteger(L, result);

    return 1;

}

#endif
