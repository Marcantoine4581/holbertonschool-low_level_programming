#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i, j;
	char spec_char[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
				for (j = 0; spec_char[j] != '\0'; j++)
					if (str[i] == spec_char[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] -= 32;
	}
	return (str);
}
