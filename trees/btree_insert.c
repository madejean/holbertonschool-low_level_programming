#include "header.h"

int traverse_tree(BTree *root, BTree *node);

int btree_insert(BTree **tree, char *data)
{
        BTree *node;
        BTree *root;
        root = *tree;
        
        node = malloc(sizeof(BTree));
        if (node == NULL)
                {
                        return 1;
                }
        if (*tree == NULL)
                {
                        *tree = node;
                }
        else 
                {
                        node->str = strdup(data);
                        node->left = NULL;
                        node->right = NULL;
                        traverse_tree(root, node);
                        if (t == 1)
                                {
                                        return 1;
                                }
                }
        return 0;
}

int traverse_tree(BTree *root, BTree *node)
{        
        if (root->right != NULL)
                {
                        root = root->right;
                        traverse_tree(root, node);
                }
        else
                {
                        root->right = node;
                        node->right = NULL;
                        node->left = NULL;
                  }
        if (root->left != NULL)
                {
                        root = root->left;
                        traverse_tree(root, node);
                }
        else
                {
                        root->left = node;
                        node->right = NULL;
                        node->left = NULL;
                }
        return 0;
}
