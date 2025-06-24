#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    /* Delete head node */
    if (index == 0)
    {
        *head = temp->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    /* Traverse to the node at index */
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    /* If node doesn't exist */
    if (temp == NULL)
        return (-1);

    /* Unlink and free the node */
    if (temp->prev)
        temp->prev->next = temp->next;

    if (temp->next)
        temp->next->prev = temp->prev;

    free(temp);
    return (1);
}

⚙️ Header (lists.h) should contain:

#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
