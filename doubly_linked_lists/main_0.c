#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);  // <--- Ajoutez ceci si manquant

#endif /* LISTS_H */

main_0.c

#include <stdio.h>
#include "lists.h"  // <--- Assurez-vous que ce fichier est bien inclus

int main(void)
{
    dlistint_t *head = NULL;
    size_t n;

    n = dlistint_len(&head);  // <- doit être connu ici
    printf("Length: %lu\n", n);
    return (0);
}
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
