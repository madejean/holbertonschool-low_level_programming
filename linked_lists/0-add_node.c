#include <stdlib.h>
#include "list.h"
int length(char *s);
void string_copy(char *dest, char *src);

int add_node(List **list, char *str)
{
  List *node;
  node = malloc( sizeof(List) );
  if (node == NULL)
    { 
      return 1;
    }

  node->str=malloc( sizeof(char)*(length(str)+1) );

  if (node->str==NULL)
    {
      free(node);
      return 1;
    }
  string_copy(node->str, str);
  node->next = *list;
  *list = node;
  return 0;
}

int length(char *s)
{
  int i;
  while (s[i])
    {
      i++;
    }
  return i;
}

void string_copy(char *dest, char *src)
{
  int i;
  while (src[i])
    {
      i++;
      dest[i] = src[i];
    }
  dest[i] = '\0';
}
