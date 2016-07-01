#include <stdlib.h>
#include "list.h"
int add_end_dl_list(List **, char *);

/*converts array to double linked list*/
List *array_to_dl_list(char **array){
        List *list;
        int i;
        list = NULL;
        while(array[i] != NULL){
                if(add_end_dl_list(&list, array[i]) == 1){
                        return NULL;
                }
                i++;
        }
        return list;
}
