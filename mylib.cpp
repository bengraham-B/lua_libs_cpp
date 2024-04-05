
#include <lua.hpp>
#include "subtraction.h"
#include "multiply.h"
#include "divide.h"

// C++ function definition
int add(lua_State* L) {
    // Retrieve the arguments from Lua stack
    int a = lua_tointeger(L, 1);
    int b = lua_tointeger(L, 2);
    
    // Perform addition
    int sum = a + b;
    
    // Push the result onto the Lua stack
    lua_pushinteger(L, sum);
    
    // Indicate to Lua that there is one return value
    return 1;
}

// Function to open the library
extern "C" int luaopen_mylib(lua_State* L) {
    // Define the functions available to Lua
    static const luaL_Reg mylib[] = {
        {"add", add},
        {"subtract", subtract},
        {"multiply", multiply},
        {"divide", divide},
        {NULL, NULL} // Sentinel
    };

    luaL_newlib(L, mylib); // Create a Lua table with the functions
    return 1;
}
