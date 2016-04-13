#include <stdlib.h>

int str_len(char *);

char *string_concat(char *s1, char *s2) {
  int l = str_len(s1) + str_len(s2);
  char *a = malloc(sizeof(char)*(l+1));
  char *b = a;
  if (a == NULL) return a;
  while (*s1 != 0) {
    *b = *s1;
    b++;
    s1++;
  }
  while (*s2 != 0) {
    *b = *s2;
    b++;
    s2++;
  }
  *b = 0;
  return a;
}

int str_len(char *str) {
  int l = 0;
  while (*str != 0) {
    l++;
    str++;
  }
  return l;
}
