#include "main.h"
/**
 * _isalpha - Checks if uppercase
 *
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isalpha(int c)
{
	char i;
	int alpha = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			alpha = 1;
	}
	return (alpha);
}
