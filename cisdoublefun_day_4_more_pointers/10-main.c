#include <stdio.h>
int string_digit(char *s);

int main(void)
{
  char s[] = "p\n";
  int p;

  p = string_digit(s);
  printf("%d\n", p);
  return 0;
}
