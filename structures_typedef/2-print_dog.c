#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: name of the variable.
 * Return:
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
