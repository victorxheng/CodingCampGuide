package searchingSorting;

public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = new int[] {1, 2, 3, 4, 5, 7, 8, 9, 10};
        System.out.println(binarySearch(arr, 6));
        System.out.println(binarySearch(arr, 7));
    }

    //Binary Search. We are trying to find the integer num within the array input
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
}
