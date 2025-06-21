#include <stddef.h>  // For size_t

/**
 * struct list_t - Linked list node structure
 * @str: String data
 * @len: Length of the string
 * @next: Pointer to the next node
 */
typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_t *next;
} list_t;

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the first node of the list
 *
 * Return: Number of nodes in the list
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return count;
}
