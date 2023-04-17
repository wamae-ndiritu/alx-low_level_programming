#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - defines the structure of a dog
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
