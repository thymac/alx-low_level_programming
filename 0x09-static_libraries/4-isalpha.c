#include "main.h"
/**
 * _isalpha - Checks if uppercase
 * @n: An input number
 *
 * Return: 1 if uppercase or 0 if lowercase
 */
int _isalpha(int n)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (n == lower || n == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
