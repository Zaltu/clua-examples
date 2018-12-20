#include <stdio.h>
#include <iostream>
#include <string.h>
extern "C"{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}
using namespace std;

static const struct luaL_reg hellib [] = {
    {"printFromC", printfromC},
    {NULL, NULL}  /* sentinel */
};

int main() {
    lua_State *L = lua_open();
    
}

int luaopen_hellib (lua_State *L) {
    luaL_openlib(L, "hell", hellib, 0);
    return 1;
  }

static int printfromC (lua_State *L) {
    lua_pushstring(L, "Hell-o C World")
    return 1;
  }