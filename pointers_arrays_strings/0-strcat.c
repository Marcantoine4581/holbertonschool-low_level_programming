#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest : Variable which will hold the string
 * @src : Variable which holds the string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
	}
	*dest = '\0';
	return (aux);
}
