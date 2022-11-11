#include <stdio.h>

int _putchar(char c);
/**
 * _puts - a finction that prints a string, followed by a
 * newline, to stdout
 * @str: an input string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
