#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest : Variable which will hold the string
 * @src : Variable which holds the string
 * @n : bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
