#include "header.h"
int btree_depth(BTree *tree)
{
        int left;
        int right;

        if (tree == NULL)
                {
                        return (0);
                }

        left = btree_depth(tree->left);
        right = btree_depth(tree->right);

        if (left < right)
                {
                        return (right + 1);
                }
        return (left + 1);
}
