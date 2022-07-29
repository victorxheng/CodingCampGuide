package searchingSorting;

public class InsertionMergeProblems {
    public static void main(String[] args) {

    }
    //Problem 1 - Solution Credit: Aaron
    public static void reverseInsertionSort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int j = array[i];
            int mover = i - 1;
            while (mover > -1 && j > array[mover]) {
                array[mover + 1] =  array[mover];
                mover--;
            }
            array[mover + 1] = j;
        }
    }


    //Problem 2 - Solution Credit: Aaron
    public static void insertionSortChallenge(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int j = array[i];
            int mover = i - 1;
            while (mover > -1 && smallerBigger(j,array[mover])) {
                array[mover + 1] = array[mover];
                mover--;
            }
            array[mover + 1] = j;
        }
    }
    public static boolean smallerBigger(int num, int num2){
        int place = 10;
        if(num == num2){
            return true;
        }
        while ((num % place) / (place / 10) == (num2 % place) / (place / 10)) {
            place *= 10;
        }
        return (num % place) / (place / 10) < (num2 % place) / (place / 10);
    }


    //Problem 3 - Solution Credit: Aaron
    public static int[] merge(int[] array, int[] array2) {
        int pointer1 = 0;
        int pointer2 = 0;
        int[] array3 = new int[(array.length + array2.length)];
        for (int i = 0; i < array3.length; i++) {

            if (pointer1 < array.length && pointer2 < array2.length && array[pointer1] < array2[pointer2]) {
                array3[i] = array[pointer1];
                pointer1++;
            }
            else if (pointer1 < array.length && pointer2 < array2.length && array[pointer1] >= array2[pointer2]) {
                array3[i] = array2[pointer2];
                pointer2++;
            }
            else {
                if (pointer1 >= array.length) {
                    array3[i] = array2[pointer2];
                    pointer2++;
                }
                else if (pointer2 >= array2.length) {
                    array3[i] = array[pointer1];
                    pointer1++;
                }
            }
        }
        return array3;
    }


    //Extension 3.a - Solution Credit: Aaron
    public static void oneArrayMerge(int[] array3, int x) {
        int[] array2 = new int[(x)];
        int[] array = new int[(array3.length - x)];
        for (int i = 0; i < x; i++) {
            array2[i] = array3[i];
        }
        for (int i = x; i < array3.length; i++) {
            array[i - x] = array3[i];
        }
        int pointer1 = 0;
        int pointer2 = 0;
        for (int i = 0; i < array3.length; i++) {

            if (pointer1 < array.length && pointer2 < array2.length && array[pointer1] < array2[pointer2]) {
                array3[i] = array[pointer1];
                pointer1++;
            } else if (pointer1 < array.length && pointer2 < array2.length && array[pointer1] >= array2[pointer2]) {
                array3[i] = array2[pointer2];
                pointer2++;
            } else {
                if (pointer1 >= array.length) {
                    array3[i] = array2[pointer2];
                    pointer2++;
                } else if (pointer2 >= array2.length) {
                    array3[i] = array[pointer1];
                    pointer1++;
                }
            }
        }
    }


}
