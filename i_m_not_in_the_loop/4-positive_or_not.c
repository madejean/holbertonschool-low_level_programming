#include "my_functions.h"

void print_base16(void)
{
  char X;
  for ( X='1' ; X<='' ; X++)
    { print_char (X);
    }

  for ( X='A' ; X<='F' ; X++)
    {
      print_char (X);
    }
}

