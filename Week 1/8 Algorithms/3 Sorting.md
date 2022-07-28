# Sorting

Sorting algorithms are used to transform an unsorted array into a sorted one

## Bubble Sort

Bubble sort is an O(n^2) sorting algorithm that works by repeatedly comparing
adjacent indices within an array and swapping their contents if they are not
in sorted order.

### Steps

- Compare the first and second indices within the array. If they are not in sorted order, swap their contents.
- Repeat this step, but instead of the first and second indices, we use the second and third indices.
- Keep on repeating this process until you reach the end of the array.
- Keep on repeating the three steps above until the entire array is sorted.

![img_1.png](img_1.png)

### Code

```java
public class Main{
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
}
```
Credit: Matthew

## Selection Sort

Selection sort is an O(n^2) algorithm that works by repeatedly finding the minimum element in an array,
and then placing that element near the front of the array, in sorted order

### Steps

- Loop through the array and find the minimum element
- Move this element to the front of the array
- Repeat the above steps, but instead of searching the entire array for the minimum element, we do not search the first element since we already know it is in the correct position
- Keep on repeating the above three steps, each time searching a smaller and smaller portion of the array, until the entire array is sorted

![img_2.png](img_2.png)

### Code

```java
public class Main{
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
}
```
Credit: Jan

## Insertion Sort

Insertion sort is an O(n^2) algorithm works by maintaining a sorted portion on the left and an unsorted 
portion on the right, and repeatedly moving elements from the beginning of the 
unsorted portion into the correct position within the sorted portion.

### Steps

- Select a key from the beginning of the unsorted portion of the array
- Check if the key is less than the number to its left
- If the key is less, then move the number one index to the right and decrement
the index you are looking at
- Repeat the above two steps until the key is no longer less than the number to
its left
- Set the value of your current index to the key
- Repeat all previous steps until the array is sorted

![img_3.png](img_3.png)

### Code

```java
public class Main{
    public static void insertionSort(int[] arr) {
        //Loops through the array
        for(int i = 1; i < arr.length; i++){
            //Key is the value at the beginning of the unsorted section
            int key = arr[i];
            //Index keeps track of the index of the value we are comparing the key to
            int index = i - 1;
            //As long as key is less than the value at index, we decrease the index
            while(index >= 0 && key < arr[index] ){
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
```

Credit: Aaron