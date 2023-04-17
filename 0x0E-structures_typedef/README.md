# Structures & typedef

[0. Poppy](./dog.h) - Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *` 

[1. A dog is the only thing on earth that loves you more than you love yourself](./1-init_dog.c) - Creating a function that initialize a variable of type `struct dog`.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

[2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](./2-print_dog.c) - Writing a function that prints a *struct dog*

- Prototype: `void print_dog(struct dog *d);`
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.


