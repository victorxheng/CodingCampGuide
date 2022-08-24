package searchingSorting;

public class BinarySearchProblems {
    public static void main(String[] args) {

    }
    //Problem 1 - Solution Credit: Aaron
    public static int reverseBinarySearch(int[] input, int num) {
        int left = 0;
        int right = input.length - 1;

        while (left <= right) {
            int middle = (left + right) / 2;
            if (input[middle] == num) {
                return middle;
            } else if (input[middle] < num) {
                right = middle - 1;
            } else if (input[middle] > num) {
                left = middle + 1;
            }
        }
        return -1;
    }

    //Problem 2 - Solution Credit: Aaron
    public static int recursiveBinarySearch(int[] input, int num, int left, int right){
        if(left > right){
            return -1;
        }
        else{
            int middle = (left + right) / 2;
            if(input[middle] == num){
                return middle;
            }
            else if(input[middle] < num){
                return recursiveBinarySearch(input, num, middle + 1, right);
            }
            else if(input[middle] > num){
                return recursiveBinarySearch(input, num, left, middle - 1);
            }
        }
        return -1;
    }
}

