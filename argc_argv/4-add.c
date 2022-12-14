#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 1 if error, 0 if no number is passed to the program
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
