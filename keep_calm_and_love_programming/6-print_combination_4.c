#include <stdio.h>
#include <unistd.h>
#include "my_functions.h"

void print_combination_4(void){
  int x,y ;
  for (x = 0; x< 99; x++)
    {
      for (y = x+1; y<= 99; y++)
	{
	  print_char ((x/10) + '0');
	  print_char ((x%10) + '0');
	  print_char(' ');
	  print_char ((y/10) + '0');
	  print_char ((y%10) + '0');

	  if (x<=98 && y<=99) {
	    print_char(',');
	    print_char(' ');
	  }
	}
    }
}
