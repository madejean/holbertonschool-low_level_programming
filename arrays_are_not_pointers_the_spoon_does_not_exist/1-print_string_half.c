#include "my_functions.h"
int length_of_the_string(char *str)
{
  int l=0;

  while(str[l] != '\0')
    {
      l++;
    }

  return l;
}

void print_string_half(char *str)
{
  int x;
  int l;
  x = 0;
  l = length_of_the_string(str);
 
  if (l % 2 == 0) 
    {
      x = ( l / 2 );
    }
  else {
    x = (l/2) + 1;
  }

  while (str[x] != '\0')
    {
      print_char(str[x]);
      x++;
    }
}
