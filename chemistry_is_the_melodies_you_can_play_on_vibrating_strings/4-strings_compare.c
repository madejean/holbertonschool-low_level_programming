#include "my_functions.h"
int strings_compare(char *s1, const char *s2)
{
  int i;
  int n;
  n=0;
 
 for (n = 0; i < n; i++) {
    if (s1[i] == s2[i]) {
    }
    else {
      return (s1[i] - s2[i]);
    }
  }
  return (0);
}
