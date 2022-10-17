#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be printed.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
	{
		return (0);
	}

	else
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
