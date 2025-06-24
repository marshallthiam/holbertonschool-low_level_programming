/* lists.h */

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

/* Prototypes */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
/* Ajoute ici les autres fonctions si nécessaires */

#endif /* LISTS_H */
