# C - malloc, free

[0. Float like a butterfly, sting like a bee](./0-create_array.c) - Creating a function that creates an array of chars, and initializes it with a specific char.


[1. The woman who has no imagination has no wings](./1-strdup.c) - Creating a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.


[2. He who is not courageous enough to take risks will accomplish nothing in life](./str_concat.c) - Creating a function taht concatenates two strings. The returned pointer should point to a newly allocated space in memory which conatins the contents of s1, followed by the contents of s2, and null terminated. If NULL is passed, we are treating it as an empty string.


[3. If you even dream of beating me you'd better wake up and apologize
](./3-alloc_grid.c) - Creating a function that returns a pointer to a 2 dimensional array of integers. The prototype: `int **alloc_grid(int width, int height);` and each element of the grid should be initialized to 0. The function should return NULL on failure. If width or height is 0 or negative, return NULL. *It is worth noting that when allocating memory for a 2D array, using `malloc(width * height * sizeof(int))` will allocate a single block memory block*. If you therefore try to access `arrayName[i][j]` might return a *segmentation fault*.


[4. It's not bragging if you can back it up](./4-free_grid.c) - Creating a function that frees a 2 dimensional grid previously created by your alloc_grid funtion.


[5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](./100-argstostr.c) - creating a function that concatenates all the arguments of your program. The prototype is `char *argstostr(int ac, char **av);`. Returns `NULL` if `ac == 0` or `av == NULL`, or if allocating memory fails, otherwise return a pointer to a new string. Each argument should be folowed by a `\n` in the new string.


