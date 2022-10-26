#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: An integer pointer
 * @b: An integer pointer
 *
 * Return: Always 0 (Succes)
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
