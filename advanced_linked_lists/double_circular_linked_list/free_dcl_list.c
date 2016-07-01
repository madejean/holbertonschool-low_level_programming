#include <stdlib.h>
#include "list.h"

/*free nodes*/
void free_dcl_list(List *list)
{
        List *node;
        node = list;

        while (node->next != list) {
                free(node->str);
                free(node);
                node = node->next;
        } 
}
