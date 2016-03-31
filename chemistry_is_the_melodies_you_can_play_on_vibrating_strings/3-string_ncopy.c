<<<<<<< HEAD
#include "my_functions.h"
=======
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
char *string_ncopy(char *dest, const char *src, int n)
{
  int i;
 
  for  (i = 0; i < n && src[i] != 0; i++){
    dest[i] = src[i];
  }
  for ( ; i < n; i++)
    dest[i] = '\0';
  return dest;
}
