#include "main.h"
/**
 * reverse_array - a function that reverses an array
 * @a: an input integer
 * @n: number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
