#include <stdio.h>
#include "_putchar.h"
/**
 * main -Entry point
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	char wrd[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(wrd[i]);
	_putchar('\n');

	return (0);
}
