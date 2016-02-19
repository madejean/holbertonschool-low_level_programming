#include <stdio.h>
void print_to_98(int n)
{
  if (n<98){
    while (n!=99){
      printf("%d",n);
      n++;
      if (n<98){
           printf(",");
      }
   }
}
}
