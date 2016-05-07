#include <stdlib.h>
#include "str_struct.h"
char *strcopy(char *dest, char *src);
int length(char *str);

/*points string located in a newly allocated structure*/
struct String *string_to_struct(char *str) 
{ 
  char *cp;
  struct String *s;
  s = malloc(sizeof(struct String));
 
  if (s == NULL)
    {
      return (NULL);
    }

  cp = malloc(sizeof(char) * s->length+1);
  
  if (cp == NULL)
    {
      free(s);
      return NULL;
    }
  cp = strcopy(cp, str);
  s->str = cp;
  s->length =length(str);
  return s;
}

int length(char *str) 
{
  int l;
  l = 0;
  while (str[l] != 0)
    {
      l++;
    }
  return l;
}

char *strcopy(char *dest, char *src)
{
  int i;
  i = 0;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }

  dest[i] = '\0';
  return dest;
}
