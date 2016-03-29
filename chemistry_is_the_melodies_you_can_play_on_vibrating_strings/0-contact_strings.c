<<<<<<< HEAD
#include "my_functions.h"
=======
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
char *concat_strings(char *dest, const char *src)
{
  int i;
  int j;

  for(i=0; dest[i]!='\0'; ++i); /*get length string*/
  /*concatenate like strcat*/
  for (j = 0; src[j]; j++, i++)
   {
      dest[i]=src[j];
   }
  return dest;
}
