#include "my_functions.h"

void print_alphabet(void)

{
  char X; /*varible X*/

  for( X='a' ; X<='z' ; X++) /*establish the values of X*/

  {
    print_char (X); /*calls function print alphabet in 1-main.c with the values of the variable X*/
    }

  return;
}

