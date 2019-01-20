#define LUA_LIB
#define LUA __declspec(dllexport) int __cdecl

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"


static int isquare(lua_State *L) {              /* Internal name of func */
	float rtrn = luaL_checknumber(L, -1);      /* Get the single number arg */
	printf("square() from C, nbr=%f\n", rtrn);
	lua_pushnumber(L, rtrn*rtrn);           /* Push the return */
	return 1;                              /* One return value */
}

static const luaL_Reg mathlib_reg[] = {
	{"square", isquare},
	{NULL, NULL}
};

LUA luaopen_mathlib(lua_State *L) {
	luaL_register(L, "mathlib", mathlib_reg);
	return 0;
}
