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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if ((ch != 'e') && (ch != 'q'))
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
