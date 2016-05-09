#include <stdlib.h>
#include "list.h"

void rev_list(List **list)
{
  List *first_node;
  List *second_node;
  List *temp;

  first_node = NULL;
  second_node = *list;
  while (second_node != NULL)
    {
      temp = second_node->next;  
      second_node->next = first_node;   
      first_node = second_node;
      second_node = temp;
    }
  *list = second_node;
}
