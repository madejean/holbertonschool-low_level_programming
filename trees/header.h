#include "tree.h"
#include <stdlib.h>
#include <string.h>
int btree_insert(BTree **tree, char *data); 
BTree *btree_find(BTree *tree, char *str);
BTree *array_to_btree(char **array);
void btree_free(BTree *tree);
int btree_depth(BTree *tree);
int print_char(char c);
