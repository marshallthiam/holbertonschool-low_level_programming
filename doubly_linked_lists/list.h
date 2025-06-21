#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Noeud d'une liste doublement chaînée
 * @n: entier stocké dans le noeud
 * @prev: pointeur vers le noeud précédent
 * @next: pointeur vers le noeud suivant
 *
 * Description: structure de noeud pour une liste doublement chaînée
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Fonctions disponibles */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif /* LISTS_H */
