#include "main.h"
/**
 * int_factorial - function that returns the factorial of a given number
 * @n: string to be printed.
 * Factorial of 0 is 1.
 * Return: If n is lower than 0, 
 * the function should return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
