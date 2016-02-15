#include "my_functions.h"
void print_combination_2(void)
{ /*for loops to print all combinations of two different digits*/
  int x;
  for (x=0;x<9;x++)
{
      int i;
      for (i=x+1;i<10;i++) /*second digit*/
        {
          print_number(x);
          print_number(i);
          if (!(x==8 && i==9)) /*print space and coma except for 89*/
            {
              print_char(',');
              print_char(' ');
            }
        }
    }
}
