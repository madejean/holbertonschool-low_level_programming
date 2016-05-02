#include "holbertonschool.h"
void print_number(int n)
{
  int y;
  int x;
  int m; 
  int k; 
  int p;

  m = 0; 
  x = n;
  /*loop that goes through array and count number of digits*/
  for (y = 0; x != 0; y++)
    x = x / 10; 
  if (n < 0)    /*print neg sign*/
    print_char('-');
  while (y > 0) {
    x = n;
    p = y;
    for(; p > 1; p--){  /*get last digit*/
      x = x / 10;
    }
    k = x - (m*10);  /*rm last digit*/
    m = x; 
    if (k < 0){  /*print positive*/
      k = k *(-1);
    }
    print_char(k + 48);
    y--;
  }
}

void print_array(int *a, int n) {
  int x;
  x = 0;
  for (;x < n; x++){
    print_number(*(a+x)); /*prints number of the array*/ 
    if (x < (n-1)) /*adds comma and space for the next digits*/ 
      { 
	print_char(',');
	print_char(' ');
      }
  }
  print_char('\n');
}
