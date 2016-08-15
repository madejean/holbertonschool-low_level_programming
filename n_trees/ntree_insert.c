#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * search_element - navigate through the tree until reaching element
 * @tree: passes the tree as argument
 * @element: iterate though elements
 */

NTree *search_element(NTree *tree, char **element)
{
	List *list;
	int i;
	
	i = 1;
	/*traverse the tree until last level to locate element*/
	while(element[i] != NULL)
	{
		list = tree->children;
		/*traverse throught the list until reachhing parent*/
		while (strcmp(list->node->str, element[i]) != 0)
		{
			list = list->next;
		}
		tree = list->node;
		i++;
	}
	return tree;
}

/**
 * ntree_insert - inserts a node in a N-ary tree
 * @tree: pointer to the address of the root node
 * @parents: array of string
 * @data:string to duplicate and to store inside the new node
 */

int ntree_insert(NTree **tree, char **parents, char *data)
{
	NTree *element;
	NTree *tree_node;
	List *list;
	List *list_node;
	
	element = malloc(sizeof(NTree));
	list = malloc(sizeof(List));
	tree_node = malloc(sizeof(NTree));
	list_node = malloc(sizeof(List));
	
	if (*tree == NULL)
	{
		*tree = malloc(sizeof(NTree));
		/*root node*/
		(*tree)->str = strdup(data);
		(*tree)->children = NULL;
		return (0);
	}
	element = search_element(*tree, parents);
	/*points to first list node*/
	list = element->children;
	element->children = list_node;
	element->children->next = list;
	/*points to tree node*/
	element->children->node = tree_node;
	/*duplicate str data*/
	element->children->node->str = strdup(data);
	element->children->node->children = NULL;
	/*element->children = list;
	  list->next = NULL;
	  list->node = NULL;
	*/
	if (*tree == NULL || element == NULL || list == NULL || data == NULL)
	{
		return (1);
	}
	return (0);
}
