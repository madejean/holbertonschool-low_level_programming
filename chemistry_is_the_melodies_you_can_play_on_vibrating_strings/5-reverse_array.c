#include "my_functions.h"
void reverse_array(int *a, int n) 
{
  int i;
  int temp;
  i = 0;

 while (i <= n)
    {
      temp = a[i];   
      a[i] = a[n];
      a[n] = temp;
      i++;
      n--;
    }   
}
