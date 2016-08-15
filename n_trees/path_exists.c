#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * path_exists - checks if a path is present in a N-ary tree
 * @tree: address of the root node of the Tree
 * @path: array of strings
 */

int path_exists(NTree *tree, char **path)
{
	List *list;
	int i;

	i = 1;

	while (path[i] != NULL)
	{
		if (list == NULL)
		{
			return (-1);
		}
		list = tree->children;
		while (strcmp(list->node->str, path[i]) != 0)
		{
			if (list->next == NULL)
			{
				return (-1);
			}
			list = list->next;
		}
		tree = list->node;
		i++;
	}
	return (1);
}
