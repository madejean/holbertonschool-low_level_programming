#include "tree.h"
#include <stdlib.h>
void free_list(List *list);

/**
 * ntree_free - frees an entire N-ary tree
 * @tree: tree to be free
 */

void ntree_free(NTree *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree->children == NULL)
	{
		free(tree->str);
		free(tree);
		return;
	}
	free_list(tree->children);
	free(tree->str);
	free(tree);
}

void free_list(List *list)
{
	List *element;

	element = list;
	while (element != NULL)
	{
		if (list->node != NULL)
		{
			list = element;
			free_list(list->node->children);
			free(list->node->str);
			free(list->node);
		}
		element = list->next;
		free(list);
	}
}
