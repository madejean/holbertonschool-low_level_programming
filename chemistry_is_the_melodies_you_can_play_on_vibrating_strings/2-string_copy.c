#include "my_functions.h"
char *string_copy(char *dest, const char *src)
{
  int i;
  int n;
  n=0;
  
  for  (i = 0; i < n && src[i] != '\0'; i++);
  dest[i] = src[i];
  for ( ; i < n; i++)
    dest[i] = '\0';

  return dest;
}
