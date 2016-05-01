#include <stdio.h>
int string_digit(char *s);

int main(void)
{
  char s[] = "100";
  int p;

  p = string_digit(s);
  printf("%d\n", p);
  return 0;
}
