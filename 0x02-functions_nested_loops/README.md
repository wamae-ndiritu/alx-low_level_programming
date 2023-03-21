# Functions & Nested loops

[0. _putchar](./0-putchar.c) - A simple program to print the string `_putchar`.

[1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./1-alphabet.c) - In this task, we are using a custom function called `_putchar` to print alphabets in lowercase. The task shows us how to create custom header files that references your custom functions that can be used in different source files. Function protoype such as `void print_alphabet(void);` is defined in the header files and included with `#include "main.h"` in the implementation file assuming the prototypes has been defined in a header file called `main.h`.

[2. 10 x alphabet](./2-print_alphabet_x10.c) - In this task, we are printing the set of alphabets 10 times. `_putchar()` which has been customly defined is used. It is alo worth noting that after every set of alphabets; `a-z` we have to reset the value of `a` to faciltate the next iterations

[3. islower](./3-islower.c) - To check wheteher a character is in lowercase, we can use `islower()` function found in the standard library. We are using this function to create a custom function that checks for lowercase character using this `islower()` which is refereced in the `ctype.h` header file.

[4. isalpha](./4-isalpha.c) - To check whether a character is an alphabet, the standard library has a function called `isalpha()`. In this task, we are making use of this function to create a function called `_isalpha()` that checks whether the character passed as the argument is a character or not.

[5. Sign](./5-sign.c) - In this task, we are checking the sign of a number. If the number is greater than 0, then its sign is `+`, else if the number is less than 0, it's sign is `-` and if it is equal to zero, its `0`. The function performing this is called `print_sign()`.

[6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](./6-abs.c) - The absolute value of a number can be given by the function `abs()` in the standard library `stdlib.h` header file. However, we want to create a function that uses this function to get the absolute values. The function is called `int _abs()`.

[7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](./7-print_last_digit.c) - To get the last digit of a number, we can use the modulus `%` operator. We will create a function that returns this las digit, called `print_last_digit()`.


