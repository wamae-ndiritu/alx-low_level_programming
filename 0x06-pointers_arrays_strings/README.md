# More Pointers, Arrays & Strings
###### In this project, we continue to look into more of Pointers, Arrays and Strings. We look into different String methods and how we can implement to solve various problems. 

[0. strcat](./0-strcat.c) - Creating a function that concatenates two string. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. The function takes pointers `src` and `dest` as parameters and they point to strings that need to be concatenated together. The function uses the `strcat()` function from the C Standard Library defined in `string.h` header file, and returns the concatenated string. Note that if I am conacatenating `str1` and `str2`, the resulting string is in `str1` and therefore `str2` does not change.

[1. strncat](./1-strncat.c) - Creating a function that concatenates two strings, but it takes at most n-bytes of the string `src` to be appended to the string `dest`. This function makes use of the `strncat()` but now includes some defined number of maximum bytes of string2 will be appended to string1 as seen in [_strcat](./0-strcat.c).

[2. strncpy](./2-strncpy.c) - In this task, we are creating a function that uses the `strncpy()` function in C. The function copies a string to another string. It takes two pointers pointing to destination and src string as parameters as well as an integer n. The `dest` is the points to the string where content will be copied to whereas `src` points to the string where content will be copied from. The integer `n` specifies the max number of characters from `src` will be copied.


