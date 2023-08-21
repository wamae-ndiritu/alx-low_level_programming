# Dynamic Libraries & Linking

![Dynamic Libraries](https://miro.medium.com/v2/resize:fit:1074/1*QI-LJC2bVLwDMT9VTpnjtg.png)

In dynamic library, which is as a result of `Dynamic Linking`, the executable file only contains the address of the functions where they are loaded in memory.

This therefore makes the size of the final executable file to be relatively small.

Also, if there are updates made to the for a dynamic library, there may be no need to recompile the whole program as the final executable only holds the addresses and not the whole object code.

### Dynamic Libraries

> In windows, a dynamic library has the extension `.dll` (dynamic link library) and on `linux` it's a `.so` meaning a shared object.

### Creating Dynamic Library

#### Code compilation
	
`gcc -c -fPIC library.c -o library.o`
> The code is first compiled to an object file. The `-fPIC` flag refers to `Position Independent Code` and is necessary for a shared object.

#### Creating a shared object

`gcc -shared -o library.so library.o`

