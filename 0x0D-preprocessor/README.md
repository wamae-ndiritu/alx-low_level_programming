# C - Preprocessor

[0. Object-like Macro](./0-object_like_macro.h) - Creating a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.


[1. Pi](./1-pi.h) - Creating a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.


[2. File name](./2-main.c) - Creating a program that prints the name of the fiule it was compiled form, followed by a new line.
- You are allowed to use the standard library.
> The predefined Macro `__BASE_FILE__` can help us in this task.



[3. Function-like macro](./3-function_like_macro.h) - Creating a function_like macro `ABS(x)` that computes the absolute value of a number `x`.
> If the number is negative, we multiply it with `-` to make it positive. If the number is positive, we will just return the number as it is. The function_like macro use a **ternary operator**.


[4. SUM](./4-sum.h) - Creating a function_like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.


