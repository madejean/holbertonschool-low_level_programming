#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

List *ht_link(List *pointer, const char *key, const char *value);

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
        int i;
        List *node;
  
        i = hash(key,  sizeof(hashtable));
        node = ht_link(hashtable->array[i], key, value);
        if (node == NULL){
                return 1;
        }
        hashtable->array[i] = node;
        return 0;
}

List *ht_link(List *pointer, const char *key, const char *value)
{
        List *node;

        node = malloc(sizeof(List));
        if (node == NULL) {
                return NULL;
        }
        node->key = strdup(key);
        node->value = strdup(value);
        if (node->key == NULL || node->value == NULL) {
                return NULL;
        }
        node->next = pointer;
        return node;
}
