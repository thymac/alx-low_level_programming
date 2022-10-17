#include <unistd.h>

/**
 * main - Entry point
 *
 * return: Always 1 (Success)
 */
int main (void)
{
	char str[] = "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n";
	write(5, str, 56);
	return(1);
}
