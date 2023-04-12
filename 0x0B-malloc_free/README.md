# C - malloc, free

![dynamic memory allocation](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png)

### malloc
> `malloc()` is used to allocate a memory area and return a pointer to it. The memory allocated can be filled with characters or any kind of value using different methods. 

`void *malloc(size_t size)`

Some of the methods that can be used to place value to a memory include:

1. `memset()` - **a function used to fill a n-bytes of memory area with a certain character.** `void *memset(void *str, int c, size_t n)`
2. `strcpy()` - you can also fill the newly allocated memory with an existing string. This function has the prototype `char *strcpy(char *dest, const char *src)`
3. `strncpy()` - This method is similar to `strcpy()` only that it copies n-characters of a string to another. `char *strncpy(char *dest, const char *src, size_t n)`.

> Note that these are only a few methods on how we can initialize the newly allocated memory, if we are dealing with strings.

### Type Casting while allocating memory

If for instance, we are allocating a memory for a string pointed by a pointer, we need to cast this to a string as follows;

`char *new_memory = (char *)malloc(strlen(str) * sizeof(char));`

> The `(char *)` cast the pointer to a string, specifying that the memory is for a string.

To allocate enough space, we take the length of the string `str` multiplied by the size of each character.

This will similar if we are using **double pointer**;
`char **new_memory = (char **)malloc(strlen(str) * sizeof(char *));`
However, the sizeof will take `char *` as the argument instead of `char`, signifying that we are casting to a pointer of a string.
The `(char **)` signifies that we are using a double pointer.

### free

`free()` - used to deallocate memory initially allocated using malloc or any other methods.

`void free(void *ptr)` - It takes a pointer to the memory allocated which need to be deallocated.

### Tasks to work with malloc & free

[0. Float like a butterfly, sting like a bee](./0-create_array.c) - Creating a function that creates an array of chars, and initializes it with a specific char.


[1. The woman who has no imagination has no wings](./1-strdup.c) - Creating a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.


[2. He who is not courageous enough to take risks will accomplish nothing in life](./2-2-str_concat.c) - Creating a function taht concatenates two strings. The returned pointer should point to a newly allocated space in memory which conatins the contents of s1, followed by the contents of s2, and null terminated. If NULL is passed, we are treating it as an empty string.


[3. If you even dream of beating me you'd better wake up and apologize
](./3-alloc_grid.c) - Creating a function that returns a pointer to a 2 dimensional array of integers. The prototype: `int **alloc_grid(int width, int height);` and each element of the grid should be initialized to 0. The function should return NULL on failure. If width or height is 0 or negative, return NULL. *It is worth noting that when allocating memory for a 2D array, using `malloc(width * height * sizeof(int))` will allocate a single block memory block*. If you therefore try to access `arrayName[i][j]` might return a *segmentation fault*.


[4. It's not bragging if you can back it up](./4-free_grid.c) - Creating a function that frees a 2 dimensional grid previously created by your alloc_grid funtion.


[5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](./100-argstostr.c) - creating a function that concatenates all the arguments of your program. The prototype is `char *argstostr(int ac, char **av);`. Returns `NULL` if `ac == 0` or `av == NULL`, or if allocating memory fails, otherwise return a pointer to a new string. Each argument should be folowed by a `\n` in the new string.


[6. I will show you how great I am](./101-strtow.c) - Creating a function that splits a string into words. The prototype of the function is `char **strtow(char *str);` and it returns a pointer to an array of strings(words). Each element of this array should contain a single word, null-terminated. The last element of the returned array should be NULL. Words are separated by spaces. If `str == NULL` or `str == ""` the function should return `NULL`. Similary, if there is an error allocatic memory, the function should as well return NULL.

### Summary of methods Learnt in this project.

| Method      | Description |
| ----------- | ----------- |
| `malloc()`      | used to allocate memory |
| `free()`        | used to dealocate memory |
| `memset()`      | used to fill a memory area with a value |
| `memcpy()` | copies content of a memory to another memory |
| `strcpy()` | copies str2 to str1 |
| `strncpy()` | copies n-characters of str2 to str1 |
| `strtok()` | splits a string into tokens. i.e words or characters |
