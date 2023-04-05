# Recursion

[0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](./0-puts_recursion.c) - Creating a function that prints a string, followed by a new line. The function should be similar to `puts()` function. Since, we are learning **recursion**, we can use `putchar()` like function which only prints one character at a time. However, instead of looping through the loop to print all the characters of the string, we call the function recursively to print all the charcters of the string. Our **base case** will be where the `*s == '\0'`, meaning we have reached the end of the string.

[1. Why is it so important to dream? Because, in my dreams we are together](./1-print_rev_recursion.c) - Creating a function that prints a string in reverse order, using `_putchar()` and recursion. This time, we will not print the characters before calling the function recursively, instead, we will call the function recursively and then print the values printed by each recursion starting with the most latest one, which happens to be the last character. The last character of the string will therefpore be printed the first, and hence we have a reversed string.

 
