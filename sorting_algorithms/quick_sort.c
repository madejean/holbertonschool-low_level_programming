void quick_sort(int *array, int size){
        int temp;
        int start;
        int end;
        temp = 0;
        start = -1;
        end = size;

        if(size <= 1){
                return;
        }
        while(start < end){
                while(array[start] < array[size/2]){    
                        end--;
                }
                while(array[end] > array[size/2]){
                        if(start < end){
                                temp = array[start];
                                array[start] = array[end];
                                array[end] = temp;
                        }
                }
                start++;
        }
                        
        quick_sort(array, start);
        quick_sort(&(array[start]), size - start);
}

