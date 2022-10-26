#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (n > size2)
		n = size2;

	concat = malloc(sizeof(char) * (size1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1 ; i++)
		concat[i] = s1[i];

	for (; i < (size1 + n); i++)
		concat[i] = s2[i - size1];

	concat[i] = '\0';

	return (concat);
}
