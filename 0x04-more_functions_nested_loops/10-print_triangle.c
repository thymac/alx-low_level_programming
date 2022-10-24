#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed
 * by a new line.
 * @size: An integer value
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int j, i = 0, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
