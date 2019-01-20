
A simple example for calling C from lua 5.1 using Visual Studio

Simply build the project and move the generated .dll file to the directory of your lua executable.

Be sure that lua5.1.lib is added as an additional dependency  

Lua:
```
require('mathlib')
print(mathlib.square(3))
```
