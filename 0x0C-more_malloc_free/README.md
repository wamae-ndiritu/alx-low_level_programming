# More malloc & free

[0. Trust no one](./0-malloc_checked.c) - Creating a function that alocates memory using malloc. Protoype: `void *malloc_checked(unsigned int b);`. The function returns a pointer to the allocated memory. If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98.


[1. string_nconcat](./1-string_nconcat.c) - Creating a function that concatenates two strings. Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`. The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated. If the function fails, it should return NULL. If `n` is greater or equal to the length of `s2` then use the entire string `s2`. if NULL is passed, treat is as an empty string.


