#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the print_dlistint function
 *
 * Return: Always 0
 */
int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *new;

    new = add_dnodeint_end(&head, 0);
    new = add_dnodeint_end(&head, 1);
    new = add_dnodeint_end(&head, 2);
    new = add_dnodeint_end(&head, 3);
    new = add_dnodeint_end(&head, 4);
    new = add_dnodeint_end(&head, 98);
