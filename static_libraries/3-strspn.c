#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The string to be searched
 * @accept : the prefix to be measured
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
