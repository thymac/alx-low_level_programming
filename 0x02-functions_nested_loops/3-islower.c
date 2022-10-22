#include "main.h"
/**
 * _islower - Checks if the alphabet is lowercase 
 *
 * Return: 1 if lowercase and 0 if uppercase.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
