#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
