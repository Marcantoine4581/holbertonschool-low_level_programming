#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 * @d: name of the variable.
 * Return:
 */
void free_dog(dog_t *d)
{
	free(d);
}
