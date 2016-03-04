#include "my_functions.h"
void reverse_string(char *s)
{
  char c;
  char *s0 = s - 1;
  char *s1 = s;

  while (*s1) //goes though the string
    s1++;
  while (s1-- > s0++) //reverse it
    {
      c = *s0;
      *s0 = *s1;
      *s1 =  c;
    }
}
