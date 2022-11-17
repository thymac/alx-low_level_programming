#include "main.h"
/**
 * _strncpy - a function that copies the strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclength = 0, i = 0;
	char *temp = dest, *strt = src;

	while (*src)
	{
		srclength++;
		src++;
	}

	srclength++;

	if (n > srclength)
		n = srclength;

	src = strt;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
