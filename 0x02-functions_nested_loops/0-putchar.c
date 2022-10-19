#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a newline.
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
