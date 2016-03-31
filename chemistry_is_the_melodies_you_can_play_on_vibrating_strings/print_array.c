<<<<<<< HEAD
#include "my_functions.h"
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
=======
#include <unistd.h>
void print_number(int n);
void print_array(int *a, int n);
void negative(int n);
void positive(int n);
int print_char (char c);

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_number(int n)
{
  if (n<0){
    print_char('-'); /*prints negative sign*/
    negative(n);
  }
  else{
    positive(n); /*sets second condition for positive*/
  }
}

void negative(int n)
{

  int x;

  x=n%10; /*shows last digit */
  x=x*(-1); /*inverse function for negative*/
  x=x+48; /*prints using ascii*/
  n=n/10; /*remove last digit to get other digits*/
  if (n!=0)
    {
      negative(n); /*call negative variable*/
    }
  print_char(x);

}
/*same principle for positive*/
void positive (int n)
{
  int x;

  x=n%10;

  x=x+48;
  n=n/10;
  if (n!=0)
    {
      positive(n);
    }
  print_char(x);
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
}

void print_array(int *a, int n) {
  int x;
  x = 0;
  for (;x < n; x++){
<<<<<<< HEAD
    print_number(*(a+x)); /*prints number of the array*/ 
    if (x < (n-1)) /*adds comma and space for the next digits*/ 
      { 
	print_char(',');
	print_char(' ');
=======
    print_number(*(a+x)); /*prints number of the array*/
    if (x < (n-1)) /*adds comma and space for the next digits*/
      {
        print_char(',');
        print_char(' ');
>>>>>>> 1cfdd3400ab3506a0d53971a1b18c19534613092
      }
  }
  print_char('\n');
}
