#include <stdlib.h>
#include "list.h"
int add_end_cl_list(List **, char *);

/*converts array to a simple circular linked list*/
List *array_to_cl_list(char **array){
        List *list;
        int i;
        list = NULL;
        while(array[i] != NULL){
                if(add_end_cl_list(&list, array[i]) == 1){
                        return NULL;
                }
                i++;
        }
        return list;
}
