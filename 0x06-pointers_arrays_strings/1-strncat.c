#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclength = 0, i = 0;
	char *temp = dest, *strt = src;

	while (*src)
	{
		srclength++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclength)
		n = srclength;

	src = strt;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
