#include <stdio.h>
#include "lists.h"

/**
 * _print_dlistint_backward - Prints all elements of a dlistint_t list backward.
 * @tail: Pointer to the last node of the list.
 *
 * Return: The number of nodes printed.
 */
size_t _print_dlistint_backward(const dlistint_t *tail)
{
    size_t count = 0;

    while (tail)
    {
        printf("%d\n", tail->n);
        count++;
        tail = tail->prev;
    }

    return (count);
}
