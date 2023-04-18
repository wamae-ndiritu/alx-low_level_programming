# Structures & typedef

![c-structure](https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Structure-in-C.jpg)

> A structure is a user defined data type available in C that allows to combine data types of different kinds. Such data types helps us represent real world objects which can not be represent a single primitive data type.

### Structure Defination

```
struct Person
{
char *name;
char *nationality;
float age;
float height;
char *occupation;
}
```
> The above code defines a structure called `Person`, with several members.

### Accessing and initializing a structure

```
struct Person Person1;
Person1.name = "Wamae Ndiritu";
Person1.nationality = "Kenyan";
Person1.age = 20;
Person1.height = 4.3;
Person1.accupation = "Software Engineer";
```
### Using typedef to give the structure Person a new name

> We can use `typedef` to give the type `struct Person` a new name like `Person`. Now, we will only be using the name `Person` anytime we want to create an instance of the `struct Person`

```
typedef struct Person Person;
Person Person2;
Person2.name = "John Doe";
```
### Pointers to structures

> To access elements of a pointer to a structure, we need to first dereference the pointer and then access the data using the `.` symbol. 

```
int main(void)
{
Person Person3;
struct Person *ptr;
ptr = &Person3;

/* accesing elements of a pointer to a structure */
(*ptr).name = "Wamae Ndiritu";

/* or this way */
ptr->name = "Wamae Ndiritu";
return (0);
}
```

### Project Tasks

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


[3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](./dog.h) - Defining a new type `dog_t` as a new name for the type `struct dog`.


[4. A door is what a dog is perpetually on the wrong side of](./4-new_dog.c) - Creating a function that creates an instance of a dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails


[5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](./5-free_dog) - Creating a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`


