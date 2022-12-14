#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: On success, return the index where value is located,
 * If value is not present in array or if array is NULL, return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (middle = left; middle < right; middle++)
			printf("%d, ", array[middle]);
		printf("%d\n", array[middle]);

		middle = ((left + right) / 2);
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
	}
	return (-1);
}
