#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguements.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0, return 0
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum;

	va_start(num, n);
	
	for (i = 0; i < num; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);	
}
