package searchingSorting;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class sortingChallenge {
    public static void main(String[] args) throws IOException {
        int random1Size = 10000000;
        int[] random1 = new int[random1Size]; //ten million in size

        BufferedReader f = new BufferedReader(new FileReader("random1.txt"));
        for (int i = 0; i < random1Size; i++) {
            random1[i] = Integer.parseInt(f.readLine());
        }

        long time2 = System.nanoTime();
        MatthewSort(random1);
        long time3 = System.nanoTime();
        double sortTime = (double) (time3 - time2) / (double) 1000000;
        //random1 is your unsorted array

        System.out.println(verifySorted(random1));
        System.out.println(sortTime);

    }

    public static void MatthewSort(int[] arr){
        int[] keys = new int[100001]; //number of unique keys
        int[] fin = new int[arr.length];
        int repeat = 0;
        int countnum = 0;
        for(int i = 0; i < arr.length; i++){
            keys[arr[i]] += 1;
        }
        repeat = keys[countnum];
        for(int j = 0; j < arr.length; j++){
            while(repeat==0){
                countnum++;
                repeat = keys[countnum];
            }
            arr[j] = countnum;
            repeat--;
        }
    }

    public static void AaronSort(int[] array){
        int[] arr = new int[100001];
        for(int i = 0; i < array.length; i ++){
            arr[array[i]] += 1;
        }
        int index = 0;
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[i]; j++){
                array[index] = i;
                index++;
            }
        }
    }

    private static boolean verifySorted(int[] array) {
        for (int i = 1; i < array.length; i++) {
            if (array[i - 1] > array[i]) return false;
        }
        return array[0] == 1 && array[array.length - 1] == 100000;
    }

}
