# Searching

Searching is a process where we find the existence of some object within some set of objects. There are many variations of searching, and it can be done on many different data structures such as arrays or graphs.

## Linear Search

Given an array, we want to find whether or not an element exists in that array. We do this by traversing through the array with a for loop.

```java
    public static int findInteger(int[] array, int num) {
        for (int i = 0; i < array.length; i++) {
            if (num == array[i]) {
                return i;
            }
        }
        return -1;
    }
```
Here, we take in the input array `array` and an integer `num` that we are searching for. We use a for loop to loop through the entire array and if we find a value in the array equal to num, we return that value.

## Binary Search

A way to search for a number in an array in logarithmic time. We can check whether or not an element exists in the array without checking all of the elements in the array. However, this only works for sorted arrays.

```java
public static int binarySearch(int[] input, int num){

        //pointers to track the current scope of our binary search
        int left = 0;
        int right = input.length - 1;

        while(left <= right) {
            //finds the middle of our current scope
            int middle = (left + right) / 2;

            if (input[middle] == num) { // num has been found
                return middle;
            } else if (input[middle] < num) { // num is on the right half
                left = middle + 1;
            } else if (input[middle] > num) { // num is on the left half
                right = middle - 1;
            }
        }
        // num was not found within input
        return -1;
    }
```

Binary search works by halving the data at every step. We look at the element in the middle of our array, and compare that to the number we are searching for. If the number is bigger, then we can delete the bottom half of our array, and if the number is smaller, then we can delete the top half of our array. We repeat this process again with our new, smaller array, and keep doing this until we either find the number or the array becomes size 0.
