#include "main.h"
/**
 * _islower - checks for lowercase character
 * isalpha - checks  for  an  alphabetic  character; in the standard "C" locale
 * it is equivalent to (isupper(c) || islower(c)).
 * In some locales, there may be  additional characters for which
 * isalpha() is true—letters which are neither uppercase nor lowercase.
 * @c: the character to check
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
