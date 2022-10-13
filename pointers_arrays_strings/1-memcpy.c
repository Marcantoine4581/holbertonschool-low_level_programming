#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes of memory area to copy
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`*
 */
ar *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
