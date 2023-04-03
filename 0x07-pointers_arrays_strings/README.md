# Even More Pointers, Arrays & Strings

[0. memset](./0-memset.c) - In this task, we are to create a function that fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. The function makes use of the `memset()` function in C Library that fills a certain bytes of the memory area pointed to by the pointer passed as an argument with a certain constant.

[1. memcpy](./1-memcpy.c) - Creating a function that copies `n` bytes from memory area `src` to memory area `dest`. The function uses the `memcpy()` function in C Library that copies a specified number of bytes from a memory area pointed to by a pointer and copies to a memory area pointed by anothe pointer. This function returns a pointer to memory area where the bytes have been copied to.

[2. strchr](./2-strchr.c) - Creating a function that locates a character i a string. The function returns a pinter to the first occurence of the character `c` in the string `s`, or `NULL` if the character is not found. We make use of the C Library function `strchr()` that searches for a character in a given string pointed by the pointer passed as argument. It is worth noting that the pointer returned points to the first occurence of the character and if used to deference will return the part of the string starting from the first occurence of the character.


