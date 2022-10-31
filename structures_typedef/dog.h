#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Header file containing the type describing a dog.
 * @name : pointer for the name of the dog.
 * @age: age of the dog.
 * @owner: pointer for the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;


#endif
