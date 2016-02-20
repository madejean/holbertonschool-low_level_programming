#include <stdio.h>
#include <unistd.h>
#include "my_functions.h"
void print_combination_2(void)
{
 int i;
 int j;
  for (i = 0; i <= 9; i++)
    {
      for (j = i+1; j <= 9; j++)
        {
	  print_char ( i + '0');
	  print_char ( j + '0'); 
 
	  if (!(i==8 && j==9)) 
	    {
              print_char (',');
	      print_char (' ');
            }
	}
    }
}
