#include <stdlib.h>
#include "list.h"

/*returns number of nodes in a list*/
int list_size(List *list)
{
  int i;
  if (list == NULL)
    {
      return 0;
    }
  else 
    {
      for (i = 0; list; list = list->next)
	{
	  i++;
	}
    }
  return i;
}
