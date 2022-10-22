#include "main.h"
/**
 * print_alphabet - Prints the alphabets in lower case followed by a newline.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
