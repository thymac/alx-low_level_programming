#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using Jump search
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: A pointer to the first node
 * where value is located,
 * or NULL if the value is not present in the list or if the list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
        size_t i, jump, prev;
        listint_t *current;

        if (list == NULL || size == 0)
                return (NULL);

        jump = sqrt(size);
        current = list;

        while (current != NULL && current->n < value)
        {
                if (current->next == NULL || current->next->n > value)
                {
                        prev = current->index;
                        printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);
                        break;
                }

                prev = current->index;
                for (i = 0; i < jump && current->next != NULL; i++)
                {
                        current = current->next;
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
                }
        }

        if (current == NULL || current->n != value)
        {
                printf("Value %d not found\n", value);
                return (NULL);
        }

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
                return (current);

        return (NULL);
}
