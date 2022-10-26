#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: An input string
 *
 * Return: Always 0 (Succes)
 */
void print_rev(char *s)
{
	char *i = s;

	while (*i)
		i++;
	i -= 1;

	while (i)
	{
		_putchar(*s);
		i--;
	}

	_putchar('\n');
}
