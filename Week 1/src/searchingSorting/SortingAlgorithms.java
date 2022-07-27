package searchingSorting;

import java.util.Arrays;

public class SortingAlgorithms {
    public static void main(String[] args) {
        int[] arr = new int[] {5, 3, 2, 7, 4, 8, 6};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
        int[] arr2 = new int[] {5, 3, 2, 7, 4, 8, 6};
        selectionSort(arr2);
        System.out.println(Arrays.toString(arr2));
    }

    //Bubble Sort Challenge Problem - Solution Credit: Matthew
    public static void bubbleSort(int[] arr){
        while(true){
            int count = 0;
            for(int i = 1; i < arr.length; i++){
                if(arr[i] < arr[i - 1]){
                    int temp = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = temp;
                    count += 1;
                }
            }
            if(count == 0){
                break;
            }
        }
    }

    //Selection Sort Challenge Problem - Solution Credit: Jan
    public static void selectionSort(int[] arr) {
        int min = 0;
        for (int i = 0; i < arr.length; i++) {
            min = i;
            for (int j = i; j < arr.length; j++) {
                if (arr[j] < arr[min]) min = j;
            }
            int x = arr[i];
            arr[i] = arr[min];
            arr[min] = x;
        }
    }


}
