int print_char(char c);
void print_number(int n)
{
        int i;
        int m; 
        int k; 
        i = 0;
        m = 0;
        /*loop that goes through array and count number of digits*/
        while(i != 0){
          n = n / 10; 
        }
        if (n < 0)    /*print neg sign*/
          print_char('-');
        while (i > 0) {
                for(; i > 1; i--){  /*get last digit*/
                        n = n / 10;
                }
                k = n - (m*10);  /*rm last digit*/
                m = n; 
                if (k < 0){  /*print positive*/
                        k = k *(-1);
                }
                print_char(k + 48);
                i--;
        }
}

void print_array(int *a, int n) {
        int i;
        i = 0;
        while(i < n){
                print_number(*(a+i)); /*prints number of the array*/ 
                if(i < (n-1)) /*adds comma and space for the next digits*/ 
                        { 
                                print_char(',');
                                print_char(' ');
                        }
                i++;
        }
        print_char('\n');
}
