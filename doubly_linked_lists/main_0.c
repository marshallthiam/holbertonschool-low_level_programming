#include <list.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - test la fonction print_dlistint
 *
 * Return: Toujours EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = add_dnodeint(&head, 0);
    printf("Avant : %p\n", (void *)new);
    n = print_dlistint(head);
    printf("Il y a %lu éléments dans la liste.\n", n);
    free(new);
    return (EXIT_SUCCESS);
