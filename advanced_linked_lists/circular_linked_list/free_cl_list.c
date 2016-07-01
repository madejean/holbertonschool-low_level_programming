#include <stdlib.h>
#include "list.h"

/*free nodes*/
void free_cl_list(List *list)
{
        List *node;
        node = list;

        while (node->next != list) {
                free(node->str);
                free(node);
                node = node->next;
        } 
}
