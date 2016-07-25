#include "header.h"
#include "tree.h"
/**
 * btree_insert - Inserts node in a binary tree
 * @*tree: pointer to structure
 * @*data: points to array of elements
 */
int btree_insert(BTree **tree, char *data)
{
	if (*tree == NULL)
	{
		*tree = (BTree *) malloc(sizeof(BTree));
		if (tree == NULL)
		{
			return (1);
		}
		(*tree)->str = strdup(data);
		(*tree)->left = NULL;
		(*tree)->right = NULL;
		return (0);
	}
	else if (strcmp(data, (*tree)->str) > 0)
	{
		btree_insert(&(*tree)->left, data);
	}
	else if (strcmp(data, (*tree)->str) <= 0)
	{
		btree_insert(&(*tree)->right, data);
	}
	return (0);
}
