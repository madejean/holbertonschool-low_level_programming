void quick_sort(int *array, int size) {
        int i;
        int start;
        int end;
        int temp;
        start = 0;
        end = size - 1;
        i = array[start];

        if (size < 2) {
                return;
        }

        while (array[start] != array[end]) {
                while (array[start] < i) {
                        start++;
                }
                while (array[end] > i) {
                        end--;
                }
                temp = array[start];
                array[start] = array[end];
                array[end] = temp;
        }
                
        quick_sort(array, start);
        quick_sort((array + (start + 1)), size - (start + 1));
}
