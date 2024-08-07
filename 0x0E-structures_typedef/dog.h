#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
*struct dog - is the dog class
*@name: is the name of the dog
*@age: is the age of the dog
*@owner: is the owner of the dog
*
*Descripption: this structure defines the attributes of a dog
*including its name, age and its owners name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - typdef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
