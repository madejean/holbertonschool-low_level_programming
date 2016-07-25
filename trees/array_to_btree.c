#include "header.h"

Btree *array_to_btree(char **array)
{
        BTree *tree;
        int i;
        tree = NULL;
        
        while (array[i])
                {
                        btree_insert(&tree, array[i]);
                        i++;
                }
        return (tree);
}
