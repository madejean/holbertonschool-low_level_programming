#include <stdio.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char c))(int, int)
{
  int i;
  int (*fct_ptr[5])(int a, int b);
   char a[5]= {'+', '-', '*', '/', '%'};

   fct_ptr[0] = &op_add;
   fct_ptr[1] = &op_sub;
   fct_ptr[2] = &op_mul;
   fct_ptr[3] = &op_div;
   fct_ptr[4] = &op_mod;
   i = 0;

   while(i < a[i])
    {
      if (c == a[i])
        {
          return fct_ptr[i];
        }
      i++;
    }
  return  NULL;
}

