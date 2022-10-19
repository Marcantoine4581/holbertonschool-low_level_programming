#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 1 if error, 0 if no number is passed to the program
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			sum += atoi(argv[i]);

	printf("%d\n", sum);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
