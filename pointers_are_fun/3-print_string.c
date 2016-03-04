#include "my_functions.h"
void print_string(char *str)
{
  //loop to print the string in pointer *str
  while(*str) {
    print_char(*str);
    str++;
  }
}
