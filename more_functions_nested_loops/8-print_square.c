#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return:
 */
void print_square(int size)
{
	int line, space;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 1; space <= size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
