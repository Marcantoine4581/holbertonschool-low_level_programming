#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes of memory area to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest;

	pdest = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (pdest);
}
