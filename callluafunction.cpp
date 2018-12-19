#include <stdio.h>
#include <iostream>
#include <string.h>
extern "C"{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}
using namespace std;
int main() {
    lua_State *L = lua_open();
    luaL_openlibs(L);
    luaL_loadfile(L, "callluafunction.lua") || lua_pcall(L, 0, 0, 0);
    lua_getglobal(L, "okThisIsEpic");
    lua_pushstring(L, "Overwatch");
    lua_pushstring(L, "Paladins");
    lua_pcall(L, 2, 1, 0);
    std::cout << lua_tostring(L, -1) <<std::endl;
    lua_pop(L, 1);
    lua_close(L);
}