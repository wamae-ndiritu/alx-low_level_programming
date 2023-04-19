# C - Function pointers

### Project Tasks
[0. What's my name](./0-print_name.c) - Write a function that prints a name.
- Prototype: `void print_name(char *name, void (*f)(char *));`

[1. If you spend too much time thinking about a thing, you'll never get it done](./1-array_iterator.c) - Write a function that executes a function given as parameter on each element of an array.
- Prototype: `void array_iterator(int *array, sizze_t size, void (*action)(int));`
- where `size` is the size of the array
- and `action` is a pointer to the function you need to use


