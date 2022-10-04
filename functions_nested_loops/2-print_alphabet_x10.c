#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return:
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 11)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
