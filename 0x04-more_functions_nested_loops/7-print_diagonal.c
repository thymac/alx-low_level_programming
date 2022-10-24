#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * followed by a newline
 * @n: An integer input
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int j, i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
