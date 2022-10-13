#include "main.h"
/**
 * leet - function that encodes a string into 1337
 *
 * @str: The string to be changed.
 * Return: string that is encoded.
 */
char *leet(char *str)
{
	char *strenc = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = '0' + value[i];
			}
		}
	str++;
	}

	return (strenc);
}
