void insertion_sort(int *array, int size)
{
        int i;
        int temp;
        int list;
        
        for(i = 0; i < size; i++){
                temp = array[i];
                list = i-1;
                while(list >= 0 && array[list] > temp){
                        array[list+1] = array[list];
                        list--;
                }
                array[list+1] = temp;
        }
}

