<<<<<<< HEAD
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
=======
void reverse_array(int *a, int n){
  int x;
  int d;
  int temp;
  d = n / 2;
  n--;

 for(x = 0; x < d; x++) {
    temp = a[x];
    a[x] = a[n-x];
    a[n-x] = temp;
    x++;
  }
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
}
