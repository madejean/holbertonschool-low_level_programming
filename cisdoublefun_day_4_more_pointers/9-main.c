#include <stdio.h>
int string_alpha(char *s);

int main(void)
{
  char s[] = "dfs";
  int p;

  p = string_alpha(s);
  printf("%d\n", p);
  return (0);
}
