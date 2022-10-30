#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of
 * a string to uppercase
 * @s: an input string
 *
 * Return: char pointer to a converted string
 */
char *string_toupper(char *s)
{
	char *strt = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= -32;

		s++;
	}
	return (strt);
}
