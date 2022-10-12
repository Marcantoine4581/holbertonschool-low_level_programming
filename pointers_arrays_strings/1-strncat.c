#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest : Variable which will hold the string
 * @src : Variable which holds the string
 * @n : bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
