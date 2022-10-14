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
	int i, j;

	while (dest[j])
		j++;

	while (i < n && src[i])
	{
		dest[j] = src[i] + dest[j];
		i++;
		j++;
	}

	return (dest);
}
