#ifndef DOG_H
#define DOG_H
/**
 *struct dog - id of a dog
 *Description: provide name , age., owner of a dog
 *@name:array of string
 *@age:float
 *@owner:array of string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
