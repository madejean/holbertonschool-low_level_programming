#include <stdlib.h>
#include "list.h"

/*free nodes*/
void free_dl_list(List *list)
{
        List *node;
        node = list;

        while (node != NULL) {
                free(node->str);
                free(node);
                node = node->next;
        }
}
