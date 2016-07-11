#include "hashtable.h"
#include <stdlib.h>

void ht_free(HashTable *hashtable)
{
        int i;
        List *node;
        List *pointer;

        for (i = 0; i < hashtable->size; i++) {
                node = hashtable->array[i];
                while (node != NULL) {
                        free(node->key);
                        free(node->value);
                        pointer = node->next;
                        free(node);
                        node = pointer;
                }
        }
        free(hashtable->array);
        free(hashtable);
}
