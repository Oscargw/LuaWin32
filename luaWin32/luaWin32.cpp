// luaWin32.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>

extern "C"
{
    #include <lua.h>
    #include <lualib.h>
    #include <lauxlib.h>
}

int main()
{
    std::cout << "Hello World!\n";

    lua_State* L = luaL_newstate();
    luaL_openlibs(L);

    // luaL_dostring(L, "print('hello lua !!')");
    luaL_dofile(L, "../lua/main.lua");

    lua_close(L);


    std::cout << "\nBye Bye !!\n";

    system("pause");

    return 0;
}
