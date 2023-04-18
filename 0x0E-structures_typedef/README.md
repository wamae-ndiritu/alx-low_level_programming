# Structures & typedef
![C-structures](data:image/jpeg;base64,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) 

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


