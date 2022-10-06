#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * Return:
 */
void print_triangle(int size)
{
	int line, space, cha;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 1; space <= (size - line); space++)
			{
				_putchar(' ');
			}
			for (cha = 1; cha <= line; cha++)
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
