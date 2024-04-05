#ifndef FUNCTION.H
#define FUNCTION.H

#include <lua.hpp>
// c++ function to be called from Lua
int add (lua_State* L){
    int a = lua_tointeger(L, 1);
    int b = lua_tointeger(L, 2);

    // preform the addition logic
    int sum = a + b;

    // pushing the result onto the lua stack
    lua_pushinteger(L, sum);

    return 1; //Indicating to Lua that there is no return value
}

// function to open the libary 
extern "C" int luaopen_function(lua_State* L) {
    luaL_newlib(L, addition); //create a Lua table with the functions
    return 1;
}

#endif
