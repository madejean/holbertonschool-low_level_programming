#include "my_functions.h"
void print_combination_3(void){
  int n;
  /*for loop to all possible combinations of three different digits*/
  for (n = 0; n< 8; n++)
    {
      int i;
      for (i = n+1; i< 9; i++) /*add 1*/
	{
	  int j;
	  for (j = i+1; j< 10; j++) /*add 1*/
	    {
		print_number(n);
		print_number(i);
		print_number(j);		
		if (!(n==7 && i==8 && j==9))/*for all digits other than 789 print comma and space*/
	    {		
		print_char(',');
		print_char(' ');
	      }
	    }
	}
    }
}
