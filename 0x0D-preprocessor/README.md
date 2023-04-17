# C - Preprocessor

![preprocessor_directives](https://www.examtray.com/sites/default/files/styles/image_800_x_400_/public/2019-05/c-preprocessor-directives-tutorial.jpg?itok=9kpBwWFW)

### Preprocessing

> This invloves the process of removing any comment from the source code file, and expanding all headers files and macros.
> Preprocessors have the following main use cases;
- processing *directives* - directives tells the preprocessor to skip a part of a file, include another one, or define a constant
- procesing *macros or constants* - macros are used to abreviate a certain token or a constant.

#### Some of the directives in C

1. `#include` - this directive tells the preprocessor to grab the text of a particular file and place in to the current file.
2. `#define` - used to define a macro

### Object_like Macros

> This are identifiers which are replaced by a code fragment. They are commoly used to give symbolic names to constants.

### Example definition of a Object_like Macro

```#define MAX_NO_OF_PEOPLE 100
```
> The above line defines a macro named `MAX_NO_OF_PEOPLE` that abbreviates the token `100`.

### Macro Arguments in function_like Macros

> Function_like macros - macros that are written to behave as if they are a function, can do take arguments. Let's see an example;
```#define ABS(x) ((x) < 0 ? -(x) : (x))
```
> The above defines a macro that takes an argument, and returns its absolute value. To do this, we are checking whether the argument passed to the parameter is less than 0. If thats the case, then we need to return the argument multiplied by -1 to get it absolute value. If else the argument is greater than 0, we rae return the argument as it is. This function_like macro use the **ternary operator** `?...:...`.

### Include guards

> Any header file should only be include once. However, this is not always the case. Since the header file may be required in multiple other header files that are already included into the source code file, the different codes for functions, variables structs, classes etc, may appear to be defined multiple times. This can result to issues with the compile-time, and therefore, to ensure that the header file is only included once, the preprocessor provides `#ifndef` directive. This only allows you to include a block of code text only if it is undefined, only after defining it in the header file. This ensures that the code in the `#ifndef` is included only the first time the file is loaded.

```#ifndef _FILE_NAME_H_
	#define _FILE_NAME_H_



#endif
```
> Generally, *include guards* helps avoid the problem of double incluion when dealing with the include directive.

### Project Taks

[0. Object-like Macro](./0-object_like_macro.h) - Creating a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.


[1. Pi](./1-pi.h) - Creating a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.


[2. File name](./2-main.c) - Creating a program that prints the name of the file it was compiled form, followed by a new line.
- You are allowed to use the standard library.
> The predefined Macro `__BASE_FILE__` can help us in this task.



[3. Function-like macro](./3-function_like_macro.h) - Creating a function_like macro `ABS(x)` that computes the absolute value of a number `x`.
> If the number is negative, we multiply it with `-` to make it positive. If the number is positive, we will just return the number as it is. The function_like macro use a **ternary operator**.


[4. SUM](./4-sum.h) - Creating a function_like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### Some of Standard & Common used Predefined Macros
| Macro | desription & function |
| ----------- | ----------- |
| `__FILE__` | expands to the name of current input file as a string. |
| `__LINE__` | expands to the current input line number, in form of a decimal integer constant |
| `__BASE_FILE__` | expands to the name of the main input file compiled from |
| `__VERSION__` | expands to a string describing the version of the compiler in use |
| `__DATE__` | expands to a string describing the date on which the preprocessor is being run |


