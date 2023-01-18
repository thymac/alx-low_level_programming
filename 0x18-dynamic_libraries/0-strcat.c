#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: An input string
 * @src: An input string
 *
 * Return: A pointer to a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
