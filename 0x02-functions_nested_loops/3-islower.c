#include "main.h"
/**
 * _islower - Checks if the alphabet is lowercase
 * @n: An input number
 *
 * Return: 1 if lowercase and 0 if uppercase
 */
int _islower(int n)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == n)
			lower = 1;
	}
	return (lower);
}
