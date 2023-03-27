# Pointers, Arrays & Strings

[0. 98 Battery st.](./0-reset_to_98.c) - Creating a function that takes a pointer to an int as parameter and updates the value it points to to 98. This is called `dereferncing` where we can manipulate the value of that the pointer points to.

[1. Don't swap horses in crossing a stream](./1-swap.c) - Creating a function that swaps the values of two integers. The values of the intergers are referenced by the pointers passed as the argument of the function. To swap them, we need to copy the value of one to another integer, then swap them, and finally update the last one to the copied value.

[2. This report, by its very length, defends itself against the risk of being read](./2-strlen.c) - Creating a function that returns the length of a string. This makes use of the `strlen()` function in the C Standard Library and defined in the `string.h` header file.

[3. I do not fear computers. I fear the lack of them](./3-puts.c) - Creating a function that prints a string, followed by a new line, to stdout. The function makes use of `puts()` function in the C Standard Library defined in the `stdio.h` header file. However, the function, only takes a single argument which is a pointer to a string. To print the new line, we had to use another custom function, `_putchar()` which makes use of the `putchar()` function.


