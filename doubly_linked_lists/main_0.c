#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = add_dnodeint(&head, 9);
    new = add_dnodeint(&head, 1);
    new = add_dnodeint(&head, 0);
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    return (EXIT_SUCCESS);
}
