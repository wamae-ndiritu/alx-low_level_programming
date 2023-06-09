# More Pointers, Arrays & Strings
###### In this project, we continue to look into more of Pointers, Arrays and Strings. We look into different String methods and how we can implement to solve various problems. 

[0. strcat](./0-strcat.c) - Creating a function that concatenates two string. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. The function takes pointers `src` and `dest` as parameters and they point to strings that need to be concatenated together. The function uses the `strcat()` function from the C Standard Library defined in `string.h` header file, and returns the concatenated string. Note that if I am conacatenating `str1` and `str2`, the resulting string is in `str1` and therefore `str2` does not change.

[1. strncat](./1-strncat.c) - Creating a function that concatenates two strings, but it takes at most n-bytes of the string `src` to be appended to the string `dest`. This function makes use of the `strncat()` but now includes some defined number of maximum bytes of string2 will be appended to string1 as seen in [_strcat](./0-strcat.c).

[2. strncpy](./2-strncpy.c) - In this task, we are creating a function that uses the `strncpy()` function in C. The function copies a string to another string. It takes two pointers pointing to destination and src string as parameters as well as an integer n. The `dest` is the points to the string where content will be copied to whereas `src` points to the string where content will be copied from. The integer `n` specifies the max number of characters from `src` will be copied.

[3. strcmp](./3-strcmp.c) - The `strcmp()` function in C compares two strings pointed to by pointers passed as parameters. The functions return an integer less than 0, if the first string is less than second string, else if the first string is greater than second string, it returns a value greater than 0, and if the two strings are equal it returns 0. So in this, task we are making use of this function in another function.

[4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](./4-rev_array.c) - In this task, our aim is to reverse the array. To reverse the content of an array, we need to loop through it, and swap the values. However, the number of times to loop through so as to swap all the elements can be a problem. If we loop from `i = 0` to `i < n -1` where `n` is the number of elements in the array, then for each loop we need to loop other `n - i - 1` times.

[5. Always look up](./5-string_toupper.c) - Creating a function that changes all lowercase letters of a string to uppercase. The function uses the `toupper()` function in C that converts the integers passed as argument to uppercase. However, in the function we are creating, we want to pass the a pointer to the character we are converting. We can the cast the character as an integer so as to use in the function `toupper()`. We are using `toupper((unsigned char)*uppercase)` to dereference the pointer, hence getting the value of variable pointed to by the uppercase pointer. `unsigned char` will ensures that the value passed to toupper() is always an unsigned value in the range of 0 to 255, regardless of whether char is signed or unsigned. The loop `while (*uppercase)` is used to loop through the characters in the pointer dereferenced as long as the character is not the `null character`: `\0`.


[6. Expect the best. Prepare for the worst. Capitalize on what comes](./6-cap_string.c) - Creating a function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }. To capitalize words (making the first character uppercase), we can still use the `toupper()` function but apply some conditions to it such that it only converts the first characters to uppercase. First characters of words are separated by spaces and punctuation. So we can use `isspace()` to check whether there is any kind of space in a string, and `ispunct()` to check whether there is any punctuation mark in the string.


[8. rot13](./100-rot13.c) - In this tasking we are encoding a string using `rot13`. ROT13 substitutes an alphabet with its 13 alphabet ahead of it. In this function, you can only use one if condition. `malloc()` function has been used to allocate memory to the string that will be encoded. The memory allocated will also include aplace for the null character and therefore it is `str_length + 1`.


[9. Numbers have life; they're not just symbols on paper](./101-print_number.c) - Creating a function that prints out integers using `_putchar()` which only prints one character at a time. We therefore call the function recursively.


