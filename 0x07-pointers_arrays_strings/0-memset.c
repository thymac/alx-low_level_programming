#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: location to fill
 * @b: charcter to fill with
 * @n: number of bytes to fill
 *
 * Return: a pointer to location filed
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
