#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: A pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if the value is not present in the list or if the list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
	return (NULL);

	current = list;
	express = list->express;

	while (express != NULL && express->n < value)
	{
		current = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	printf("Value found between indexes [%lu] and
	[%lu]\n", current->index, express->index);

	while (current != NULL && current->n < value)
	{
		current = current->next;
		if (current != NULL)
			printf("Value checked at index [%lu] = [%d]\n",
			current->index, current->n);
	}

	if (current != NULL && current->n == value)
		return (current);

	return (NULL);
}
