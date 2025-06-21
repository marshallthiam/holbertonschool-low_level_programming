#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  // pour size_t

/**
 * struct dlistint_s - structure d’un nœud de liste doublement chaînée
 * @n: entier contenu dans le nœud
 * @prev: pointeur vers le nœud précédent
 * @next: pointeur vers le nœud suivant
 *
 * Description: structure pour une liste doublement chaînée
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Fonctions de manipulation de la liste */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif /* LISTS_H */
