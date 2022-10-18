#include "main.h"
int isPrime(int n, int div);
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n < 3)
	{
		return (0);
	}

	return (isPrime(n, div));
}

/**
 * isPrime - helper function for is_prime_number
 * @n: input number
 * @div : divisor
 * Return: 1 if true, 0 if false
 */
int isPrime(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (isPrime(n, div + 1));
}
