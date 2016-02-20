#include "my_functions.h"

void print_square(int n)
{
  int w;
  int h;

  if (n <= 0) {
    return;
  }
  if (n == 1) {
    print_char('o');
    print_char('\n');
  }
  else {
    firstorlastline(n);
   
    for (h = 0; h < (n-2); h++) {
      print_char('|');
      for (w = 0; w < (n-2); w++) {
	print_char(' ');
      }
      print_char('|');
      print_char('\n');
    }
    firstorlastline(n);
  }
}

void firstorlastline(int n) {
  int w;

  print_char('o');
  for (w = 0; w < (n-2); w++) {
    print_char('-');
  }
  print_char('o');
  print_char('\n');
}
