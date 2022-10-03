#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
