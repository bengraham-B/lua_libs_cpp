#ifndef MULTIPLY_H
#define MULTIPLY_H

#include <lua.hpp>

int multiply(lua_State* L){
    int a = lua_tointeger(L, 1);
    int b = lua_tointeger(L, 2);

    int sum = a * b;

    lua_pushinteger(L, sum);

    return 1;
}


#endif
