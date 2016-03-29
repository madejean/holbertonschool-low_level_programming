#include "my_functions.h"

int strings_compare(const char* s1, const char* s2)
{
  int i;
  i = 0;
  while(*s1 && (*s1==*s2))
    s1++,s2++;
  return (s1[i] - s2[i]); 
}
