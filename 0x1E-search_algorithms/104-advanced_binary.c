#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: The leftmost index of the array
 * @right: The rightmost index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Performs a recursive advanced binary search
 * @array: The sorted array to search in
 * @left: The leftmost index of the subarray
 * @right: The rightmost index of the subarray
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of the value,
 *         or -1 if the value is not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;

		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);

		if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, right, value));

		return (advanced_binary_recursive(array, left, mid, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located,
 * or -1 if the value is not present in the array or if the array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
