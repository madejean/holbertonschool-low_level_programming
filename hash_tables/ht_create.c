#include "hashtable.h"
#include <stdlib.h>

HashTable *ht_create(unsigned int size) {
        HashTable *hashtable; 
        unsigned int i;
        i = 0;

        hashtable = malloc(sizeof(HashTable));
        
        if (hashtable == NULL){
                return (NULL);
        }
        hashtable->size = size;
        hashtable->array = malloc(sizeof(List *) * size);
        if (hashtable->array == NULL){
                return(NULL);
        }
        while (i < size) {
                hashtable->array[i] = NULL;
                i++;
        }
        return hashtable;
}
