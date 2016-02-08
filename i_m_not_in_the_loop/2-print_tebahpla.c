#include "my_functions.h"

void print_tebahpla(void)

{
  char X;
  for( X='z' ; X>='a' ; X--) /*set values for variable X, X-- prints the inverse*/
    {
      print_char (X); /*calls function in 2-main.c*/
    }
}
