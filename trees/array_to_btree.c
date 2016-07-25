#include "header.h"
#include "tree.h"
/** 
 * array_to_btree - converts an array of stings into a binary tree
 * @*tree: points to binary tree structure
 * @**array: array passed as parameter
 */

BTree *array_to_btree(char **array)
{
        BTree *tree;
        int i;
        tree = NULL;
        
        while (array[i])
                {
                        btree_insert(&tree, array[i]);
                        i++;
                }
        return tree;
}
