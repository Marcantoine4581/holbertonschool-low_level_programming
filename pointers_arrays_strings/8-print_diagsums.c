#include "main.h"
#include <stdio>
/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a:The matrix of integers.
 * @size: The size of the matrix.
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, i < size; i++)
	{
		sum1 += a[i];/*sum1 = sum1 + value of a[i]*/
		a += size;/*a = a + size (example : size 3 = 4 because 0 1 2 3 */
	}

	a -= size;/*here a is '\0' because i = size so '\0' - 3 = a in position 2,0*/

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
