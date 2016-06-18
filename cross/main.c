#include <stdio.h>
int print_char(char c);
int string_to_int(char *s);

int main (__attribute__ ((unused)) int argc, char *argv[])
{
        int x;
        int y;
        int n;
        n = string_to_int(argv[1]);
        for (x = 0; x < n; x++) {
                for (y = 0; y < n; y++) {
                        if (n % 2 != 0 && y == n/2 && x == y) {
                                print_char('X');
                        }
                        else if (x == y) {
                                print_char('\\');
                        }
                        else if (y == (n - x-1)) {
                                print_char('/');
                        }
                        else {
                                print_char(' ');
                        }
                }
                print_char('\n');
        }
        return 0;        
}

