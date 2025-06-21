#include <stdio.h>
#include <stddef.h>  // for size_t

/**
 * struct list_s - singly linked list
 * @str: string - malloc'd string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%lu] %s\n", strlen(h->str), h->str);
        count++;
        h = h->next;
    }

    return count;
}
