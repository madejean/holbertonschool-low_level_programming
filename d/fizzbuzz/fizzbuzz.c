#include <stdio.h>

int main(void)
{
  /*loop to print numbers from 1 to 100 but prints fizz for multiples of 3 and Buzz for multiples of 5, fizzbuzz for both*/ 
  int x;
  for (x=1;x<101;x++) 
    {
      if (x%3==0){ /*Fizz for multiples of 3*/
        printf("Fizz");
      }
      else if (x%5==0){ /*Buzz for multiples of 5*/
        printf("Buzz");
      }
      else if (x%3==0 && x%5==0){ /*FizzBuzz for multiples of both*/
	printf("FizzBuzz");
      }
      else {
	printf("%d", x); /*prints digits*/
      }

      if (x!=100) /*add space space*/
        {
          printf(" ");
        }
    }
  return (0);
}
