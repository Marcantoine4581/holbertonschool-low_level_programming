#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return:
 */
void print_line(int n)
{
	int ul;

	if (n > 0)
	{
		for (ul = 1; ul <= n; ul++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
