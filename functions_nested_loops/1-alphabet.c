#include "main.h"
/**
  * print_alphabet - Entry point
  * function that prints the alphabet, in lowercase, followed by a new line.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i ='a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}