#include "main.h"
/**
 * print_last_digit
 * @n: the int to check
 * Return: absolute value of digit
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
		n = -n;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');

	return (digit);
}
