#include "my_functions.h"
void print_combination_1(void)         
{
  int digits;
  for (digits=0; digits<10; digits++) { 
/*for loop to print all single-digit numbers*/
    print_number(digits);
 
  if (digits < 9) {
      /* prints comma and space*/
      print_char(',');
      print_char(' ');
    }
  }
}
