#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* Prototype de la fonction */
int create_file(const char *filename, char *text_content);

int main(int ac, char **av)
{
    int res;
    char *content;

    if (ac < 2)
    {
        dprintf(2, "Usage: %s filename [text]\n", av[0]);
        exit(1);
    }

    content = av[2] ? av[2] : "Best School\n";
    res = create_file(av[1], content);
    printf("-> %i)\n", res);
    return 0;
}
