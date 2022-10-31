#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * Store a copy of name and owner.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pdog = malloc(sizeof(dog_t));
	if (pdog == NULL)
		return (NULL);

	pdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (pdog->name == NULL)
	{
		free(pdog);
		return (NULL);
	}

	pdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (pdog->owner == NULL)
	{
		free(pdog->name);
		free(pdog);
		return (NULL);
	}

	pdog->name = _strcopy(pdog->name, name);
	pdog->age = age;
	pdog->owner = _strcopy(pdog->owner, owner);

	return (pdog);
}
