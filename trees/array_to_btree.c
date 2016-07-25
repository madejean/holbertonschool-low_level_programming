#include "header.h"
#include "tree.h"
/**
 * Array_to_btree - converts an array of stings into a binary tree
 * @array: array passed as parameter
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
	return (tree);
}
