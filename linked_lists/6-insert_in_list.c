#include <stdlib.h>
#include "list.h"
int length(char *s);
void string_copy(char *dest, char *src);

int insert_in_list(List **list, char *content, int index) 
{

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
