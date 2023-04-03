# Even More Pointers, Arrays & Strings

[0. memset](./0-memset.c) - In this task, we are to create a function that fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. The function makes use of the `memset()` function in C Library that fills a certain bytes of the memory area pointed to by the pointer passed as an argument with a certain constant.

[1. memcpy](./1-memcpy.c) - Creating a function that copies `n` bytes from memory area `src` to memory area `dest`. The function uses the `memcpy()` function in C Library that copies a specified number of bytes from a memory area pointed to by a pointer and copies to a memory area pointed by anothe pointer. This function returns a pointer to memory area where the bytes have been copied to.

[2. strchr](./2-strchr.c) - Creating a function that locates a character i a string. The function returns a pinter to the first occurence of the character `c` in the string `s`, or `NULL` if the character is not found. We make use of the C Library function `strchr()` that searches for a character in a given string pointed by the pointer passed as argument. It is worth noting that the pointer returned points to the first occurence of the character and if used to deference will return the part of the string starting from the first occurence of the character.

[3. strspn](./3-strspn.c) - Creating a function that gets the length of a prefix substring. The function returns the number of bytes in the initial segment of `s` which consisit only of bytes from `accept`. This function makes use of the `strspn()` function in C Library which returns the number of characters in the initial segment of str1, passed as the first argument, which consist only of characters from str2, passed as the second argument.

[4. strpbrk](./4-strpbrk.c) - Creating a function that searches a string for any of a set of bytes. The function locates the first occurence in the string `s` of any of the bytes in the string `accept`. It then returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found. To achieve this, we will make use of the `strpbrk()` function in the C Library. If we dereference the pointer returned by this function, then we expect to have the part of the string starting from where a certain character that was in the `accept` first occured, to the last character of the string `s`.

[5. strstr](./5-strstr.c) - Creating a function that locates a substring. The function finds the first occurrence of the substring `needle` in the string `haystack`, the terminating null bytes (`\0`) are not compared. The function returns a pointer to the begining of the located substring, or `NULL` if the substring is not found. The task makes use of the `strstr()` function in the C Library.


