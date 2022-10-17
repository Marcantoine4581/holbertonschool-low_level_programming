#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: the natural square root of a number.
 * If n does not have a natural square root, the function should return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - helper function for _sqrt_recursion.
 * @n: input number
 * @i: iterator.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */

int find_sqrt(int n, int i)
{
	if (i * i > n || i * i < n)
		return (-1);

	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
