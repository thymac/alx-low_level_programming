#include "main.h"
/**
 * _isupper - a function checking for an uppercase
 * character
 * @c: An input character
 *
 * Return: 1 if uppercase or 0 if not
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
