#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: An input string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int length = 0, i = 0;
	char a;

	while (s[length] != '\0')
		length++;

	while (i < length--)
	{
		a = s[i];
		s[i++] = s[length];
		s[length] = a;
	}
}
