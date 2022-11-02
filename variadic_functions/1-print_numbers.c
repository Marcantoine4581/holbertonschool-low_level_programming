#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 * If separator is NULL, don’t print it.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < count; i++)
	{
		printf("%d", va_arg(num, int);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
