#include "main.h"
/**
 * _puts - a function that prints a string, followed by
 * a new line, to stdout.
 * @str: An input string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
			i++;
	}

	_putchar('\n');
}

