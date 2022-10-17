#include "main.h"
 int isPrime(int n, int i);
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}

	return (isPrime(n, n - 1));
}

/**
 * isPrime - helper function for is_prime_number
 * @n: input number
 * @i: iterator
 * Return: 1 if true, 0 if false
 */
int isPrime(int n, int i)
	if (n % i == 0)
		return (0);

	if (i == 1)
		return (1);

	return (isPrime(n, i - 1));
