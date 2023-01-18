#include "main.h"
/**
 * _isdigit - function that checks for a digit 0 through 9
 * @c: an input integer
 *
 * Return: 1 if c is a digit 0 if not
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
