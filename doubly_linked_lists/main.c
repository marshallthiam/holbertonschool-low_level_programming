#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - test des fonctions de la liste doublement chaînée
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint(&head, -1);

    printf("Liste :\n");
    print_dlistint(head);

    printf("\nNombre de nœuds : %lu\n", dlistint_len(head));

    printf("\nSomme des éléments : %d\n", sum_dlistint(head));

    printf("\nSuppression à l'index 2...\n");
    delete_dnodeint_at_index(&head, 2);
    print_dlistint(head);

    printf("\nInsertion à l'index 2...\n");
    insert_dnodeint_at_index(&head, 2, 99);
    print_dlistint(head);

    printf("\nNœud à l'index 3 : %d\n", get_dnodeint_at_index(head, 3)->n);

    free_dlistint(head);
    return (EXIT_SUCCESS);
}
