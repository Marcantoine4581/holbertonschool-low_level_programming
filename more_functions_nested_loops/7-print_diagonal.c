#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return:
 */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
