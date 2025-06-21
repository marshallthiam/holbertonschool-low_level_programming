#include <stdlib.h>

typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

void free_list(list_t *head)
{
    list_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head->str);  // Free the string inside the node
        free(head);       // Free the node itself
        head = tmp;
    }
}
