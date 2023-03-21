# Functions & Nested loops

[0. _putchar](./0-putchar.c) - A simple program to print the string `_putchar`.

[1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./1-alphabet.c) - In this task, we are using a custom function called `_putchar` to print alphabets in lowercase. The task shows us how to create custom header files that references your custom functions that can be used in different source files. Function protoype such as `void print_alphabet(void);` is defined in the header files and included with `#include "main.h"` in the implementation file assuming the prototypes has been defined in a header file called `main.h`.

[2. 10 x alphabet](./2-print_alphabet_x10.c) - In this task, we are printing the set of alphabets 10 times. `_putchar()` which has been customly defined is used. It is alo worth noting that after every set of alphabets; `a-z` we have to reset the value of `a` to faciltate the next iterations

[3. islower](./3-islower.c) - To check wheteher a character is in lowercase, we can use `islower()` function found in the standard library. We are using this function to create a custom function that checks for lowercase character using this `islower()` which is refereced in the `ctype.h` header file.

[4. isalpha](./4-isalpha.c) - To check whether a character is an alphabet, the standard library has a function called `isalpha()`. In this task, we are making use of this function to create a function called `_isalpha()` that checks whether the character passed as the argument is a character or not.
