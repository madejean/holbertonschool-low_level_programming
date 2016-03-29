<<<<<<< HEAD
#include "my_functions.h"
=======
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
char *nconcat_strings(char *dest, const char *src, int n)
{
  int i;
  int j;

  for (i = 0; dest[i] != '\0'; i++);
  for (j = 0; j < n && src[j]; j++)
    {
	 dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
  return dest;
}
