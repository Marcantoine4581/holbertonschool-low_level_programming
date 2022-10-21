#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0 if success, if the number of arguments passed to your program
 * is not exactly 1, print Error, followed by a new line, and return 1.
 */
int main(int argc, char *argv[])
{
	int cents, n = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		n += 1;
	}
	printf("%d\n", n);
	return (0);
}
