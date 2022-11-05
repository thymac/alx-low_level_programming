#include "main.h"

int _sqrt(int prev, int root);
/**
 * _sqrt_recursion - a function that return a natural square
 * root of a number
 * @n: an input integer
 *
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - a fuction that finds the square root
 * @prev: previous value
 * @root: square root value
 *
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
