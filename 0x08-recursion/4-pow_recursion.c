#include "main.h"
/**
 * _pow_recursion - a function that return the value of x
 * raised to the power of y
 * @x: an integer base
 * @y: an exponent input
 *
 * Return: The result of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
