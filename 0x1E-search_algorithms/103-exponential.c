#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t min = 0;
	size_t max;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		min = bound;
		bound *= 2;
	}

	max = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", min, max);

	return (binary_search(array, min, max, value));
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @min: Minimum index to search in
 * @max: Maximum index to search in
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t min, size_t max, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		mid = (min + max) / 2;
		print_array(array, min, max);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints the elements of an array within a given range
 * @array: Pointer to the first element of the array
 * @start: Starting index of the range
 * @end: Ending index of the range
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
