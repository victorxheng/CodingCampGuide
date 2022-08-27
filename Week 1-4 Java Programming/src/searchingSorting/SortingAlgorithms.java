package searchingSorting;

import java.util.Arrays;

public class SortingAlgorithms {
    public static void main(String[] args) {
        int[] arr = new int[]{5, 3, 2, 7, 4, 8, 6};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
        int[] arr2 = new int[]{5, 3, 2, 7, 4, 8, 6};
        selectionSort(arr2);
        System.out.println(Arrays.toString(arr2));
        int[] arr3 = new int[]{5, 3, 2, 7, 4, 8, 6};
        insertionSort(arr3);
        System.out.println(Arrays.toString(arr3));
    }

    //Bubble Sort Challenge Problem - Solution Credit: Matthew

    public static void bubbleSort(int[] arr){
        while(true){
            //count is used to keep track of how many swaps we did
            int count = 0;
            //Loop through the entire array
            for(int i = 1; i < arr.length; i++){
                //Check if the elements at indices i and i - 1 are not sorted
                if(arr[i] < arr[i - 1]){
                    //If they are not sorted, swap them
                    int temp = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = temp;
                    //increment count by 1 because we did a swap
                    count += 1;
                }
            }
            //If count equals zero, meaning we did no swaps, the array is
            //already sorted, so we break out of the while loop
            if(count == 0){
                break;
            }
        }
    }

    //Selection Sort Challenge Problem - Solution Credit: Jan
    public static void selectionSort(int[] arr) {
        //This loops through every index of the array
        for (int i = 0; i < arr.length; i++) {
            //min is used to keep track of the index of the smallest element
            int min = i;
            //Loops through the array starting from the index i, because
            //everything before i has already been sorted
            for (int j = i; j < arr.length; j++) {
                //If the element at index j is smaller than our current minimum,
                //set min to j to update the index of the minimum value
                if (arr[j] < arr[min]) min = j;
            }
            //Swaps the values of the array at indices i and min to move the
            //minimum we found to a sorted position near the front of the array
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }


    //Insertion Sort Solution - Credit: Aaron
    public static void insertionSort(int[] arr) {
        //Loops through the array
        for (int i = 1; i < arr.length; i++) {
            //Key is the value at the beginning of the unsorted section
            int key = arr[i];
            //Index keeps track of the index of the value we are comparing the key to
            int index = i - 1;
            //As long as key is less than the value at index, we decrease the index
            while (index >= 0 && key < arr[index]) {
                //Moves the value at index one to the right
                arr[index + 1] = arr[index];
                index--;
            }
            //Set the value at index + 1 to the key because the key is no longer
            //smaller than the value at index
            arr[index + 1] = key;
        }
    }


}
