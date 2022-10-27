#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @src: A pointer source string
 * @dest: A pointer destination string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++ + '\0';

	return (a);
}
