#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 * if NULL is passed, treat it as an empty string
 * Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, contact_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_i++] = s2[i];

	return (concat);
}
