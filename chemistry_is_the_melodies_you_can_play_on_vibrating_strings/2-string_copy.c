#include "my_functions.h"
char *string_copy(char *dest, const char *src)
{
  int i;
  int j;

  for (i = 0; src[i] != '\0'; i++);
    dest[i] = src[i];
  for (j = 0; i < j ; i++) 
    {
    dest[i] = '\0';
    }
  return dest;

}
