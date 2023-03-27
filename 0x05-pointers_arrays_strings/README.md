# Pointers, Arrays & Strings

[0. 98 Battery st.](./0-reset_to_98.c) - Creating a function that takes a pointer to an int as parameter and updates the value it points to to 98. This is called `dereferencing` where we can manipulate the value of that the pointer points to.

[1. Don't swap horses in crossing a stream](./1-swap.c) - Creating a function that swaps the values of two integers. The values of the intergers are referenced by the pointers passed as the argument of the function. To swap them, we need to copy the value of one to another integer, then swap them, and finally update the last one to the copied value.

[2. This report, by its very length, defends itself against the risk of being read](./2-strlen.c) - Creating a function that returns the length of a string. This makes use of the `strlen()` function in the C Standard Library and defined in the `string.h` header file.

[3. I do not fear computers. I fear the lack of them](./3-puts.c) - Creating a function that prints a string, followed by a new line, to stdout. The function makes use of `puts()` function in the C Standard Library defined in the `stdio.h` header file. However, the function, only takes a single argument which is a pointer to a string. To print the new line, we had to use another custom function, `_putchar()` which makes use of the `putchar()` function.

[4. I can only go one way. I've not got a reverse gear](./4-print_rev.c) - Creating a function to print a string, in reverse order, followed by a new line. To do this we need to loop through the string starting from the last character, as we go down. The last character can be got from the length of string you less one, as indexing starts from 0. We will keep on looping as long as the variable i is greater or equal to 0, and decrement the its value... This will terminate the loop once the first character has been printed last. 

[5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](./5-rev_string.c) - Reversing a string. The function created takes an address pointing to a string and reverses the order of the string.

[6. Half the lies they tell about me aren't true](./6-puts2.c) - Creating a function that prints every other character of a string, starting with the first character, followed by a new line. To implement this, we have used a loop, and considering some of the given input and the expected output, we saw that we are printing some characters from the first index and all steps of 2, and thus why we are incrementing the value of `i` with 2 every loop.

[7. Winning is only half of it. Having fun is the other half](./7-puts_half.c) - Creating a function to print the second half of the string. If the number of characters is odd, the function should print the last n characters of the string, where `n = (length_of_the_string - 1) / 2`. 
