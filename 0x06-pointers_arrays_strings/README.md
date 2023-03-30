# More Pointers, Arrays & Strings
###### In this project, we continue to look into more of Pointers, Arrays and Strings. We look into different String methods and how we can implement to solve various problems. 

[0. strcat](./0-strcat.c) - Creating a function that concatenates two string. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. The function takes pointers `src` and `dest` as parameters and they point to strings that need to be concatenated together. The function uses the `strcat()` function from the C Standard Library defined in `string.h` header file, and returns the concatenated string. Note that if I am conacatenating `str1` and `str2`, the resulting string is in `str1` and therefore `str2` does not change.


