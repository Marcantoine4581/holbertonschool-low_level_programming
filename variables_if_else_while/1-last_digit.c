#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print the last digit of the number stored in the variable n
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 6)
	printf("is %d is greater than 5\n", n);
	else if (n != 0)
	printf("%d and is less than 6 and not 0\n", n);
	else
	printf("%d and is 0\n", n);
	return (0);
}