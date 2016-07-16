int print_char(char c);
void print_number(int n)
{
        int i;
        int x;
        int j;
        int m;
        int k;

        i = 0;
        m = 0;
        x = n;
        
        while(x != 0){
          x = x / 10;
          i++;
        }
        if (n < 0){
                print_char('-');
        }
        while (i > 0) {
                x = n;
                j = i;
                for(; j > 1; j--){  
                        x = x / 10;
                }
                k = x - (m*10); 
                m = x;
                if (k < 0){ 
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
