#include "my_functions.h"
#include <stdio.h>

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

int (*get_op_func(char c))(int, int) 
{
  int i;
  int (*fct_ptr[5])(int, int) = {&op_add, &op_sub, &op_mul, &op_div, &op_mod}; 
  char a[]= {'+','-','*','/','%'};  
 
  for (i = 0; i < a[i]; i++) {
      if (c == a[i]) {
	 return (fct_ptr[i]);
       }
    }
  return  NULL;
}

