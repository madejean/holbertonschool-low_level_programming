#include "hashtable.h"
#include <string.h>

List *get_node(HashTable *hashtable, const char *key, int i);

char *ht_get(HashTable *hashtable, const char *key)
{
        int i;
        List *node;
        i = hash(key, hashtable->size);
        node = get_node(hashtable, key, i);
        if (node == NULL){
                return NULL;
        }
        return node->value;
}

List *get_node(HashTable *hashtable, const char *key, int i)
{
        List *pointer;
        pointer = hashtable->array[i];
        while (pointer->key != key) {
                pointer = pointer->next;
                if (pointer == NULL) {
                        return NULL;
                }
        }
        return pointer;
}
