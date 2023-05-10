#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if it is not present
 *         or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		i = prev + step;

		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			prev = i;
			i += step;
		}

		if (i >= size)
			break;

		printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

		while (prev < size && array[prev] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			prev++;
		}

		if (array[prev] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			return (prev);
		}
	}

	return (-1);
}
