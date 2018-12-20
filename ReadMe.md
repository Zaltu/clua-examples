# Lua - C++ Interaction Examples
This repo contains a number of simple examples of Lua and C interacting with each other. They are only examples to be consulted and are not by any means production ready code. There is no memory leak prevention or error handling in place.

The repo also includes the VSCode configuration for properly compiling the C++ in a Linux environment with g++ available.

### Run Lua File in C
Execute a Lua file through C++. Mean to be equivalent to `lua myfile.lua`.

### Lua Interpreter in C
Wrap a Lua interpreter in C++. Roughly equivalent to `lua`.

### Call Lua Function in C
Execute a Lua funtion in C++. This equates to making a Lua function available in a C++ environmnt.

### Call C Function in Lua
Execute a C++ function in Lua. This equates to making a C function available in a Lua environment *during runtime*.

### Make C Library for Lua
Unfinished and untested, but suppose be able to generate a DLL or SO from the C++ code that can be included in the Lua CPATH as an external library.


# Requires
Environment built and tested in:
- Lua 5.1.4
- lua-devel 5.1.4
- gcc 4.8.5
