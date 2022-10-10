#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * and updates the value it points to to 98.
 * @a : a pointer of the integer we want to swap
 * @b : a pointer of the integer we want to swap
 * Return:
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
