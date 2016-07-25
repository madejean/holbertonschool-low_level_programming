#include "header.h"
#include "tree.h"
/**
 * btree_find - search through the binary tree to find specific node element
 * @*tree: points to binary tree structure
 * @*str: str element of the node to find
 */

BTree *btree_find(BTree *tree, char *str)
{
	BTree *root;
	int t;

	root = tree;
	t = strcmp(root->str, str);

	while (root != NULL)
	{
		if (t <= 0)
		{
			if (t == 0)
			{
				return (root);
			}
			root = root->left;
		}
		else if (t >= 0)
		{
			if (t == 0)
			{
				return (root);
			}
			root = root->right;
		}
	}
	return (NULL);
}
