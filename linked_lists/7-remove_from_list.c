#include <stdlib.h>
#include "list.h"
void free_node(List *node);

void remove_from_list(List **list, int index)
{
  int i;
  List *node;
  List *rm;

  if (index < 0)
    {
      return;
    }
  rm = *list;
  for (i = 0; i < index && rm->next; i++)
    {
      node = rm;
      rm = rm->next;
    }
  if (i == 0)
    {
      node = *list;
      *list = (*list)->next;
      free_node(node);
    }
  else
    {
      node->next = rm->next;
      free_node(rm);
    }
}

void free_node(List *node){
  free(node->str);
  free(node);
}
