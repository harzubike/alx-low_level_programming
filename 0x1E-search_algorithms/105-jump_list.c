#include "search_algos.h"
#include <stdio.h>

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *             Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if
 *         the value is not present in the list or the head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = sqrt(size), left = 0, right = 0;
    listint_t *prev = NULL, *curr = list;

    if (list == NULL)
        return (NULL);

    while (curr->n < value && curr->next != NULL)
    {
        left = right;
        right += jump;
        prev = curr;
        while (curr->next != NULL && curr->index < right)
            curr = curr->next;
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    while (prev != NULL && prev->index < right)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
    if (curr->n == value)
        return (curr);

    return (NULL);
}

