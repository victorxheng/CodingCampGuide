package searchingSorting;

import java.util.ArrayList;
import java.util.Arrays;

public class SearchingProblems {
    public static void main(String[] args) {
        int[] arr1 = new int[] {1, 4, 6, 3};
        System.out.println(findInteger(arr1, 4));

        int[] arr2 = new int[] {1, 4, 6, 3, 4, 5, 6, 4};
        System.out.println(findAllIntegers(arr2, 4));
    }

    //Problem 1 - Solution Credit: Aaron
    public static int findInteger(int[] array, int num) {
        for (int i = 0; i < array.length; i++) {
            if (num == array[i]) {
                return i;
            }
        }
        return -1;
    }

    //Problem 2 - Solution Credit: Aaron
    public static ArrayList<Integer> findAllIntegers(int[] array, int num) {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        for (int i = 0; i < array.length; i++) {
            if(num == array[i]) {
                arrayList.add(i);
            }
        }
        return arrayList;
    }

    //Problem 3 - Solution Credit: Joseph
    public static int[] find(int[][] list, int a){
        int[] b = new int[2];
        for(int i = 0; i<list.length; i++){
            for(int j = 0; j<list[i].length; j++){
                if(list[i][j] == a){
                    b[0] = i;
                    b[1] = j;
                }
            }
        }
        return b;
    }

    //Problem 4 = Solution Credit: Joseph
    public static ArrayList<int[]> findall(int[][] list, int a){
        ArrayList<int[]> t = new ArrayList<int[]>();
        for(int i = 0; i<list.length; i++){
            for(int j = 0; j<list[i].length; j++){
                if(list[i][j] == a){
                    t.add(new int[] {i, j});
                }
            }
        }
        return t;
    }


}
