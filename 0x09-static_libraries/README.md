# Static Libraries

**Library** is a collection of objects that are maded available for use by other programs. It means that the code in the librabry can be *reused*.

However, a **Static Library** contains external functions and variables which are resolved in a caller at compile-time and copied into a target application by a compiler or a linker, producing an object file and a stand-alone executable.

> This means that if a certain function in the static library has been updated, then you will have to recompile the function again so that the changes can effect in the library.

![creating a Static Library](https://slideplayer.com/slide/8253259/33/images/17/Creating+Static+Libraries.jpg)

While creating a static library, we use `ar cr libfilename.a filename.o` as;

| `ar` | means an archive |
| ----------- | ----------- |
| `cr` | create an archive |
| libfilename.a | the library name start with lib....a and ends with .a |
| filename.o | the object file got from assembling .c files |

### Compiling a program that uses the Static Library
`gcc -std=gnu89 main.c -L. -lmy -o quote `

> In the above command, we are compiling `main.c` file that is using some functions in the static Library. The option `-L.` tells the Linker to look for the library in the current directory. `-lmy` tells the linker to link a library called `libmy.a`. The the executable, which is the output specified by the option `-o` will be called `quote`.

### Other commands used while working with static libraries

| command | function |
| ----------- | ----------- |
| `ranlib` | creates index on an archive |
| `ld` | combines a number of objects and archive files, relocate their data and ties up symbol reference |
| `nm` | list symbols from object files |
| `ar t libmylib.a` | tables the contents of a static library called `mylib.a` |

### Creating a script that creates a static library called liball.a with all .c files in the current dir

```
#!/bin/bash
gcc -c *.c
ar cr liball.a *.o
```

In this script, we are compiling all the files with a `.c` extension up to the assembly stage where we get object files with `.o` extension. These object files are required to create the static library. We are then creating a static librarycalled `liball.a`.

[^1]: In windows a static library has the estension `.lib` while on linux is `.a`.

