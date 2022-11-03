#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @needle: an input string to locate
 * @haystack: an input string to search in
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
