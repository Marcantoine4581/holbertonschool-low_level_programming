#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - function that prints numbers, followed by a new line.
 * @n: number of arguements.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum;

	va_start(num, n);
	
	for (i = 0; i < count; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);

		
}
