#include "my_functions.h"
void print_string(char *str)
{
  while(*str) {
    print_char(*str);
    str++;
  }
}
