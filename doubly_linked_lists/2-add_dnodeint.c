#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: double pointeur vers le début de la liste
 * @n: valeur à insérer dans le nouveau nœud
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head)
        (*head)->prev = new_node;

    *head = new_node;
    return (new_node);
}
