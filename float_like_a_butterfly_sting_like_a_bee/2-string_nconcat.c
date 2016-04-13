#include <stdlib.h>

int str_len(char *);

char *string_nconcat(char *s1, char *s2, int n) {
  int l = str_len(s1) + str_len(s2);
  int i = 0;
  char *a = malloc(sizeof(char)*(l+1));
  char *b = a;
  if (a == NULL) return a;
  while (*s1 != 0) {
    *b = *s1;
    b++;
    s1++;
  }
  while (*s2 != 0 && i < n) {
    *b = *s2;
    b++;
    s2++;
    i++;
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
