package searchingSorting;

public class SortingProblems {
    public static void main(String[] args) {


    }
    //Problem 1 - Solution Credit: Jan
    public static void reverseSolution(int[] arr) {
        int k = 1;
        while (k == 1) {
            for (int i = 0; i < arr.length - 1; i++) {
                if (arr[i] < arr[i + 1]) {
                    k = 1;
                } else if (arr[i] > arr[i + 1]) k = 0;
                for (int j = 0; j < arr.length - 1; j++) {
                    if (arr[j] < arr[j + 1]) {
                        int x = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = x;
                    }
                }
            }
        }
    }
    //Problem 2 - Solution Credit: Tom
    public static void sSortReverse(int[] arr) {

        for (int i = 0; i < arr.length - 1; i++) {
            int min = i;
            for (int j = i; j < arr.length; j++) {
                if (arr[min] < arr[j]) {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }
    }
    //Problem 3 - Solution Credit: Jan
    public static void doubleSolution(double[] arr) {
        int min = 0;
        for (int i = 0; i < arr.length; i++) {
            min = i;
            for (int j = i; j < arr.length; j++) {
                if (arr[j] < arr[min]) min = j;
            }
            double x = arr[i];
            arr[i] = arr[min];
            arr[min] = x;
        }
    }
    //Problem 4 - Solution Credit: Jan
    public static void twoDSolution(int[][] arr) {
        int k = 1;
        while (k == 1) {
            for (int i = 0; i < arr.length - 1; i++) {
                if (arr[i][1] > arr[i + 1][1]) {
                    k = 1;
                } else if (arr[i][1] < arr[i + 1][1]) k = 0;
                for (int j = 0; j < arr.length - 1; j++) {
                    if (arr[j][1] > arr[j + 1][1]) {
                        int x = arr[j][1];
                        arr[j][1] = arr[j + 1][1];
                        arr[j + 1][1] = x;
                        int n = arr[j][0];
                        arr[j][0] = arr[j + 1][0];
                        arr[j + 1][0] = n;
                    }
                }
            }
        }
    }


}
