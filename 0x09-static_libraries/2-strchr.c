#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: an input string to locate in
 * @c: an input character to locate
 *
 * Return: a pointer to the location of c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
