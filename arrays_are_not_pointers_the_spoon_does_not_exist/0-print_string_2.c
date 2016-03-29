#include "my_functions.h"
void print_string_2(char *str)
{
  int n;
  n=0;
  while (str[n] != '\0') /*goes through the string*/
    {
      if ( n % 2 == 0) /*takes even numbers*/ {
	print_char(str[n]);
      }
      n++;
    }
}
