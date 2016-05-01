#include <stdio.h>
int string_upper(char *s);

int main(void)
{
  char s[] = "IPOIN";
  int p;

  p = string_upper(s);
  printf("%d\n", p);
  return 0;
}
