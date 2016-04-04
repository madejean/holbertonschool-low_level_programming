#include <stdio.h>

int main(int ac, char **av)
{
  for (ac = 0; av[ac]; ac++);
  printf("%d", ac -1);
  printf("\n");
  return 0;
} 
