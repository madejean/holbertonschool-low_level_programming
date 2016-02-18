#include "my_functions.h"
void print_combination_4(void){
  /* loops to print all possible combinations of two two-digit numbers*/
  int x,y ;
  for (x = 0; x< 100; x++)
    {
      for (y = x+1; y< 100; y++)
	{
	  
	  if(x < 10) { /*prints 0*/
	    print_number('0');
	  }
	  print_number(x);
	  print_char(' ');
	 
	  if (y<10) { /*prints 0 for second digit*/
	    print_number('0');
	  }
	  print_number(y);

	  if (!(x==98 && y==99)){ /*print comma and space except for last nb*/
	    print_char(',');
	    print_char(' ');
	  }
	}
    }
}
