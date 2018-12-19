#include <stdio.h>
#include <string.h>
extern "C"{
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

int main() {
    lua_State *L = lua_open();
    luaL_openlibs(L);
    luaL_loadfile(L, "runluafile.lua") || lua_pcall(L, 0, 0, 0);
    lua_close(L);
}