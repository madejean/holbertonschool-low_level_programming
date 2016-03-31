<<<<<<< HEAD
#include "my_functions.h"

=======
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
 int str_len(const char *str)
  {
    int i;
    i = 0;

    while (str[i]) {
      i++;
    }
      return i;
  }

   char *string_copy(char *dest, const char *src)
    {
      int i;
      int l;
      i = 0;
      l = str_len(src);

      for  (; i <= l && src[i] != '\0'; i++)
	dest[i] = src[i];
      for ( ; i <= l; i++)
	dest[i] = '\0';
  
  return dest;
}
