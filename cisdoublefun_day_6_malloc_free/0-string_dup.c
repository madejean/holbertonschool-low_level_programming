#include <stdio.h>
#include <stdlib.h>

char *string_dup(char *str)
{
  int i;
  char *s;
  i = 0;
 
  while (str[i] != '\0')
    {
      i++;
    }
  s = malloc (i * sizeof(char));
  while ( i >= 0)
    {
      s[i] = str[i];
      i--;
    }
  if (s == NULL)
    {
      return NULL;
    }
  return s;
}
 
