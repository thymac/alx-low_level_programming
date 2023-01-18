#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: the number of bytes
 *
 * Return: a pointer to copy to location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
