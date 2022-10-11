#include "main.h"
/**
 * puts_half - function should print the second half of the string
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * starting with the first character, followed by a new line.
 * @str : the string to print.
 * Return:
 */
void puts_half(char *str)
{
	int index = 0, len, n;

	while (str[index])

		index++;

	if (index % 2 == 0)
	{
		for (len = index / 2; str[len] != 0; len++)
			_putchar(str[len]);
	}
	else if (index % 2)
	{
		for (n = (index - 1) / 2; n < index - 1; n++)
		_putchar(str[n]);
	}
	_putchar('\n');
}
