#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s : the string to print
 * Return:
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
