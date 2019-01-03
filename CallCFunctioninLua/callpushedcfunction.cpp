#include <stdio.h>
#include <string.h>
#include <iostream>
extern "C"{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

static int printathing(lua_State *L){
    std::cout << "Hello C World" << std::endl;
    return 0;
}

int main() {
    lua_State *L = lua_open();
    luaL_openlibs(L);
    lua_pushcfunction(L, printathing);
    lua_setglobal(L, "chi");
    luaL_loadfile(L, "callcfunction.lua") || lua_pcall(L, 0, 0, 0);
    lua_close(L);
}
