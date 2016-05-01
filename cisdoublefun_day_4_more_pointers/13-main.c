#include <stdio.h>
int string_printable(char *s);

int main(void)
{
  char s[] = "IPOIN";
  int p;

  p = string_printable(s);
  printf("%d\n", p);
  return 0;
}
