#include "header.h"

BTree *btree_find(BTree *tree, char *str)
{
        BTree *root;
        int t;
        root = tree;
        t = strcmp(root->str, str);
        
        while(root != NULL)
                {
                        if (t <= 0)
                                {
                                        if (t == 0)
                                                {
                                                        return (root);
                                                }
                                        root = root->left;
                                }
                        else if(t >= 0)
                                {
                                        if(t == 0)
                                                {
                                                        return (root);
                                                }
                                        root = root->right;
                                }
                }
        return NULL;
}
